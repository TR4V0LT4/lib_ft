#include "libft.h"
#include <stdio.h>

int ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	t_list *current;

	current = lst;
	while(current != NULL)
	{
		current = current->next;
		i++;
	}
	return(i);
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
	//new = ft_lstnew("0");
	head->next = node1;
	node1->next = node2;
	node2->next = node3;
	printf("%d",ft_lstsize(head));
}
