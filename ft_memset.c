/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:20:03 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/05 01:35:29 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t	i;

	if (!pointer)
		return (NULL);
	i = 0;
	while (i < count)
	{
		((unsigned char *)pointer)[i] = (unsigned char) value;
		i++;
	}
	return (pointer);
}
