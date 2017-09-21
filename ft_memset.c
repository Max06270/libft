/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 14:03:49 by mkehon            #+#    #+#             */
/*   Updated: 2017/09/20 16:35:29 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* No need to handle len > *b cause original memset doesn't. */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*mem;

	i = 0;
	mem = (unsigned char *)b;
	while (i < len)
	{
		mem[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

int		main(void)
{
	char p[] = "Bonjour la famille";
	printf("%s", ft_memset(p, 98, 3));
	return (0);
}
