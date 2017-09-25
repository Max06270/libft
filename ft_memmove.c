/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 11:28:57 by mkehon            #+#    #+#             */
/*   Updated: 2017/09/25 11:35:23 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *tmp;

	tmp = ft_strnew(n);
	if (tmp)
	{
		tmp = ft_memcpy(tmp, src, n);
		dst = ft_memcpy(dst, tmp, n);
	}
	free(tmp);
	return (dst);
}
