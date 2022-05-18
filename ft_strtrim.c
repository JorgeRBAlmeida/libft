/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:47:17 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/18 01:09:35 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	lens1;
	char	*trimmed;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j] != '\0' && s1[i] != set[j])
			j ++;
		if (set[j] == '\0')
			break ;
		i ++;
	}
	lens1 = ft_strlen(s1 + i);
	while (lens1 > 0)
	{
		j = 0;
		while (set[j] != '\0' && s1[lens1 + i - 1] != set[j])
			j ++;
		if (set[j] == '\0')
			break ;
		lens1 --;
	}
	trimmed = ft_substr(s1, i, lens1);
	return (trimmed);
}
