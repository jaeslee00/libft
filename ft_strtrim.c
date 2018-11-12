/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:21:53 by jaelee            #+#    #+#             */
/*   Updated: 2018/11/11 14:06:02 by jaelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	size_t	i;

	if (!(s))
		return (NULL);
	end = 0;
	i = 0;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		i++;
	start = i;
	if (i == ft_strlen(s) || !(*s))
		return (ft_memalloc(1));
	while (s[i] != '\0')
	{
		if (s[i] >= 33 && s[i] <= 126)
			end = i;
		i++;
	}
	if (end <= start)
		return (NULL);
	return (ft_strsub(s, start, end - start + 1));
}
