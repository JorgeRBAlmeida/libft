/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalmeid <joalmeid@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 21:34:47 by joalmeid          #+#    #+#             */
/*   Updated: 2022/05/21 19:35:22 by joalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	c_incidence(char *t, char c);
static void		arrstring_error(char ***arr, size_t j);
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
	j = -1;
	arr = ft_calloc((c_incidence(t, c) + 1), sizeof(arr));
	if (arr == NULL)
		return (NULL);
	while (++ i <= ft_strlen(t))
	{
		if ((t[i] == c && t[i - 1] != c) || t[i] == '\0')
		{
			arr[++ j] = arrstring_split(t, &i, &y);
			arrstring_error(&arr, j);
		}
		if (t[i] != c)
			y ++;
	}
	arr[++ j] = NULL;
	return (arr);
}

static char	*arrstring_split(char *t, size_t *i, size_t *y)
{
	size_t	len;
	size_t	position;

	position = *i;
	len = *y;
	*y = 0;
	*i = *i + 1;
	return (ft_substr(t, (position - len), len));
}

static size_t	c_incidence(char *t, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (t[i])
	{
		if (t[i] == c)
			j ++;
		i ++;
	}
	return (j);
}

static void	arrstring_error(char ***arr, size_t j)
{
	if (arr[j] == NULL)
	{
		while (j > 0)
		{
			free(arr[j]);
			j --;
		}
		free(arr[j]);
		free(arr);
	}
}
