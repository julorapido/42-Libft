/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 17:18:46 by julessainthor     #+#    #+#             */
/*   Updated: 2024/05/22 10:37:39 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c > 127)
		return ((char *) &(s[0]));
	while (s[i] != '\0')
		i++;
	if (s[i] == '\0' && c == '\0')
		return ((char *) &(s[i]));
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *) &(s[i]));
		i--;
	}
	return (NULL);
}
