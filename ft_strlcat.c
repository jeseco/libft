/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JEAN-SEBA <jcourtem@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:00:53 by JEAN-SEBA         #+#    #+#             */
/*   Updated: 2021/07/08 14:30:43 by JEAN-SEBA        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dest, const char *src, size_t dest_size)
{
	size_t	i;
	int		j;
	size_t	dst_len;
	size_t	src_len;

	i = ft_strlen(dest);
	j = 0;
	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_size < dst_len + 1)
		return (src_len + dest_size);
	if (dest_size > dst_len + 1)
	{
		while (i < dest_size - 1)
			*(dest + i++) = *(src + j++);
		*(dest + i) = '\0';
	}
	return (dst_len +src_len);
}
