/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 01:40:57 by ethebaul          #+#    #+#             */
/*   Updated: 2024/11/19 18:40:01 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	str = (char *) malloc((i + j + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i + j] = 0;
	while (--j >= 0)
		str[i + j] = s2[j];
	while (--i >= 0)
		str[i] = s1[i];
	return (str);
}
