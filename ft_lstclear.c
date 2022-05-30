/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 00:49:58 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/30 01:20:52 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	temp = *lst->next;
	if (!del || !lst)
		return ;
	while (*lst)
	{
		temp = *lst->next;
		(*del)(*lst);
		free(*lst);
		*lst = temp;
	}
}
