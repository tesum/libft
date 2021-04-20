/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demilan <demilan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:43:06 by demilan           #+#    #+#             */
/*   Updated: 2021/04/20 00:38:05 by demilan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	static	ft_isspace(const char *str)
{
	int		i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	static	ft_result(const char *str, int i)
{
	int	result;

	result = 0;
	while ((*(str + i) >= '0' && *(str + i) <= '9'))
	{
		result = result * 10 + *(str + i) - '0';
		i++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			minus;
	int			result;

	i = ft_isspace(str);
	minus = 1;
	result = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (*(str + i) == '-')
		{
			minus = -minus;
			i++;
		}
		else
			i++;
	}
	result = ft_result(str, i);
	return (result * minus);
}
