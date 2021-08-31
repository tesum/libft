/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charstr_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demilan <demilan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:33:59 by demilan           #+#    #+#             */
/*   Updated: 2021/04/20 16:27:26 by demilan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_charstr_bonus(const char s1, const char *s2)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (s2[i] != '\0')
	{
		if (s1 == s2[i])
			res++;
		i++;
	}
	if (res > 0)
		return (1);
	else
		return (0);
}
