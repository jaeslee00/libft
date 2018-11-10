/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:21:53 by jaelee            #+#    #+#             */
/*   Updated: 2018/11/10 19:41:59 by jaelee           ###   ########.fr       */
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

	end = 0;
	i = 0;
	ptr = (NULL);
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		i++;
	start = i;
	if (i == ft_strlen(s) || !(*s))
		return ("\0");
	while (s[i] != '\0')
	{
		if (s[i] >= 33 && s[i] <= 126)
			end = i;
		i++;
	}
	if (end <= start)
		return (NULL);
	ptr = ft_strsub(s, start, end - start + 1);
	if (!(ptr))
		return (NULL);
	return (ptr);
}
