/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:50:12 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/20 13:10:32 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifndef MAX_INT
# define MAX_INT 2147483647
#endif

#ifndef MIN_INT
# define MIN_INT - 2147483648
#endif

/* static long	overflow_case(long sign)
{
	if (sign == 1)
		return (MAX_INT);
	else
		return (MIN_INT);
}
 */
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

/* 		if (result > MAX_INT / 10 || (result == MAX_INT / 10 && str[i] - '0' > 7))
			return (overflow_case(sign)); */

/* int	main(void)
{
	char	*str = "\t\n\v\f\r +123adfsd";

	printf("string: %s; atoi result: %d\n", str, atoi(str));
	printf("string: %s; ft_atoi result: %d\n", str, ft_atoi(str));
} */
