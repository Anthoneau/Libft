/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:54:07 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/19 15:32:25 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*actual;
	t_list	*temp;

	if (!lst || !del)
		return ;
	actual = *lst;
	while (actual)
	{
		temp = actual;
		actual = actual->next;
		ft_lstdelone(temp, del);
	}
	*lst = NULL;
}

//void	del(void *content)
//{
//	free(content);
//}

//void	print(t_list *list)
//{
//	int	len;

//	len = 0;
//	while (((char *)list->content)[len] != '\0')
//		len++;
//	write(1, list->content, len);
//	write(1, "\n", 1);
//}

//int main(void)
//{
//	t_list		*lst0;
//	t_list		*lst1;
//	t_list		*lst2;
//	t_list		*lst3;
//	char		str0[] = "lorem";
//	char		str1[] = "ipsum";
//	char		str2[] = "dolor";
//	char		str3[] = "sit";

//	lst0 = ft_lstnew(str0);
//	lst1 = ft_lstnew(str1);
//	lst2 = ft_lstnew(str2);
//	lst3 = ft_lstnew(str3);
//	lst0->next = lst1;
//	lst1->next = lst2;
//	lst2->next = lst3;

//	print(lst0);
//	print(lst1);
//	print(lst2);
//	print(lst3);
//	ft_lstclear(&lst0, &del);
//	print(lst0);
//	print(lst1);
//	print(lst2);
//	print(lst3);
//}