/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:28:26 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/04 16:38:59 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c < 65 || c > 90)
		&& (c < 97 || c > 122))
	{
		return (0);
	}
	return (1);
}

int	main(void)
{
	unsigned char	c;
	int				i;

	i = 0;
	c = i;
	while (i <= 255)
	{
	printf("%d char: %c is alpha? %i\n", i, c, isalpha(c));
	i ++;
	}
}

