/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:04:05 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/15 15:20:01 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dst;

	dst = s;
	while (n > 0)
	{
		*dst = '\0';
		n --;
		dst ++;
	}
}

/* void printArray(char *arr, int n)
{
	int	i;

	i = 0;
	while (i < (int)n)
	{
		printf("%i - 0x%x\tvalue = '%c'\n", i, ++arr, *arr);
		i ++;
	}
}

int	main(void)
{
	char	s[11] = "fora braz";
	char	s2[11] = "fora braz";
	int num = sizeof(s);
	printf("==========original=========\n");
	printArray(s, num);
	printf("==========ft_bzero=========\n");
	ft_bzero(s, ft_strlen(s));
	printArray(s, num);
	printf("==========ft_bzero=========\n");
	ft_bzero(s2, 3);
	printArray(s2, num);
	return (0);
} */