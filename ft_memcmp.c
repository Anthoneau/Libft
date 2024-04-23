/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:26:18 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/18 10:05:57 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] == str2[i] && i < (n - 1))
		i++;
	return (str1[i] - str2[i]);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("%d\n", memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("%d\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	return (0);
}*/