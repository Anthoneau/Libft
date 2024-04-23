/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:36:23 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/18 10:06:09 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (!d && !s)
		return (NULL);
	i = 0;
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
    char target[] = "sous enorme string";
    char *src1 = target + 5;
    char *src2 = target + 12;
    printf("%s\n", target);
    printf("%s\n", src1);
    printf("%s\n", src2);
    ft_memmove(src1, src2, 6);
    printf("%s\n", target);
    printf("%s\n", src1);
    printf("%s\n", src2);
	printf("test : \n");
	printf("%s\n", ft_memmove(((void *)0), ((void *)0), 5));
	printf("%s\n", memmove(((void *)0), ((void *)0), 5));
    return (0);
}*/