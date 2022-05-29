/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:19:47 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/29 20:19:59 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	lenneedle;

	index = 0;
	lenneedle = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	if (needle == haystack)
		return ((char *)needle);
	if (len == 0)
		return (NULL);
	while ((index < (len - lenneedle)) && (haystack[index] != '\0'))
	{
		if (haystack[index] == needle[0])
		{
			if (!ft_strncmp(haystack + index, needle + 0, lenneedle))
				return ((char *)&haystack[index]);
		}
		index ++;
	}
	return (NULL);
}
