/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:37:09 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/15 15:16:35 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t n)
{
	const unsigned char	*s1 = b1;
	const unsigned char	*s2 = b2;

	if (s1 == s2)
		return (0);
	while (n && *s1 == *s2)
	{
		++ s1;
		++ s2;
		-- n;
	}
	if (n == 0)
		return (0);
	else
		return (*s1 - *s2);
}

/* int	main(void)
{
	char	*s1 = "tes1te\0124";
	char	*s1cp = "tes1te\0124";
	char	*s2 = "tes1te\01;4sdf";
	int	result = memcmp(s1, s2, ft_strlen(s1));
	int	ft_result = ft_memcmp(s1cp, s2, ft_strlen(s1cp));

	printf("result memcmp: '%d'\n", result);
	printf("result ft_memcmp: '%d'\n", ft_result);
} */
