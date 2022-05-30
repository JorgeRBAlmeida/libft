/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 01:20:18 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/30 16:08:28 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	content_error(t_list *lst, void (*del)(void *));
static void	content_change(t_list **lst, void (*f)(void *));

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
			ft_lstadd_front(&first, lst);
			content_error(&first, del);
			lst = lst->next;
			index ++;
		}
		after = ft_lstnew(lst->content);
		ft_lstadd_back(&first, after);
		content_error(&after, del);
		lst = lst->next;
	}
	content_change(&first, f);
	return (after);
}

static void	content_error(t_list **lst, void (*del)(void *))
{
	if (*lst)
	{
		if (*lst->content == NULL)
		{
			del(*lst->content);
			free(*lst->content);
		}
	}
}

static void	content_change(t_list **lst, void (*f)(void *))
{
	while (*lst)
	{
		f(*lst->content);
		*lst = *lst->next;
	}
}
