/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 17:41:25 by aniezgod          #+#    #+#             */
/*   Updated: 2022/01/02 17:41:33 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char	n;

	n = '\n';
	write(fd, s, ft_strlen(s));
	write(fd, &n, 1);
}
