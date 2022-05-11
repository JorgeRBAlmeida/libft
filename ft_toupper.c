/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:15:30 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/11 10:17:33 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	c_upp;

	c_upp = c;
	if (c >= 97 && c <= 122)
		c_upp -= 32;
	return (c_upp);
}

int	main(void)
{
	char	c = 0;
	int		i = 0;

	while (i <= 127)
	{
		printf("%d char: %c, toupper returns: %c\n", i, c, ft_toupper(c));
		i ++;
		c = i;
	}
}
