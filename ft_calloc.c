/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:26:10 by julessainthor     #+#    #+#             */
/*   Updated: 2024/05/28 16:38:02 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*c_alloc;
	size_t	i;

	if (size > 2147483647 || count > 2147483647
		|| ((count == 0 || size == 0) && !(size == 0 && count == 0)))
		return (NULL);
	if ((int)size <= 0 || (int)count <= 0)
	{
		c_alloc = (void *)(malloc (1));
		*(unsigned char *)(c_alloc) = 0;
		return (c_alloc);
	}
	c_alloc = (void *)(malloc(count * size));
	if (!c_alloc)
		return (NULL);
	i = 0;
	while (i < (size * count))
	{
		*(unsigned char *)(c_alloc + i) = 0;
		i++;
	}
	return (c_alloc);
}
