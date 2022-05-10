/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:08:58 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/10 12:06:59 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while ( s[length] != '\0')
		length ++;
	return (length);
}

int main(void)
{
	char	*s = "ola!";
	int		len = 0;

	len = strlen(s);
	printf("the length is %d.\n", len);
}
