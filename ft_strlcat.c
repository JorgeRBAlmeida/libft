/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:42:50 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/24 12:42:54 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

/* size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	j = 0;
	i = ft_strlen(dst);
	if (i == size - 1)
		return (i);
	if (size > 0)
	{
		while (s[j] != '\0')
		{
			d[i + j] = s[j];
			j ++;
			if (i + j == size)
				break ;
		}
		d[i + j] = '\0';
	}
	return (i + j);
} */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		n;
	char		*d;
	const char	*s;

	s = src;
	d = dst + ft_strlen(dst);
	n = size;
	/* if (*d > d[n - 1])
	{
		d[n - 1] = '\0';
		return (n - 1);
	} */
	if (n != 0)
	{
		while (-- n > 0)
		{
			if ((*d ++ = *s ++) == '\0')
				break ;
		}
	}
	if (n == 0)
	{
		if (size != 0)
			*d = '\0';
		while (*s ++)
			;
	}
	return (s - src - 1);
}

/* int	main(void)
{
	char	dst[20] = "teste";
	char	dst2[20] = "teste2";
	char	*src = "42rio";
	size_t	rtn;

	printf("=====ANTES DA FT_STRLCAT=====\n");
	printf("valor inicial dst: '%s'\tvalor src: '%s'\n", dst, src);
	rtn = ft_strlcat(dst, src, 20);
	printf("=====DEPOIS DA FT_STRLCAT=====\n");
	printf("valor final dst: '%s'\tvalor retorno ft_strlcat: '%zu'\n", dst, rtn);
} */
