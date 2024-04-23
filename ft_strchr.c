/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:48:11 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/22 14:36:12 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	c = (char)c;
	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (s[i] != c)
		return (NULL);
	else
		return ((char *)s + i);
}

//#include <stdio.h>
//int main(void)
//{
//	//char s[] = "tripouille";
//    printf("%s\n", ft_strchr("teste", 357));
//    return (0);
//}