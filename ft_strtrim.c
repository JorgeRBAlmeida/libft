/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:47:17 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/23 00:50:22 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	front_trim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	lens1;
	char	*trimmed;

	j = 0;
	lens1 = ft_strlen(s1 + i);
	i = front_trim(s1, set);
	while (lens1 > 0)
	{
		while (set[j] != '\0' && s1[lens1 + i - 1] != set[j])
			j ++;
		if (set[j] == '\0')
			break ;
		lens1 --;
	}
	trimmed = ft_substr(s1, i, lens1);
	return (trimmed);
}

static size_t	front_trim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j] != '\0' && s1[i] != set[j])
			j ++;
		if (set[j] == '\0')
			break ;
		i ++;
	}
	return (i);
}
