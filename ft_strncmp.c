/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:19:45 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/12 14:20:13 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] == s2[i]) && (i <= n) 
			&& ((s1[i] != '\0') || (s2[i] != '\0')))
		i ++;
	return (s1[i] - s2[i]);
}

/* int	main(void)
{
	char	*s1 = "teste124";
	char	*s2 = "t42rioddsdf";
	int	result = strncmp(s1, s2, 3);
	
	printf("%d", result);
} */
