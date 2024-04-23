/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:51:03 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/18 10:08:01 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && len != 0 && i <= len - 1)
	{
		j = i;
		k = 0;
		while (haystack[j] == needle[k] && j <= len - 1)
		{
			k++;
			j++;
			if (k == ft_strlen(needle))
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

//int main(void)
//{
//	char haystack[30] = "aaabcabcd";
//	//char needle[10] = "aabc";
//	printf("%s\n", strnstr(haystack, "cd", 8));
//	printf("%s\n", ft_strnstr(haystack, "cd", 8));
//    return (0);
//}