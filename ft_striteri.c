/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 02:46:04 by wlahyani          #+#    #+#             */
/*   Updated: 2021/11/27 16:06:50 by wlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	index;

	if (!s)
		return ;
	index = 0;
	while (s[index])
	{
		if (s[index])
			f(index, &s[index]);
		index++;
	}
}

/*
int main()
{
	char s[] = "walid";
	ft_striteri(s, &ft);
	printf("%s",s);
	return (0);
}
*/
