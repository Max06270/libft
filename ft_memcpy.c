/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 16:06:21 by mkehon            #+#    #+#             */
/*   Updated: 2017/09/21 15:08:42 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 'restrict' qualifier not allowed, it makes pointers not usable somewhere else */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char 	*d;
	size_t			i;

	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
