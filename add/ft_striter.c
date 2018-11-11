/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:37:51 by jaelee            #+#    #+#             */
/*   Updated: 2018/11/11 13:49:19 by jaelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int		i;
	int		len;
	char	*str;

	if (!(s && f))
		return ;
	i = 0;
	len = ft_strlen(s);
	if (!(str = ft_strnew(len)))
		return ;
	while (i < len && s[i] != '\0')
	{
		f(&s[i]);
		str[i] = s[i];
		i++;
	}
	return ;
}
