/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:05:02 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/18 10:03:47 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;

	dest = (unsigned char *) s;
	while (n--)
		*dest++ = 0;
}

/*#include <stdio.h>
int	main(void)
{
	char d[] = "string";
	int	c[] = {23, 45, 789, 3, 54};
	int i = 0;
	int n = 5;
	
	printf("%s\n", d);
	ft_bzero(d, n);
	printf("%s\n", d);
	while (n--)
	{
		printf("%d ", c[i]);
		i++;
	}
	i = 0;
	n = 5;
	printf("\n");
	ft_bzero(c, n * sizeof(int));
	while (n--)
	{
		printf("%d ", c[i]);
		i++;
	}
	return (0);
}*/