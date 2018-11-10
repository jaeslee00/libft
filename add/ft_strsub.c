/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:10:33 by jaelee            #+#    #+#             */
/*   Updated: 2018/11/10 11:57:52 by jaelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (*s)
	{
		ptr = ft_memalloc(len + 1);
		while (i < len && s[start])
		{
			ptr[i] = s[start];
			i++;
			start++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}
