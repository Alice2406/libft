/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 17:53:36 by aniezgod          #+#    #+#             */
/*   Updated: 2022/01/02 17:54:40 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*chaine;
	size_t	i;
	size_t	j;

	size = ft_strlen(s1) + ft_strlen(s2);
	chaine = (char *)malloc(sizeof(*s1) * (size + 1));
	i = 0;
	j = 0;
	while (s1[i])
	{
		chaine[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		chaine[j] = s2[i];
		j++;
		i++;
	}
	chaine[j] = '\0';
	return (chaine);
}
