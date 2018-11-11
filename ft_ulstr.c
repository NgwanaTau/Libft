/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:47:01 by thmotaun          #+#    #+#             */
/*   Updated: 2017/08/24 16:58:17 by thmotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_ulstr(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			ft_putchar(ft_toupper(s[i++]));
		else if (s[i] >= 'A' && s[i] <= 'Z')
			ft_putchar(ft_tolower(s[i++]));
		else
			ft_putchar(s[i++]);
	}
}
