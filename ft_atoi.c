/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:50:12 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/14 14:02:13 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i ++;
	if (str[i] == '+')
		i ++;
	if (str[i] == '-')
	{
		sign = sign * (-1);
		i ++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - 48);
		i ++;
	}
	return (result * sign);
}

/* int	main(void)
{
	char	*str = "\t\n\v\f\r +123adfsd";

	printf("string: %s; atoi result: %d\n", str, atoi(str));
	printf("string: %s; ft_atoi result: %d\n", str, ft_atoi(str));
} */
