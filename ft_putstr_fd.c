/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 00:50:16 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/05 01:45:59 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
}
