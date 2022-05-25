/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:44:53 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/24 13:07:18 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void		*out;
	long	total;

	total = num * size;
	if (num == 0 || size == 0)
	{
		out = malloc(1);
	}
	else
		out = malloc(total);
	if (out == NULL)
		return (NULL);
	ft_bzero(out, size);
	return (out);
}
