/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:20:12 by jaelee            #+#    #+#             */
/*   Updated: 2018/11/10 17:59:48 by jaelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*ptr;

	i = 0;
	len = ft_strlen(s);
	if (s && f)
	{
		ptr = ft_memalloc(len + 1);
		if (!(ptr))
			return (NULL);
		while (i < len)
		{
			ptr[i] = f(i, s[i]);
			i++;
		}
		ptr[i] = '\0';
		if (ptr)
			return (ptr);
	}
	return (NULL);
}
