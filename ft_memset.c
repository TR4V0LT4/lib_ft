/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:57:58 by wlahyani          #+#    #+#             */
/*   Updated: 2021/12/02 01:18:44 by wlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (len-- > 0)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	return (p);
}
/*
int main()

{
	int *t;
	int i;

	
	i = 3;
	int w[] = {1, 2,53, 6};
	ft_memset(w,1,4 * sizeof(int));
		
	while(i >= 0)
	{
		t[i] =(unsigned char) (ft_memset(w,13,5 * sizeof(int)));
		i--;
	}
}*/
