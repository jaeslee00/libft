/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:03:00 by jaelee            #+#    #+#             */
/*   Updated: 2018/11/10 12:10:39 by jaelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_allocate_nbr_of_str(char const *str, char delimit)
{
	int		i;
	int		j;
	char	**word;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != delimit && str[i] != '\0')
		{
			if (str[i - 1] == delimit)
				j++;
		}
		i++;
	}
	if (str[0] == delimit)
		j--;
	if (!(word = (char **)malloc(sizeof(char *) * (j + 2))))
		return (NULL);
	word[j + 1] = (NULL);
	return (word);
}

static size_t	ft_nbr_char(char const *str, char delimit)
{
	size_t cnt;

	cnt = 0;
	while (*str != delimit && *str != '\0')
	{
		cnt++;
		str++;
	}
	return (cnt);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	cnt;
	char	**array;

	i = 0;
	array = ft_allocate_nbr_of_str(s, c);
	while (*s != '\0')
	{
		j = 0;
		cnt = 0;
		if (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			cnt = ft_nbr_char(s, c);
			array[i] = ft_memalloc(cnt);
			while (*s != c && *s != '\0')
				array[i][j++] = *s++;
			array[i++][j] = '\0';
		}
	}
	return (array);
}
