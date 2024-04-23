/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:56:49 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/22 11:49:01 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	total = count * size;
	if (size != 0 && total / size != count)
		return (NULL);
	ptr = (void *)malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

/*#include <stdio.h>
int	main(void)
{
	char	*ptr;
	int i;
	int	n;
	
	n = 0;
	ptr = ft_calloc(n, sizeof(char));
	i = 0;
	while (i < n)
	{
		printf("%d ", ptr[i]);
		i++;
	}
	return (0);
}*/