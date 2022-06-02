/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:32:24 by joalmeid          #+#    #+#             */
/*   Updated: 2022/06/02 15:12:18 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>
#include <string.h>
#include <ctype.h>

static void	print_arr(char *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("%i - %p\tvalue = '%c'\n", i, (void *)&arr[i], arr[i]);
		i ++;
	}
}

static char	ft_strupper_first(unsigned int i, char c)
{
	if (i == 0 && ft_isalpha(c))
		return (ft_toupper(c));
	else if (i != 0 && ft_isalpha(c))
		return (ft_tolower(c));
	return (c);
}

static void	ft_strupper_first2(unsigned int i, char *c)
{
	char	*out = c;
	if (!ft_isalpha(*out))
		return ;
	if ((*out >= 97 && *out <= 122) && i == 0)
		*out = *out - 32;
	else if ((*out >= 65 && *out <= 90) && i != 0)
		*out = *out + 32;
}

void	ft_atoi_test(void)
{
	char	*str = "92233720368547758084534512";
	char	*str2 = "\t\n\v\f\r +123adfsd";
	char	*str3 = "2147483647";
	char	*str4 = "-2147483648";
	char	*str5 = "";
	char	*str6 = "-92233";
	char	*str7 = "-1";
	char	*str8 = "8";

	printf("string1:\t'%s'\natoi result:\t %d\n", str, atoi(str));
	printf("ft_atoi result:\t %d\n\n", ft_atoi(str));

	printf("string2:\t'\\t\\n\\v\\f\\r +123adfsd'\natoi result:\t %d\n", atoi(str2));
	printf("ft_atoi result:\t %d\n\n", ft_atoi(str2));

	printf("string3:\t'%s'\natoi result:\t %d\n", str3, atoi(str3));
	printf("ft_atoi result:\t %d\n\n", ft_atoi(str3));

	printf("string4:\t'%s'\natoi result:\t %d\n", str4, atoi(str4));
	printf("ft_atoi result:\t %d\n\n", ft_atoi(str4));

	printf("string5:\t'%s'\natoi result:\t %d\n", str5, atoi(str5));
	printf("ft_atoi result:\t %d\n\n", ft_atoi(str5));

	printf("string6:\t'%s'\natoi result:\t %d\n", str6, atoi(str6));
	printf("ft_atoi result:\t %d\n\n", ft_atoi(str6));

	printf("string7:\t'%s'\natoi result:\t %d\n", str7, atoi(str7));
	printf("ft_atoi result:\t %d\n\n", ft_atoi(str7));

	printf("string8:\t'%s'\natoi result:\t %d\n", str8, atoi(str8));
	printf("ft_atoi result:\t %d\n\n", ft_atoi(str8));
} 

void	ft_bzero_test(void)
{
	char	s[12] = "teste bzero";
	char	s2[12] = "teste bzero";
	char	s3[12] = "teste bzero";
	int num = sizeof(s);
	printf("\t=========string=========\n");
	print_arr(s, num);
	printf("\tft_bzero n: 3=========\n");
	printf("\texpected: '\\0\\0\\0te bzero\\0'\n");
	ft_bzero(s, 3);
	print_arr(s, num);
	printf("\tft_bzero n: length=========\n");
	printf("\texpected: '\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0'\n");
	ft_bzero(s2, ft_strlen(s2));
	print_arr(s2, num);
	printf("\tft_bzero n: length=========\n");
	printf("\texpected: 'teste bzero\\0'\n");
	ft_bzero(s3, 0);
	print_arr(s3, num);
}

void	ft_calloc_test(void)
{
	size_t	num1 = 22234233;
	size_t	size1 = 8;
	void	*buf1 = ft_calloc(num1, size1);
	size_t	num2 = 0;
	size_t	size2 = 0;
	void	*buf2 = ft_calloc(num2, size2);
	size_t	num3 = -1212;
	size_t	size3 = 3;
	void	*buf3 = calloc(num3, size3);

	if (buf1 == NULL)
		printf("Memory allocation failed.\n");
	else
		printf("Memory was allocated.\n");

	if (buf2 == NULL)
		printf("Memory allocation failed.\n");
	else
		printf("Memory was allocated.\n");

	if (buf3 == NULL)
		printf("Memory allocation failed. And it has to\n");
	else
		printf("Memory was allocated. And it's not\n");
}

void	ft_isalnum_test(void)
{
	int	c = 0;
	int	i = 0;

	while (ft_isascii(c))
	{
		if (ft_isalnum(c))
			printf("%d char: %c ft_isalnum? YES\n", i, c);
		else
			printf("%d char: %c ft_isalnum? NO\n", i, c);
		i ++;
		c ++;
	}
}

void	ft_isalpha_test(void)
{
	char	c = 0;
	int		i = 0;

	while (ft_isascii(c))
	{
		if (ft_isalpha(c))
			printf("%d char: %c ft_isalpha? YES\n", i, c);
		else
			printf("%d char: %c ft_isalpha? NO\n", i, c);
		i ++;
		c ++;
	}
}

void	ft_isdigit_test(void)
{
	char	c = 0;
	int		i = 0;

	while (ft_isascii(c))
	{
		if (ft_isdigit(c))
			printf("%d char: %c ft_isdigit? YES\n", i, c);
		else
			printf("%d char: %c ft_isdigit? NO\n", i, c);
		i ++;
		c ++;
	}
}

void	ft_isprint_test(void)
{
	char	c = 0;
	int		i = 0;

	while (ft_isascii(c))
	{
		if (ft_isprint(c))
			printf("%d char: %c ft_isprint? YES\n", i, c);
		else
			printf("%d char: %c ft_isprint? NO\n", i, c);
		i ++;
		c ++;
	}
}

void	ft_itoa_test(void)
{
	int		n = -2147483648;
	int		n2 = 1;
	int		n3 = 0;
	int		n4 = 2147483647;
	char	*src = ft_itoa(n);
	char	*src2 = ft_itoa(n2);
	char	*src3 = ft_itoa(n3);
	char	*src4 = ft_itoa(n4);

	printf("n1 =\t'%i'\n", n);
	printf("src1 =\t'%s' %zu\n", src, ft_strlen(src));

	printf("\nn2 =\t'%i'\n", n2);
	printf("src1 =\t'%s' %zu\n", src2, ft_strlen(src2));

	printf("\nn3 =\t'%i'\n", n3);
	printf("src1 =\t'%s' %zu\n", src3, ft_strlen(src3));

	printf("\nn4 =\t'%i'\n", n4);
	printf("src1 =\t'%s' %zu\n", src4, ft_strlen(src4));

}

void	ft_memchr_test(void)
{
	char	*src1 = "";
	char	*src2 = "a";
	char	*src3 = " \t    testando memchr achando z\t!";
	char	*src4 = "zzzzzzzzzzzzzzzz";
	char	*src5 = "ztestando memchr achando";
	char	*src6 = "testando memchr achandoz";
	char	*src7 = "testando mem z chr achando";
	char	c = 'z';

	printf("\nstring1:\t'%s'\nlength de busca:\t%zu\n", src1, ft_strlen(src1));
	printf("result ft_memchr:\t'%s'\n", (unsigned char *)ft_memchr(src1, c, ft_strlen(src1)));
	printf("expected:\t\t'(null)'\n");

	printf("string2:\t'%s'\nlength de busca:\t%zu\n", src2, ft_strlen(src2));
	printf("result ft_memchr:\t'%s'\n", (unsigned char *)ft_memchr(src2, c, ft_strlen(src2)));
	printf("expected:\t\t'(null)'\n");

	printf("string3:\t'%s'\nlength de busca:\t%zu\n", src3, ft_strlen(src3));
	printf("result ft_memchr:\t'%s'\n", (unsigned char *)ft_memchr(src3, c, ft_strlen(src3)));
	printf("expected:\t\t'z\t!'\n");

	printf("string4:\t'%s'\nlength de busca:\t%i\n", src4, 0);
	printf("result ft_memchr:\t'%s'\n", (unsigned char *)ft_memchr(src4, c, 1));
	printf("expected:\t\t'(null)'\n");

	printf("string5:\t'%s'\nlength de busca:\t%i\n", src5, 1);
	printf("result ft_memchr:\t'%s'\n", (unsigned char *)ft_memchr(src5, c, 1));
	printf("expected:\t\t'ztestando memchr achando'\n");

	printf("string6:\t'%s'\nlength de busca:\t%zu\n", src6, ft_strlen(src6));
	printf("result ft_memchr:\t'%s'\n", (unsigned char *)ft_memchr(src6, c, ft_strlen(src6)));
	printf("expected:\t\t'z'\n");

	printf("string7:\t'%s'\nlength de busca:\t%i\n", src7, 14);
	printf("result ft_memchr:\t'%s'\n", (unsigned char *)ft_memchr(src7, c, 14));
	printf("expected:\t\t'z chr achando'\n");

	printf("string7:\t'%s'\nlength de busca:\t%i\n", src7, 140);
	printf("result ft_memchr:\t'%s'\n", (unsigned char *)ft_memchr(src7, c, 140));
	printf("expected:\t\t'z chr achando'\n");
}

void	ft_memcmp_test(void)
{
	char	*src1 = " \t    testando memchr achando z\t!";
	char	*src2 = " \t    testando memchr achando z\t!";
	char	*src3 = "testandoz memchr achando";
	char	*src4 = "testandot memchr achando";
	int		num1 = 5;
	int		num2 = 200;
	void		*p1 = &num1;
	void		*p2 = &num1;

	printf("\nstring1:\t'%s'\nstring2:\t'%s'\nlength de cmp:\t'%zu\n'", src1, src2, ft_strlen(src1));
	printf("result ft_memchr:\t'%i'\n", ft_memcmp(src1, src2, ft_strlen(src1)));
	printf("expected:\t\t'0'\n");

	printf("\nstring3:\t'%s'\nstring4:\t'%s'\nlength de cmp:\t'%zu\n'", src3, src4, ft_strlen(src3));
	printf("result ft_memchr:\t'%i'\n", ft_memcmp(src3, src4, ft_strlen(src3)));
	printf("expected:\t\t'6'\n");

	printf("\nstring3:\t'%s'\nstring4:\t'%s'\nlength de cmp:\t'%i\n", src3, src4, 8);
	printf("result ft_memchr:\t'%i'\n", ft_memcmp(src3, src4, 8));
	printf("expected:\t\t'0'\n");

	printf("\nstring3:\t'%s'\nstring4:\t'%s'\nlength de cmp:\t'%i\n", src3, src4, 9);
	printf("result ft_memchr:\t'%i'\n", ft_memcmp(src3, src4, 9));
	printf("expected:\t\t'6'\n");

	printf("\nnum1:\t'%i'\nnum2:\t'%i'\nlength de cmp:\t'%i\n", num1, num2, 1);
	printf("result ft_memchr:\t'%i'\n", ft_memcmp(&num1, &num2, 1));
	printf("expected:\t\t'-195'\n");

	printf("\nnum1:\t'%p'\nnum2:\t'%p'\nlength de cmp:\t'%i\n", p1, p2, 1);
	printf("result ft_memchr:\t'%i'\n", ft_memcmp(p1, p2, 1));
	printf("expected:\t\t'0'\n");
}

void	ft_memcpy_test(void)
{
	char csrc[] = "TestandoMemcpy";
	char cdest[100];
	ft_memcpy(cdest, csrc, ft_strlen(csrc)+1);
	printf("result ft_memcpy:\t %s", cdest);
  
	int isrc[] = {10, 20, 30, 40, 50};
	int n = sizeof(isrc)/sizeof(isrc[0]);
	int idest[n], i;
	ft_memcpy(idest, isrc, sizeof(isrc));
	printf("\nCopied array is ");
	for (i=0; i<n; i++)
	printf("%d ", idest[i]);
}

void	ft_memmovecpy_test(void)
{
	char str1[50] = "I am going from Delhi to Gorakhpur";
	char str2[50] = "I am going from Delhi to Gorakhpur";

	printf( "=========ft_memcpy with overlap=========\n" );
	printf( "string2 :\t%s\n",str2);
	printf( "source:\t\t%s\n", str2 + 5 );
	printf( "destination:\t%s\n", str2 + 11 );
	ft_memcpy( str2 + 11, str2 + 5, 29 );
	printf( "result:\t\t%s\n", str2 );
	printf( "length:\t\t%ld characters\n\n", ft_strlen( str2 ) );

	printf( "=========ft_memmove with overlap=========\n" );
	printf( "string1:\t%s\n",str1);
	printf( "source:\t\t%s\n", str1 + 5 );
	printf( "destination:\t%s\n", str1 + 11 );
	ft_memmove( str1 + 11, str1 + 5, 29 );
	printf( "result:\t\t%s\n", str1 );
	printf( "length:\t\t%ld characters\n\n", ft_strlen( str1 ) );
}

void	ft_memset_test(void)
{
	char	s1[16] = "testando memset";
	char	s2[16] = "testando memset";
	int num = sizeof(s1);
	printf("==========string=========\n");
	print_arr(s1, num);
	printf("ft_memset n: length=========\n");
	printf("\texpected: '##############\\0'\n");
	ft_memset(s1, '#', ft_strlen(s1));
	print_arr(s1, num);
	printf("ft_memset n: 3=========\n");
	printf("\texpected: '###tando memset\\0'\n");
	ft_memset(s2, '#', 3);
	print_arr(s2, num);
}

void	ft_strnstr_test(void)
{
	char *s1 = "see FF your FF return FF now FF";
	char *s2 = "FF";
	char *s3 = "lorem ipsum dolor sit amet";
	char *s4 = "dolor";
	char *s5 = "aaabcabcd";
	char *s6 = "aaabc";

	printf("haystack1:\t\t'%s'\n", s1);
	printf("needle1:\t\t'%s'\n", s2);
	printf("length:\t\t\t'%zu'\n", ft_strlen(s1));
	printf("result ft_strnstr:\t'%s'\n\n", ft_strnstr(s1, s2, ft_strlen(s1)));

	printf("haystack2:\t\t'%s'\n", s3);
	printf("needle2:\t\t'%s'\n", s4);
	printf("length:\t\t\t'0'\n");
	printf("result ft_strnstr:\t'%s'\n\n", ft_strnstr(s3, s4, 0));

	printf("haystack3:\t\t'%s'\n", s5);
	printf("needle3:\t\t'%s'\n", s6);
	printf("length:\t\t\t'5'\n");
	printf("result ft_strnstr:\t'%s'\n\n", ft_strnstr(s5, s6, 5));
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

void	ft_strlcat_test(void)
{
	char *src = "the cake is a lie !\0I'm hidden lol\r\n"; //19
	char dst1[0xF00] = "there is no stars in the sky"; //28
	char dst2[0xF00] = "there is no stars in the sky"; //28
	size_t dstsize = ft_strlen("the cake is a lie !\0I'm hidden lol\r\n") + 8; //23

	char *expec = "rrrrrrlorema\0\0\0";
	char *dest1 = (char *)malloc(sizeof(*dest1) * 15);
	memset(dest1, 0, 15);
	memset(dest1, 'r', 6);
	dest1[11] = 'a';

	char *dest2 = (char *)malloc(sizeof(*dest2) * 15);
	memset(dest2, 0, 15);
	memset(dest2, 'r', 6);
	dest2[11] = 'a';

	printf("\ndstsize value:\t\t15\n");
	printf("\nexpected result:\t%s\n\n", expec);
	printf("\ndst string before:\t%s\n\n", dest1);
	printf("return ft_strlcat:\t%zu\n", ft_strlcat(dest1, "lorem", 15));
	printf("dst string result:\t%s\n\n", dest1);
	
	printf("\ndst string before:\t%s\n\n", dest2);
	printf("return strlcat:\t\t%zu\n", strlcat(dest2, "lorem", 15));
	printf("dst string result:\t%s\n\n", dest2);
	
	printf("\ndstsize value:\t\t%zu\n", dstsize);
	printf("\nreturn ft_strlcat:\t%zu\n", ft_strlcat(dst1, src, dstsize));
	printf("dst string result:\t%s\n\n", dst1);
	
	printf("\nreturn strlcat:\t\t%zu\n", strlcat(dst2, src, dstsize));
	printf("dst string result:\t%s\n\n", dst2);
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
	char	*s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n";
	char	*s2 = "tataaatatttataaatata";
	char	*s3 = "";
	char	*s4 = "vern";
	char	*set = " \t\n";

	printf("string:\t\t'%s'\n", s1);
	printf("set:\t\t'%s'\n", set);
	printf("expected:\t''\n");
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
	char	*s1 = "      ultima       string poteiro   nulo  !       ";
	char	*s2 = "           ";
	char	*s3 = "";
	char	*s4 = "ultima";
	char	*s5 = "alllllllllllllllllll a";
	char	*s6 = "u a ";
	char	c = ' ';
	char	**mtx = ft_split(s1, c);
	char	**mtx2 = ft_split(s2, c);
	char	**mtx3 = ft_split(s3, c);
	char	**mtx4 = ft_split(s4, c);
	char	**mtx5 = ft_split(s5, c);
	char	**mtx6 = ft_split(s6, c);
	int		i = 0;

	printf("string:\t\t'%s'\n", s1);
	printf("char:\t\t'%c'\n", c);
	printf("expected:\t'ultima','string','poteiro','nulo'\n");
	while (i <= 5)
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
		free(mtx2[i]);
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
		free(mtx3[i]);
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
		free(mtx4[i]);
	}
	free(mtx4);
	i = 0;
	printf("\n\nstring:\t\t'%s'\n", s5);
	printf("char:\t\t'%c'\n", c);
	printf("expected:\t'alllllllllllllllllll','a'\n");
	while (mtx5[i] != NULL)
	{
		printf("mtx5[%i]:\t'%s'\n", i, mtx5[i]);
		i ++;
		free(mtx5[i]);
	}
	free(mtx5);
	i = 0;
	printf("\n\nstring:\t\t'%s'\n", s6);
	printf("char:\t\t'%c'\n", c);
	printf("expected:\t'u'\n");
	while (mtx6[i] != NULL)
	{
		printf("mtx6[%i]:\t'%s'\n", i, mtx6[i]);
		i ++;
		free(mtx6[i]);
	}
	free(mtx6);
	i = 0;
}

void	ft_strmapi_test(void)
{
	char	*str1 = "nEW TeSt for mAPI.";
	char	*str2 = "Zs1235;.,/ AAA";
	char	*str3 = "";

	printf("str1:\t\t'%s'\n", str1);
	printf("expected:\t'New test for mapi.'\n");
	printf("result:\t\t'%s'\n", ft_strmapi(str1, ft_strupper_first));

	printf("\nstr2:\t\t'%s'\n", str2);
	printf("expected:\t'Zs1235;.,/ aaa'\n");
	printf("result:\t\t'%s'\n", ft_strmapi(str2, ft_strupper_first));

	printf("\nstr3:\t\t'%s'\n", str3);
	printf("expected:\t''\n");
	printf("result:\t\t'%s'\n", ft_strmapi(str3, ft_strupper_first));
}

void	ft_striteri_test(void)
{
	char	str1[19] = "nEW TeSt for mAPI.";
	char	str2[15] = "Zs1235;.,/ AAA";
	char	str3[1] = "";

	printf("str1 before:\t\t'%s'\n", str1);
	printf("expected:\t\t'New test for mapi.'\n");
	ft_striteri(str1, ft_strupper_first2);
	printf("str1 after:\t\t'%s'\n", str1);

	printf("\nstr2 before:\t\t'%s'\n", str2);
	printf("expected:\t\t'Zs1235;.,/ aaa'\n");
	ft_striteri(str2, ft_strupper_first2);
	printf("str2 after:\t\t'%s'\n", str2);

	printf("\nstr3 before:\t\t'%s'\n", str3);
	printf("expected:\t\t''\n");
	ft_striteri(str3, ft_strupper_first2);
	printf("str3 after:\t\t'%s'\n", str3);
}

void	ft_putchar_fd_test(void)
{
	char	s[19] = "testing putchar_fd\n";
	int		i = -1;

	while (s[++ i])
		ft_putchar_fd(s[i], 1);

}

void	ft_putstr_fd_test(void)
{
	char	s[19] = "testing putstr_fd\n";
	char	*s2 = NULL;

	ft_putstr_fd(s, 1);
	ft_putstr_fd(s2, 1);
}

void	ft_putendl_fd_test(void)
{
	char	s[18] = "testing putendl_fd";
	char	*s2 = NULL;

	ft_putendl_fd(s, 1);
	ft_putendl_fd(s2, 1);
}

void	ft_putnbr_fd_test(void)
{
	int		n = -2147483648;
	int		n2 = 1;
	int		n3 = 0;
	int		n4 = 2147483647;

	write(1,"expected:\t'-2147483648'", 24);
	write(1,"\nresult:\t\t ", 11);
	ft_putnbr_fd(n, 1);
	ft_putchar_fd('\n', 1);

	write(1,"\nexpected:\t'1'", 15);
	write(1,"\nresult:\t\t ", 11);
	ft_putnbr_fd(n2, 1);
	ft_putchar_fd('\n', 1);

	write(1,"\nexpected:\t'0'", 15);
	write(1,"\nresult:\t\t ", 11);
	ft_putnbr_fd(n3, 1);
	ft_putchar_fd('\n', 1);

	write(1,"\nexpected:\t'2147483647'", 24);
	write(1,"\nresult:\t\t ", 11);
	ft_putnbr_fd(n4, 1);
	ft_putchar_fd('\n', 1);
}

int	main(void)
{
	/* ft_strnstr_test(); */
	return (0);
}
