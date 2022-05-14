/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:05:09 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/14 09:58:03 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while ((i < dstsize) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i ++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (i);
}

/* int	main(void)
{
	char dst[20] = "teste";
	const char *src = "42riosdfsdfsdfsd";
	int	rtn = 0;

	printf("dst: '%s'\tsrc: '%s'\n", dst, src);
	rtn = ft_strlcpy(dst, src, 20);
	printf("dst: '%s'\tretorno ft_strlcpy: '%d'\n", dst, rtn);
} */
