/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:32:24 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/22 01:53:43 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void	ft_atoi_test(void)
{
	char	*str = "4748143454345936488";
	/* char	*str = "\t\n\v\f\r +123adfsd"; */

	printf("string: %s; atoi result: %d\n", str, atoi(str));
	printf("string: %s; ft_atoi result: %d\n", str, ft_atoi(str));
} 

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

void	ft_strtrim_test(void)
{
	char	*s1 = "tattattttvtavaernantatat";
	char	*s2 = "tataaatatttataaatata";
	char	*s3 = "";
	char	*s4 = "vern";
	char	*set = "ta";

	printf("string:\t\t'%s'\n", s1);
	printf("set:\t\t'%s'\n", set);
	printf("expected:\t'vtavaernan'\n");
	printf("result:\t\t'%s'\n", ft_strtrim(s1, set));

	printf("\nstring:\t\t'%s'\n", s2);
	printf("set:\t\t'%s'\n", set);
	printf("expected:\t''\n");
	printf("result:\t\t'%s'\n", ft_strtrim(s2, set));

	printf("\nstring:\t\t'%s'\n", s3);
	printf("set:\t\t'%s'\n", set);
	printf("expected:\t''\n");
	printf("result:\t\t'%s'\n", ft_strtrim(s3, set));

	printf("\nstring:\t\t'%s'\n", s4);
	printf("set:\t\t'%s'\n", set);
	printf("expected:\t'vern'\n");
	printf("result:\t\t'%s'\n", ft_strtrim(s4, set));
}

void	ft_split_test(void)
{
	char	*s1 = ".ultima..............string.poteiro.nulo.";
	char	*s2 = "..";
	char	*s3 = "";
	char	*s4 = "ultima";
	char	*s5 = "u........a";
	char	c = '.';
	char	**mtx = ft_split(s1, c);
	char	**mtx2 = ft_split(s2, c);
	char	**mtx3 = ft_split(s3, c);
	char	**mtx4 = ft_split(s4, c);
	char	**mtx5 = ft_split(s5, c);
	int		i = 0;

	printf("string:\t\t'%s'\n", s1);
	printf("char:\t\t'%c'\n", c);
	printf("expected:\t'ultima','string','poteiro','nulo'\n");
	while (mtx[i] != NULL)
	{
		printf("mtx[%i]:\t\t'%s'\n", i, mtx[i]);
		i ++;
	}
	free(mtx);
	i = 0;
	printf("\n\nstring:\t\t'%s'\n", s2);
	printf("char:\t\t'%c'\n", c);
	printf("expected:\t''\n");
	while (mtx2[i] != NULL)
	{
		printf("mtx2[%i]:\t'%s'\n", i, mtx2[i]);
		i ++;
	}
	free(mtx2);
	i = 0;
	printf("\n\nstring:\t\t'%s'\n", s3);
	printf("char:\t\t'%c'\n", c);
	printf("expected:\t''\n");
	while (mtx3[i] != NULL)
	{
		printf("mtx3[%i]:\t'%s'\n", i, mtx3[i]);
		i ++;
	}
	free(mtx3);
	i = 0;
	printf("\n\nstring:\t\t'%s'\n", s4);
	printf("char:\t\t'%c'\n", c);
	printf("expected:\t'ultima'\n");
	while (mtx4[i] != NULL)
	{
		printf("mtx4[%i]:\t'%s'\n", i, mtx4[i]);
		i ++;
	}
	free(mtx4);
	i = 0;
	printf("\n\nstring:\t\t'%s'\n", s5);
	printf("char:\t\t'%c'\n", c);
	printf("expected:\t'u','a'\n");
	while (mtx5[i] != NULL)
	{
		printf("mtx5[%i]:\t'%s'\n", i, mtx5[i]);
		i ++;
	}
	free(mtx5);
	i = 0;
}

void	ft_itoa_test(void)
{
	int		n = -2147483648;
	char	*src = ft_itoa(n);

	printf("%s\n", src);
}

int	main(void)
{
	ft_itoa_test();
	return (0);
}
