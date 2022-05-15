/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 23:00:12 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/15 15:18:00 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if (n == 0)
	{
		return (dst);
	}
	if (d < s)
		return (ft_memcpy(dst, src, n));
	if (d > s)
	{
		while (n > 0)
		{
		d[n -1] = s[n - 1];
		-- n;
		}
	}
	return (dst);
}

/* int main ()
{
	char dest[] = "Aticleworld";
	const char src[]  = "Amlendra";
	//Source and destination before memmove
	printf("Before memmove >> dest = %s, src = %s\n\n", dest, src);
	ft_memmove(dest, src, 5);
	//Source and destination after memmove
	printf("After memmove >> dest = %s, src = %s\n\n", dest, src);
	return 0;
} */

/* int main()
{
    char str1[50] = "I am going from Delhi to Gorakhpur";
    char str2[50] = "I am going from Delhi to Gorakhpur";
    //Use of memmove
    printf( "Function:\tft_memmove with overlap\n" );
    printf( "Orignal :\t%s\n",str1);
    printf( "Source:\t\t%s\n", str1 + 5 );
    printf( "Destination:\t%s\n", str1 + 11 );
    ft_memmove( str1 + 11, str1 + 5, 29 );
    printf( "Result:\t\t%s\n", str1 );
    printf( "Length:\t\t%ld characters\n\n", ft_strlen( str1 ) );
    //Use of memcpy
    printf( "Function:\tft_memcpy with overlap\n" );
    printf( "Orignal :\t%s\n",str2);
    printf( "Source:\t\t%s\n", str2 + 5 );
    printf( "Destination:\t%s\n", str2 + 11 );
    ft_memcpy( str2 + 11, str2 + 5, 29 );
    printf( "Result:\t\t%s\n", str2 );
    printf( "Length:\t\t%ld characters\n\n", ft_strlen( str2 ) );
    return 0;
} */