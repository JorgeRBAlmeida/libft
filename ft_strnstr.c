/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:19:47 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/14 14:01:12 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	while ((needle[0] != '\0') && (i < len) && (haystack[i] != '\0'))
	{
		if (haystack[i] == needle[0])
			if (!ft_strncmp(haystack + i, needle, ft_strlen(needle)))
				break ;
		i++;
	}
	return ((char *) haystack + i);
}

/* int	main(void)
{
	char *haystack = "vamos testar essa string.";
	char *needle = "";
	int r = strncmp(haystack, needle, ft_strlen(needle));
	int r2 = ft_strncmp(haystack, needle, ft_strlen(needle));

	printf("retorno ft_strnstr = '%s'\n", \
	ft_strnstr(haystack, needle, ft_strlen(haystack)));
	printf("retorno strncmp = %i\n", r);
	printf("retorno ft_strncmp = %i\n", r2);
} */
