/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 01:54:26 by ethebaul          #+#    #+#             */
/*   Updated: 2024/11/18 01:41:11 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;

	i = 0;
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	while (s1[i])
		i++;
	while (ft_strchr(set, s1[i]) && i > 0)
		i--;
	return (ft_substr(s1, 0, i + 1));
}
