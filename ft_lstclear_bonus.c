/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 20:42:19 by bpeeters      #+#    #+#                 */
/*   Updated: 2019/11/22 19:09:00 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *node;
	t_list *temp;

	if (!lst || !(*lst))
		return ;
	node = *lst;
	while (node)
	{
		del(node->content);
		temp = node->next;
		free(node);
		node = temp;
	}
	*lst = NULL;
}
