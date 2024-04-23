/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:36:59 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/19 15:59:15 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst && f)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

//void	f(void *cont)
//{
//	int		i;
//	char	*content;

//	i = 0;
//	content = (char *)cont;
//	while (content[i])
//	{
//		if (content[i] >= 'a' && content[i] <= 'z')
//			content[i] -= 32;
//		else if (content[i] >= 'A' && content[i] <= 'Z')
//			content[i] += 32;
//		else
//			content[i] += 1;
//		i++;
//	}
//}

//#include <string.h>
//void	print(t_list *elem)
//{
//	int		len;

//	len = 0;
//	while (((char *)elem->content)[len])
//		len++;
//	write(1, elem->content, len);
//	write(1, "\n", 1);
//}

//int main(void)
//{
//	t_list		*lst0;
//	t_list		*lst1;
//	t_list		*lst2;
//	t_list		*lst3;
//	char		*str0 = strdup("lorem");
//	char		*str1 = strdup("ipsum");
//	char		*str2 = strdup("dolor");
//	char		*str3 = strdup("sit");
//	char		*str4 = strdup("amet");

//	lst0 = ft_lstnew(str0);
//	lst1 = ft_lstnew(str1);
//	lst2 = ft_lstnew(str2);
//	lst3 = ft_lstnew(str3);
//	lst4 = ft_lstnew(str4);
//	lst0->next = lst1;
//	lst1->next = lst2;
//	lst2->next = lst3;
//	lst3->next = lst4;

//	print(lst0);
//	print(lst1);
//	print(lst2);
//	print(lst3);
//	print(lst4);
//	ft_lstiter(lst0, &f);
//	print(lst0);
//	print(lst1);
//	print(lst2);
//	print(lst3);
//}