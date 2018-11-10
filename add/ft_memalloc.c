/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 09:46:43 by jaelee            #+#    #+#             */
/*   Updated: 2018/11/10 18:24:19 by jaelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *ptr;

	ptr = (NULL);
	if (!(ptr = (void *)malloc(sizeof(*ptr) * size)))
		return (NULL);
	if (ptr)
		ft_bzero(ptr, size);
	return (ptr);
}
