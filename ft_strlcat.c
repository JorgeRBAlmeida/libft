/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:42:50 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/18 13:51:01 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
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
