/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:04:21 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/19 16:51:10 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	c = (char)c;
	i = ft_strlen(s);
	while (s[i] != c && i > 0)
		i--;
	if (s[i] != c)
		return (NULL);
	else
		return ((char *)s + i);
}

//#include <stdio.h>
//int main(void)
//{
//    printf("%s\n", ft_strrchr("teste", 'p'));
//    return (0);
//}