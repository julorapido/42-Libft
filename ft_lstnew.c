/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:31:31 by jsaintho          #+#    #+#             */
/*   Updated: 2024/05/27 14:01:35 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*l;

	l = (t_list *) malloc(1 * sizeof(t_list));
	if (!l)
		return (NULL);
	l->content = content;
	l->next = NULL;
	return (l);
}
