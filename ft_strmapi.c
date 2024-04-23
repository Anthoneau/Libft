/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:27:48 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/22 12:37:55 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static char	encrypt(unsigned int i, char c)
{
	int	t;

	t = c + i;
	if (t <= 126)
		c += i;
	else if (t > 126)
	{
		if (c >= 'z')
			c -= 89;
		c += i - (i / 2);
	}
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	new = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new)
		return (0);
	i = 0;
	while (s[i])
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*#include <stdio.h>
int main(int ac, char **av)
{
	if (ac)
	{
		char	*str = av[1];
		printf("%s\n", ft_strmapi(str, encrypt));
	}
	return (0);
}*/