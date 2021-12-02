/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 02:07:45 by wlahyani          #+#    #+#             */
/*   Updated: 2021/12/02 03:22:36 by wlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

t_list *ft_lstnew(void *content)
{
	t_list *result;

	result = (t_list *)(malloc(sizeof(t_list)));
	
	result->content = content;
	result->next = NULL;
	return (result);
}
