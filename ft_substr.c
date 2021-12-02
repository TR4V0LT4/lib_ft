/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:09:39 by wlahyani          #+#    #+#             */
/*   Updated: 2021/11/26 21:11:24 by wlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	i = 0;
	if (s_len < len)
		len = s_len;
	t = malloc(len + 1);
	if (!t)
		return (0);
	while (s[i] && (i < len) && start < s_len)
	{
		t[i] = s[start];
		start++;
		i++;
	}
	t[i] = '\0';
	return (t);
}
/*
int main()
{
	char w[]="";
	printf("%s\n\n",ft_substr(w,5,NULL));
}
*/
