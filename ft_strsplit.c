/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:03:00 by jaelee            #+#    #+#             */
/*   Updated: 2018/11/11 14:09:49 by jaelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	int		end;
	char	**array;

	if (!(s && c))
		return (NULL);
	i = 0;
	j = 0;
	if (!(array = (char **)malloc(sizeof(char *) * ft_strlen(s))))
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		end = i;
		if (end > start)
			array[j++] = ft_strsub(s, start, end - start);
	}
	array[j] = (NULL);
	return (array);
}
