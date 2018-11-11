/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:44:36 by thmotaun          #+#    #+#             */
/*   Updated: 2017/08/24 16:43:26 by thmotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*strsub;

	i = 0;
	if (s == NULL)
		return (NULL);
	strsub = (char *)malloc(sizeof(char) * (len + 1));
	if (strsub == NULL)
		return (NULL);
	while (len--)
	{
		strsub[i] = s[start + i];
		i++;
	}
	strsub[i] = '\0';
	return (strsub);
}
