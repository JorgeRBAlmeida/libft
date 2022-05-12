/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:30:19 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/12 10:28:03 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	while(*s != (char)c)
	{
		if (*s == '\0' && (char)c != *s)
			return (0);
		s++;
	}
	return ((char *) s);
}

int main(void)
{
	char *s = "assgfgdg12360";
	int c = 48;
	char *result = ft_strchr(s, c);

	printf("result: %s", result); 
}

/* testes: primeiro na string, ultimo na string, meio da string, não existe na string */
