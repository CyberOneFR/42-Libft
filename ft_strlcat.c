/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:02:31 by ethebaul          #+#    #+#             */
/*   Updated: 2024/11/16 15:45:23 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (len < size && dst[len])
		len++;
	i = len;
	while (i + 1 < size && src[i - len])
	{
		dst[i] = src[i - len];
		i++;
	}
	if (size > 0 && len != i)
		dst[i] = '\0';
	while (src[i - len])
		i++;
	return (i);
}
