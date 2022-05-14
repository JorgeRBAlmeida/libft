/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:42:50 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/14 09:58:15 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(dst);
	if (dstsize > 0)
	{
		while ((i + j) < dstsize && (src[j] != '\0'))
		{
			dst[i + j] = src[j];
			j ++;
		}
		dst[i + j] = '\0';
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
