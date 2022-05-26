/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:47:17 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/26 15:19:33 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	frtcut(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	offset;
	size_t	j;
	size_t	len_frtcut;
	char	*trimmed;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	offset = frtcut(s1, set);
	len_frtcut = ft_strlen(s1 + offset);
	while (len_frtcut > 0)
	{
		j = 0;
		while (set[j] && s1[len_frtcut + offset - 1] != set[j])
			j ++;
		if (set[j] == '\0')
			break ;
		len_frtcut --;
	}
	trimmed = ft_substr(s1, offset, len_frtcut);
	return (trimmed);
}

static size_t	frtcut(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j] && s1[i] != set[j])
			j ++;
		if (set[j] == '\0')
			break ;
		i ++;
	}
	return (i);
}
