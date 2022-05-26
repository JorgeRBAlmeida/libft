/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 21:34:47 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/26 16:05:54 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	c_incidence(char *t, char c);
static void		is_error(char ***arr, size_t *j);
static char		*make_string(char *t, size_t *i, size_t *y);
static char		**alloc_arr(char ***arr, char *t, const char *s, char c);

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
	if (alloc_arr(&arr, t, s, c) == NULL)
		return (NULL);
	while (++ i <= ft_strlen(t) && c_incidence(t, c) != 0)
	{
		if ((t[i] == c && t[i - 1] != c) || t[i] == '\0')
		{
			arr[j] = make_string(t, &i, &y);
			is_error(&arr, &j);
		}
		if (t[i] != c)
			y ++;
	}
	arr[j] = NULL;
	return (arr);
}

static char	**alloc_arr(char ***arr, char *t, const char *s, char c)
{
	if (t == NULL || s == NULL)
		return (NULL);
	if (c_incidence(t, c) == 0)
	{
		*arr = malloc(1);
		*arr[0] = NULL;
	}
	*arr = ft_calloc((c_incidence(t, c) + 1), sizeof(*arr));
	if (*arr == NULL)
		return (NULL);
	return (*arr);
}

static size_t	c_incidence(char *t, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(t) == 0)
		return (0);
	while (t[i])
	{
		if (t[i] == c)
			j ++;
		i ++;
	}
	return (j + 1);
}

static char	*make_string(char *t, size_t *i, size_t *y)
{
	size_t	len;
	size_t	position;

	position = *i;
	len = *y;
	*i = *i + 1;
	*y = 0;
	return (ft_substr(t, (position - len), len));
}

static void	is_error(char ***arr, size_t *j)
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
