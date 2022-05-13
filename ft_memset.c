/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:59:16 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/13 19:56:24 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *dst;

	dst = s;
	while (n > 0)
	{
		*dst = (unsigned char) c;
		n --;
		*dst ++;
	}
	return (dst);
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
	printf("==========ft_memset=========\n");
	ft_memset(s, 126, ft_strlen(s));
	printArray(s, num);
	printf("==========ft_memset=========\n");
	ft_memset(s2, 126, 3);
	printArray(s2, num);
	return (0);
} */