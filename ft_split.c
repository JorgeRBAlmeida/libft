/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 21:34:47 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/25 07:34:12 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	c_incidence(char *t, char c);
static void		arrstring_error(char ***arr, size_t *j);
static char		*arrstring_split(char *t, size_t *i, size_t *y);

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	y;
	size_t	j;
	char	*t;
	char	**arr;

	i = -1;
	y = 0;
	t = ft_strtrim(s, &c);
	j = 0;
	if (t == NULL || s == NULL)
		return (NULL);
	if (c_incidence(t, c) == 0)
	{
		arr = malloc(1);
		arr[0] = NULL;
		return (arr);
	}
	arr = ft_calloc((c_incidence(t, c) + 1), sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	while (++ i <= ft_strlen(t))
	{
		if ((t[i] == c && t[i - 1] != c) || t[i] == '\0')
		{
			arr[j] = arrstring_split(t, &i, &y);
			arrstring_error(&arr, &j);
		}
		if (t[i] != c)
			y ++;
	}
	arr[j] = NULL;
	return (arr);
}

static char	*arrstring_split(char *t, size_t *i, size_t *y)
{
	size_t	len;
	size_t	position;

	position = *i;
	len = *y;
	*i = *i + 1;
	*y = 0;
	return (ft_substr(t, (position - len), len));
}

static size_t	c_incidence(char *t, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(t) == 0)
	{
		return (0);
	}
	while (t[i])
	{
		if (t[i] == c)
			j ++;
		i ++;
	}
	return (j + 1);
}

static void	arrstring_error(char ***arr, size_t *j)
{
	
	if (&arr[*j] == NULL)
	{
		while (*j > 0)
		{
			*j = *j - 1;
			free(&arr[*j]);
		}
		if (*j == 0 && &arr[0] == NULL)
			free(arr);
	}
	else
		*j = *j + 1;
}
