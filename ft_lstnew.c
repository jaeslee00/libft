/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:24:23 by jaelee            #+#    #+#             */
/*   Updated: 2018/11/12 15:11:40 by jaelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;

	tmp = NULL;
	if (!(tmp = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == (NULL))
	{
		tmp->content = (NULL);
		content_size = 0;
	}
	else
	{
		tmp->content = ft_memcpy(ft_memalloc(content_size + 1),
				content, content_size);
		tmp->content_size = content_size;
	}
	return (tmp);
}
