/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:05:50 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/22 12:33:44 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	total;
	size_t	j;

	total = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined = ft_calloc(total, sizeof(char));
	if (!joined)
		return (NULL);
	j = 0;
	while (*s1)
	{
		joined[j] = *s1;
		s1++;
		j++;
	}
	while (*s2)
	{
		joined[j] = *s2;
		s2++;
		j++;
	}
	joined[j] = '\0';
	return (joined);
}

//#include <stdio.h>
//int main(void)
//{
//	char s1[] = "";
//	char s2[] = "";
//	printf("%s\n", ft_strjoin(s1, s2));
//	return (0);
//}