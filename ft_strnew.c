/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:42:58 by thmotaun          #+#    #+#             */
/*   Updated: 2017/08/24 16:50:06 by thmotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s1;

	if (!(s1 = (char *)malloc(sizeof(char) * size + 1)))
		return (0);
	ft_memset(s1, '\0', size + 1);
	return (s1);
}
