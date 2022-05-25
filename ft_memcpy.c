/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:35:15 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/25 13:01:05 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	s = src;
	d = dst;
	if (!s && !d && n > 0)
		return (NULL);
	while (n)
	{
		*d ++ = *s ++;
		n --;
	}
	return (dst);
}

/* int	main(void)
{
	char dst[20] = "teste";
	char dst2[20] = "teste";
	const char *src = "42riosdfsdfsdfsd";

	printf("dst: '%s'\tsrc: '%s'\n", dst, src);
	printf("dst: '%s'\tretorno ft_memcpy: '%p'\n", dst, ft_memcpy(dst, src, 20));
	printf("dst: '%s'\tretorno memcpy: '%p'\n", dst2, memcpy(dst2, src, 20));
} */

/* int main()
{
   char csrc[] = "GeeksforGeeks";
   char cdest[100];
   ft_memcpy(cdest, csrc, strlen(csrc)+1);
   printf("Copied string is %s", cdest);
  
   int isrc[] = {10, 20, 30, 40, 50};
   int n = sizeof(isrc)/sizeof(isrc[0]);
   int idest[n], i;
   ft_memcpy(idest, isrc, sizeof(isrc));
   printf("\nCopied array is ");
   for (i=0; i<n; i++)
     printf("%d ", idest[i]);
   return 0;
} */
