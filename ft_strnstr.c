/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:19:47 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/13 16:16:01 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1,const char *s2, size_t n);

size_t	ft_strlen(const char *s);	

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	while ((needle[0] != '\0') && (i <= len) && (haystack[i] != '\0'))
	{
		if (haystack[i] == needle[0])
			if (!ft_strncmp((char *)&haystack[i], needle, ft_strlen(needle - 1)))
				break;
		i++;
	}
	return ((char *) &haystack[i]);
}

int	main(void)
{
	char *haystack = "vamos testar essa string.";
	char *needle = "string.";

	printf("retorno =  '%s'", ft_strnstr(haystack, needle, 18));
}
