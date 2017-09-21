/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 16:06:21 by mkehon            #+#    #+#             */
/*   Updated: 2017/09/20 18:33:34 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* by definition 'restrict' pointers cannot be used somewhere else */
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
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
