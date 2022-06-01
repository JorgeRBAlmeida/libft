/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 01:20:18 by joalmeid          #+#    #+#             */
/*   Updated: 2022/06/01 17:22:18 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	content_error(t_list **lst, void (*del)(void *));
static void ft_lstiter_new(t_list *lst, void *(*f)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*after;
	t_list	*first;
	size_t	index;

	index = 0;
	after = NULL;
	if (!f || !del)
		return (NULL);
	while (lst)
	{
		if (index == 0)
		{
			first = ft_lstnew(lst->content);
			content_error(&first, del);
			lst = lst->next;
			index ++;
		}
		ft_lstadd_back(&first, after);
		content_error(&after, del);
		lst = lst->next;
	}
	ft_lstiter_new(first, f);
	if (!first)
		return (NULL);
	return (first);
}

static void	content_error(t_list **lst, void (*del)(void *))
{
	if (*lst)
	{
		if ((*lst)->content == NULL)
		{
			del((*lst)->content);
			free(*lst);
		}
	}
}

static void ft_lstiter_new(t_list *lst, void *(*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
