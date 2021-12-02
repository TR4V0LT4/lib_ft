/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:42:54 by wlahyani          #+#    #+#             */
/*   Updated: 2021/11/26 21:06:58 by wlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*t;

	t = malloc(ft_strlen(s1) + 1);
	if (!t)
		return (0);
	ft_memcpy(t, s1, ft_strlen(s1) + 1);
	return (t);
}
/*
int main()
{
	char w[] = "walid";
	printf("%s",ft_strdup(w));
}
*/
