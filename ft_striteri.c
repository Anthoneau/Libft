/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:31:01 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/19 15:36:13 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}

//void	test(unsigned int i, char *c)
//{
//	if (c[i] >= 'a' && c[i] <= 'z')
//		c[i] -= 32;
//	else if (c[i] >= 'A' && c[i] <= 'Z')
//		c[i] += 32;
//	else
//		c[i] += 1;
//}
//#include <stdio.h>
//int		main(void)
//{
//	char	str[] = "TeSt dE sTrInG";

//	ft_striteri(str, &test);
//	printf("%s\n", str);
//	return (0);
//}