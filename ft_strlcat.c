/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 19:21:28 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/22 12:40:28 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	size_t	j;

	if ((!dst || !src) && dstsize == 0)
		return (0);
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	j = dlen;
	i = 0;
	if (dlen < dstsize && dstsize > 0)
	{
		while (src[i] && dlen + i < dstsize - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (dlen >= dstsize)
		dlen = dstsize;
	return (dlen + slen);
}

/*void	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    //char src[] = "MBAPPEEEEE";
    //char dest[] = "Hein ? ";
    //printf("%s\n%s\n", src, dest);
    //printf("%zu\n", ft_strlcat(dest, src, sizeof(src)));
    //printf("%s\n%s\n", src, dest);
	char *dest;
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	ft_print_result(ft_strlcat(dest, "lorem", 15));
	write(1, "\n", 1);
	write(1, dest, 15);
    return (0);
}*/