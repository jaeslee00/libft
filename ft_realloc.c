/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:33:36 by jaelee            #+#    #+#             */
/*   Updated: 2018/11/13 11:46:54 by jaelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*tmp;

	tmp = NULL;
	if (ptr && !size)
	{
		if (!(tmp = (char *)malloc(1)))
			return (NULL);
		ft_memdel(&ptr);
	}
	if (!(tmp = (char *)malloc(size)))
		return (NULL);
	if (ptr)
	{
		ft_memcpy(tmp, ptr, size);
		ft_memdel(&ptr);
	}
	return (tmp);
}
