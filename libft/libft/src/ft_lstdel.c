/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardanel <ardanel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:03:22 by pribault          #+#    #+#             */
/*   Updated: 2017/03/01 22:13:12 by ardanel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*next;
	t_list	*mem;

	next = *alst;
	while (next->next != NULL)
	{
		mem = next;
		next = next->next;
		ft_lstdelone(&mem, del);
	}
	ft_lstdelone(&next, del);
	*alst = NULL;
}
