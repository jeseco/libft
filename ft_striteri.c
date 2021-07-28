/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JEAN-SEBA <jcourtem@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 15:40:48 by JEAN-SEBA         #+#    #+#             */
/*   Updated: 2021/07/28 14:50:27 by JEAN-SEBA        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	size_t			s_len;
	char			*pt_s;

	pt_s = s;
	i = 0;
	s_len = ft_strlen(s);
	while (i < s_len)
	{
		(*f)(i, &pt_s[i]);
		pt_s--;
		i++;
	}
}
