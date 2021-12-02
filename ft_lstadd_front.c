/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 02:50:10 by wlahyani          #+#    #+#             */
/*   Updated: 2021/12/02 04:33:27 by wlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

int main()
{
	t_list *head;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *new;
	t_list *current;
	
	head = ft_lstnew("1");
	node1 = ft_lstnew("2");
	node2= ft_lstnew("3");
	node3 = ft_lstnew("4");
	new = ft_lstnew("0");

	head->next = node1; 
	node1->next = node2;
	node2->next = node3;
	
	ft_lstadd_front(&head, new);
	current = head;
	while (current != NULL)
	{
		
		printf("%s\n", current->content);
		current = current->next;
	}
	return (0);
}
