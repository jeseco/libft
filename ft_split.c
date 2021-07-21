/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JEAN-SEBA <jcourtem@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:15:01 by JEAN-SEBA         #+#    #+#             */
/*   Updated: 2021/07/21 16:59:06 by JEAN-SEBA        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_malloc_error(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free (tab);
	return (NULL);
}

static size_t	ft_get_nu_strs(char const *s, char c)
{
	unsigned int	nbr_strs;
	unsigned int	i;

	if (!s[0])
		return (0);
	i = 0;
	nbr_strs = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			nbr_strs++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		nbr_strs++;
	return (nbr_strs);
}

static void	ft_get_next_str(char **next_str, unsigned int *next_str_len, char c)
{
	unsigned int	i;

	*next_str += *next_str_len;
	*next_str_len = 0;
	i = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c && (*next_str)[i + 1] == '\0')
		{
			next_str_len--;
			return ;
		}
		if ((*next_str)[i] == c)
			return ;
		(*next_str_len)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char			**rtn_tab;
	char			*next_str;
	unsigned int	next_str_len;
	unsigned int	nbr_strs;
	unsigned int	i;

	if (!s)
		return (NULL);
	nbr_strs = ft_get_nu_strs(s, c);
	rtn_tab = (char **)malloc(sizeof(char *) * (nbr_strs + 1));
	if (!rtn_tab)
		return (NULL);
	i = 0;
	next_str = (char *)s;
	next_str_len = 0;
	while (i < nbr_strs)
	{
		ft_get_next_str(&next_str, &next_str_len, c);
		rtn_tab[i] = (char *)malloc(sizeof(char) * (next_str_len));
		if (!rtn_tab)
			return (ft_malloc_error(rtn_tab));
		ft_strlcpy(rtn_tab[i++], ft_strtrim(next_str, &c), next_str_len + 1);
	}
	rtn_tab[i] = NULL;
	return (rtn_tab);
}
