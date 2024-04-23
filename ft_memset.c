/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:55:59 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/18 10:06:15 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*d;
	size_t			i;

	d = (unsigned char *) b;
	i = 0;
	while (len)
	{
		d[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[] = "string";
	int	array[] = {54, 85, 20, 63, 21};
	int	i = 0;
	
	printf("\nOG : %s\n", str);
	ft_memset(str, 'a', 3);
	printf("MOD : %s\n\n", str);
	
	printf("OG : ");
	while (i <= 4)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	ft_memset(array, 0, 5 * sizeof(int));
	i = 0;
	printf("MOD : ");
	while (i <= 4)
	{
		printf("%d ", array[i]);
		i++;
	}

	printf("\n\nNULL POINTER : %s\n", ft_memset(((void *)0), 'a', 12));
	printf("\n\nNULL POINTER : %s\n", memset(((void *)0), 'a', 12));
	printf("\n\n");
	return (0);
}*/