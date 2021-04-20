/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demilan <demilan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:12:33 by demilan           #+#    #+#             */
/*   Updated: 2021/04/20 18:25:34 by demilan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlst;

	newlst = malloc(sizeof(t_list));
	if (newlst)
		newlst->content = content;
	return (newlst);
}

// int	main()
// {
// 	t_list *list;

// 	list = NULL;
// 	list = ft_lstnew("ggs");
// 	printf("%s", list->content);
// }
