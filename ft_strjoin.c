/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:52:00 by wlahyani          #+#    #+#             */
/*   Updated: 2021/11/26 21:15:27 by wlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*t;
	int		len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	t = (char *)malloc(sizeof(char) * len + 1);
	if (!t)
		return (0);
	while (s1[i])
	{
		t[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		t[i++] = s2[j++];
	t[i] = '\0';
	return (t);
}
/*
int main()
{
	char *s1 = "my favorite animal is";
	char *s2 = " i";
	char *s3 = "the nyancat";
	//char *res = ft_strjoin(ft_strjoin(s1, s2), s3);
	printf("%s",ft_strjoin((ft_strjoin(s1,s2)),s3));
}*/
