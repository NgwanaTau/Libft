/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:44:50 by thmotaun          #+#    #+#             */
/*   Updated: 2017/08/24 16:46:34 by thmotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*tmp;

	if (!s)
		return (NULL);
	i = 0;
	j = (int)ft_strlen((char *)s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	tmp = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!tmp)
		return (NULL);
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	k = 0;
	while (i <= j)
	{
		tmp[k] = s[i];
		i++;
		k++;
	}
	tmp[k] = '\0';
	return (tmp);
}
