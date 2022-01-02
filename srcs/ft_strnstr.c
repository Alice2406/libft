/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 18:00:45 by aniezgod          #+#    #+#             */
/*   Updated: 2022/01/02 18:01:03 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int	i;

	if (!*to_find)
		return ((char *)str);
	while (*str && len > 0)
	{
		len--;
		if (*str == *to_find)
		{
			i = 1;
			while (str[i] == to_find[i] && to_find[i] && len > 0)
				i++;
			if (!to_find[i])
				return ((char *)str);
		}
		str++;
	}
	return (0);
}
