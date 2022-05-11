/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:04:05 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/11 16:18:16 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*z;
	size_t	i;

	z = s;
	i = 0;
	if (n > 0)
	{
		while (i <= n)
		{
			z[i] = '\0';
			i ++;
		}
	}
}

int	main(void)
{
	char	s[10] = "asdsda";

	ft_bzero(s, 6);
	printf("retorno => '%s'", s);
}
