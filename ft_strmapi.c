/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 02:29:21 by wlahyani          #+#    #+#             */
/*   Updated: 2021/11/27 16:00:40 by wlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

char	ft(unsigned int i, char c)
{
	i--;
	return (c - 32);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*t;
	int		i;
	int		len;

	if (!s)
		return (0);
	i = 0;
	len = ft_strlen(s);
	t = (char *)malloc(sizeof(char) * (len + 1));
	if (!t)
		return (0);
	while (s[i])
	{
		t[i] = f(i, s[i]);
		i++;
	}
	t[i] = '\0';
	return (t);
}
/*
int main()
{
	char s[] = "walid";
	printf("%s",ft_strmapi(s, ft));
}
*/
