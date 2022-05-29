/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:50:12 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/29 09:35:52 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	overflow_case(long result, char c);
static	long	has_sign(char c, long *sign);

int	ft_atoi(const char *str)
{
	long	i;
	long	result;
	long	sign;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i ++;
	if (has_sign(str[i], &sign))
		i ++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (overflow_case(result, str[i]) == 1)
			return (-1);
		if (overflow_case(result, str[i]) == 2)
			return (0);
		result = result * 10 + (str[i] - 48);
		i ++;
	}
	return (result * sign);
}

static	long	has_sign(char c, long *sign)
{
	if (c == '+')
		return (1);
	if (c == '-')
	{
		*sign = -1;
		return (1);
	}
	return (0);
}

static long	overflow_case(long result, char c)
{
	long	max;
	long	min;

	max = 9223372036854775807;
	min = -9223372036854775807 - 1;
	if ((result >= (max / 10) && c >= '7') || (result > max))
		return (1);
	else if ((result <= (min / 10) && c >= '8') || result < min)
		return (2);
	else
		return (0);
}
