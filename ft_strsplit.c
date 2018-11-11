/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:43:58 by thmotaun          #+#    #+#             */
/*   Updated: 2017/08/24 16:56:48 by thmotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_cntwrd(char const *s, char c)
{
	size_t		count;
	size_t		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			i++;
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static char			*ft_add_word(char const *s, size_t *index, char c)
{
	size_t		size;
	size_t		count;
	char		*word;

	size = *index;
	count = 0;
	while (s[size] && s[size] != c)
		size++;
	word = ft_strnew(size - *index);
	if (word)
	{
		while (*index < size)
		{
			word[count] = s[*index];
			count++;
			*index += 1;
		}
		return (word);
	}
	return (0);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**tab;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if ((tab = (char **)malloc(sizeof(char *) * ft_cntwrd(s, c) + 1)) == 0)
		return (0);
	else
	{
		while (j < ft_cntwrd(s, c))
		{
			while (s[i] == c)
				i++;
			if (s[i] != c && s[i])
				tab[j++] = ft_add_word(s, &i, c);
		}
		tab[j] = 0;
		return (tab);
	}
	return (0);
}
