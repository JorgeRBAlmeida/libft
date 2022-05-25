/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:19:47 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/25 17:34:00 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (needle == haystack)
		return ((char *)needle);
	if (len == 0)
		return (NULL);
	while ((i < len - ft_strlen(needle)) && (haystack[i] != '\0'))
	{
		if (haystack[i] == needle[0])
		{
			if (!ft_strncmp(haystack + i, needle + 0, ft_strlen(needle)))
			{
				return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
