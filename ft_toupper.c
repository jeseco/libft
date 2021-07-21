/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JEAN-SEBA <jcourtem@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:52:46 by JEAN-SEBA         #+#    #+#             */
/*   Updated: 2021/05/27 09:40:13 by JEAN-SEBA        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	k;

	k = (unsigned char) c;
	if (c > 96 && c < 123)
		return (c = c - 32);
	return (c);
}	
