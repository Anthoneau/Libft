/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:18:36 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/18 10:05:55 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	int				i;

	src = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		if (src[i] == (unsigned char)c)
			return (src + i);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
    char string[] = "string";
    printf("%s\n", string);
    printf("%s\n", ft_memchr(string, 'r', 0));
    printf("%s\n", memchr(string, 'r', 0));
    return (0);
}*/