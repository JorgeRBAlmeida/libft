/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:05:09 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/24 10:28:04 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char *d;
	const char *s;
	size_t n;
	
	d = dst;
	s = src;
	n = dstsize;
	if (n != 0)
	{
		while (-- n != 0)
		{
			if ((*d ++ = *s ++) == '\0')
				break;
		}
	}
	if (n == 0)
	{
		if (dstsize != 0)
			*d = '\0';
		while (*s ++)
			;
	}
	return(s - src - 1);
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
