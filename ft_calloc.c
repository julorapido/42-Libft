/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <jsaintho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:26:10 by julessainth       #+#    #+#             */
/*   Updated: 2024/06/04 16:41:26 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*c_alloc;

	if (size >= 2147483647 || count >= 2147483647 
		|| count * size >= SIZE_MAX)
		return (NULL);
	if ((int) size * (int) count < 0)
		return (NULL);
	c_alloc = (void *)(malloc(count * size));
	if (!c_alloc)
		return (NULL);
	ft_bzero(c_alloc, count * size);
	return (c_alloc);
}
