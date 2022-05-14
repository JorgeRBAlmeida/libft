/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:19:45 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/14 14:05:38 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && *s2 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n <= 0)
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/* int	main(void)
{
	char	*s1 = "teste124";
	char	*s1cp = "teste124";
	char	*s2 = "teste124sdf";
	int	result = strncmp(s1, s2, 9);
	int	ft_result = ft_strncmp(s1cp, s2, 9);

	printf("result strncmp: '%d'\n", result);
	printf("result ft_strncmp: '%d'", ft_result);
} */
