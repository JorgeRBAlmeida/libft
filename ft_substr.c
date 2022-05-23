/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:24:34 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/23 00:51:03 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = ft_calloc((len + 1), sizeof(sub));
	if (sub == NULL)
		return (NULL);
	ft_memmove(sub, s + start, len);
	if (start == len)
	{
		*sub = '\0';
		return (sub);
	}
	sub[len] = '\0';
	return (sub);
}
