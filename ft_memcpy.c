/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:30:45 by wlahyani          #+#    #+#             */
/*   Updated: 2021/11/26 20:33:03 by wlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*n_dst;
	unsigned char	*n_src;

	n_dst = (unsigned char *)dst;
	n_src = (unsigned char *)src;
	i = 0;
	if (src != dst)
	{
		if ((!src && n == 0) || (!src && !dst && n != 0))
			return (NULL);
		while (i < n)
		{
			n_dst[i] = n_src[i];
			i++;
		}
	}
	return (dst);
}
/*
int main()
{
	char s[]= "jkdui";
	printf("%s\n",ft_memcpy(s, s,2));
	printf("%s",memcpy(s, s, 2));

}*/
