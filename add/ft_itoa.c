/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:54:22 by jaelee            #+#    #+#             */
/*   Updated: 2018/11/10 17:47:18 by jaelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit(int n)
{
	int	cnt;
	int	tmp;

	tmp = n;
	cnt = 0;
	while (tmp)
	{
		tmp /= 10;
		cnt++;
	}
	if (cnt == 0)
		return (1);
	else if (n < 0)
		return (cnt + 1);
	return (cnt);
}

char		*ft_itoa(int n)
{
	char	*val;
	int		tmp;
	int		len;

	tmp = n;
	len = ft_digit(n);
	val = ft_memalloc(len + 1);
	if(!(val))
	val[len] = '\0';
	while (len >= 0)
	{
		len--;
		if (n < 0)
		{
			val[len] = ((tmp % 10) * (-1) + '0');
			tmp /= 10;
		}
		else
		{
			val[len] = ((tmp % 10) + '0');
			tmp /= 10;
		}
		if (n < 0)
			val[0] = '-';
	}
	return (val);
}
