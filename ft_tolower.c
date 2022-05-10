/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:32:56 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/10 13:41:13 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int	c_upp;

	c_upp = c;
	if (c >= 97 && c <= 122)
	{
		c_upp -= 32;
	}
	return (c_upp);
}

int	main(void)
{
	char	c = 0;
	int		i = 0;

	while (i <= 127)
	{
		printf("%d char: %c, tolower returns: %c\n", i, c, ft_tolower(c));
		i ++;
		c = i;
	}
}
