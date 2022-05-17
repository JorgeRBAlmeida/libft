/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:32:24 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/17 14:40:31 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void	ft_substr_test(void)
{
	char	*s = "testando substr";
	char	*sub = ft_substr(s, 4, 7);
	char	*sub2 = ft_substr(s, 0, 1);
	char	*sub3 = ft_substr(s, 0, ft_strlen(s));
	char	*sub4 = ft_substr(s, ft_strlen(s) - 1, 5);
	char	*sub5 = ft_substr(s, 0, 0);

	printf("test1:\t\t'%s'\n", s);
	printf("expected:\t'ando su'\n");
	printf("result:\t\t'%s'\n", sub);
	printf("length sub:\t%li\n", ft_strlen(sub));

	printf("\ntest2:\t\t'%s'\n", s);
	printf("expected:\t't'\n");
	printf("result:\t\t'%s'\n", sub2);
	printf("length sub:\t%li\n", ft_strlen(sub2));

	printf("\ntest3:\t\t'%s'\n", s);
	printf("expected:\t'testando substr'\n");
	printf("result:\t\t'%s'\n", sub3);
	printf("length sub:\t%li\n", ft_strlen(sub3));

	printf("\ntest4:\t\t'%s'\n", s);
	printf("expected:\t'r'\n");
	printf("result:\t\t'%s'\n", sub4);
	printf("length sub:\t%li\n", ft_strlen(sub4));

	printf("\ntest5:\t\t'%s'\n", s);
	printf("expected:\t''\n");
	printf("result:\t\t'%s'\n", sub5);
	printf("length sub:\t%li\n", ft_strlen(sub5));
}

void	ft_strjoin_test(void)
{
	char	*s1 = "testando ";
	char	*s2 = "strjoin";
	char	*s3 = "";
	char	*s4 = "strjoinstrjoinstrjoinstrjoin";
	char	*s5 = "testando strjoin";

	printf("string1:\t'%s'\n", s1);
	printf("string2:\t'%s'\n", s2);
	printf("expected:\t'testando strjoin'\n");
	printf("result:\t\t'%s'\n", ft_strjoin(s1, s2));

	printf("\nstring1:\t'%s'\n", s3);
	printf("string2:\t'%s'\n", s4);
	printf("expected:\t'strjoinstrjoinstrjoinstrjoin'\n");
	printf("result:\t\t'%s'\n", ft_strjoin(s3, s4));

	printf("\nstring1:\t'%s'\n", s4);
	printf("string2:\t'%s'\n", s3);
	printf("expected:\t'strjoinstrjoinstrjoinstrjoin'\n");
	printf("result:\t\t'%s'\n", ft_strjoin(s4, s3));

	printf("\nstring1:\t'%s'\n", s3);
	printf("string2:\t'%s'\n", s3);
	printf("expected:\t''\n");
	printf("result:\t\t'%s'\n", ft_strjoin(s3, s3));

	printf("\nstring1:\t'%s'\n", s5 + 2);
	printf("string2:\t'%s'\n", s5 + 6);
	printf("expected:\t'stando strjoindo strjoin'\n");
	printf("result:\t\t'%s'\n", ft_strjoin(s5 + 2, s5 + 6));
}

int	main(void)
{
	ft_strjoin_test();
	return (0);
}
