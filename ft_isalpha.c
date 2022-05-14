/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:28:26 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/14 13:39:27 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 65 || c > 90)
		&& (c < 97 || c > 122))
		return (0);
	return (1);
}

/* int	main(void)
{
	char	c;
	int		i;

	i = 0;
	c = 0;
	while (i <= 127)
	{
		printf("%d char: %c isalpha? %i\n", i, c, isalpha(c));
		printf("%d char: %c ft_isalpha? %i\n", i, c, ft_isalpha(c));
		i ++;
		c = i;
	}
} */
