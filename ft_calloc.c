/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:44:53 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/29 10:36:49 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*buffer;
	long	total;

	if (num == 0 || size == 0)
	{
		num = 1;
		size = 1;
	}
	total = num * size;
	buffer = malloc(total);
	if (buffer == NULL)
		return (NULL);
	ft_bzero(buffer, total);
	return (buffer);
}
