/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:05:59 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/05 17:31:43 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_str_len(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_sub_str(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	index;

	if (!s)
		return (NULL);
	if (start >= ft_str_len(s))
		start = ft_str_len(s);
	if ((start + len) >= ft_str_len(s))
		len = ft_str_len(s) - start;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	index = 0;
	while (index != len)
	{
		ptr[index] = *(s + start + index);
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}

static size_t	ft_count_word(const char *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		if (*s != c)
		{
			++words;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (words);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	str = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!str)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			str[i++] = ft_sub_str(s - len, 0, len);
		}
		else
			++s;
	}
	str[i] = 0;
	return (str);
}
