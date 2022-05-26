/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:24:34 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/26 10:43:11 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	finallen;
	char	*sub;

	slen = ft_strlen(s);
	finallen = len;
	if (!s)
		return (NULL);
	if (start >= slen)
	{
		sub = malloc(1);
		sub[0] = '\0';
		return (sub);
	}
	if (len > slen)
		finallen = slen;
	sub = ft_calloc((finallen + 1), sizeof(*sub));
	if (sub == NULL)
		return (NULL);
	ft_memcpy(sub, s + start, finallen);
	sub[finallen] = '\0';
	return (sub);
}
