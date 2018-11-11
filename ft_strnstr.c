/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:43:17 by thmotaun          #+#    #+#             */
/*   Updated: 2017/08/24 16:34:11 by thmotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	len2;

	if (*small == '\0')
		return ((char *)big);
	len2 = ft_strlen(small);
	while (*big != '\0' && n-- >= len2)
	{
		if (*big == *small && ft_memcmp(big, small, len2) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
