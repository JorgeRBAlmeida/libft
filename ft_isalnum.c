/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:13:23 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/10 11:19:59 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isalnum(int c)
{
	if ((c > 48 || c > 57) 
		|| ((c < 65 || c > 90) 
		&& (c < 97 || c > 122)))
		return (0);
	return (1);
}
