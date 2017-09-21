/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 15:25:22 by mkehon            #+#    #+#             */
/*   Updated: 2017/09/20 16:05:33 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*mem;
	size_t			i;

	i = 0;
	mem = (unsigned char *)s;
	while (i < n)
	{
		mem[i] = '0';
		i++;
	}
}

int		main()
{
	char p[] = "Bonjour la famille";
	ft_bzero(p, 5);
	printf("%s",p);
	return (0);
}
