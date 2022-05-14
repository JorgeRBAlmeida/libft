/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:13:23 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/14 13:53:32 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}

/* int	main(void)
{
	int	c = 0;

	while (ft_isascii(c))
	{
		printf("%i - char => %c alnum: %i\n", c, (char)c, ft_isalnum(c));
		c ++;
	}
} */
