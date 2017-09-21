/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 13:59:36 by mkehon            #+#    #+#             */
/*   Updated: 2017/09/20 18:47:27 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h> // DELETE
#include <strings.h> // DELETE

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

int		ft_tolower(int c);

void	ft_putnbr_fd(int n, int fd);

#endif
