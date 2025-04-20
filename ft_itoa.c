/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:33:32 by ethebaul          #+#    #+#             */
/*   Updated: 2024/11/19 18:26:58 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	const char	*base = "9876543210123456789";
	char		tmp[12];
	char		*str;
	size_t		i;

	i = 12;
	tmp[--i] = 0;
	while (n != 0 || i == 11)
	{
		tmp[--i] = base[(n % 10) + 9];
		if (n < 0 && n > -10)
			tmp[--i] = '-';
		n /= 10;
	}
	str = ft_strdup(&tmp[i]);
	return (str);
}
