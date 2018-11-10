/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:21:53 by jaelee            #+#    #+#             */
/*   Updated: 2018/11/10 12:03:21 by jaelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*ptr;

	if (!(*s))
		return (NULL);
	start = 0;
	end = 0;
	i = 0;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
		i++;
	start = i;
	while (s[i])
	{
		if (s[i] >= 33 && s[i] <= 126)
			end = i;
		i++;
	}
	if (end <= start)
		return (NULL);
	ptr = ft_strsub(s, start, end - start + 1);
	return (ptr);
}
