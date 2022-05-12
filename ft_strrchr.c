/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:37:00 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/12 11:18:33 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
	int	found;

	found = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
			found ++;
		s ++;
	}
	if ((*s == '\0') && (*s == (char)c))
		return ((char *) s);
	if (!found)
		return (0);
	while (*s != (char) c)
		s --;
	return((char *) s);
}

int	main(void)
{
	char *s = "";
	int	c = 0;
	char *result = ft_strrchr(s, c);

	printf("%s\n", result);
}
