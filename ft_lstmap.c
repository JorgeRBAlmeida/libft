/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 01:20:18 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/30 02:15:52 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	size_t	index;

	index = ft_lstsize(lst);
	result = NULL;
	if (!f || !del)
		return (NULL);
	while (lst)
	{
		result = ft_lstnew(lst->content);
		ft_lstadd_back(&result, result);
		lst = lst->next;
	}
	ft_lstiter(result, f);
	return (result);
}
