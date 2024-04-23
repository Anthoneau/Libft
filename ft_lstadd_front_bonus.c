/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:19:56 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/19 16:26:23 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

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
//	t_list		*lst4;
//	char		str1[] = "lorem";
//	char		str2[] = "ipsum";
//	char		str3[] = "dolor";
//	char		str4[] = "sit";

//	lst1 = ft_lstnew(str1);
//	lst2 = ft_lstnew(str2);
//	lst3 = ft_lstnew(str3);
//	lst4 = ft_lstnew(str4);
//	lst0 = NULL;
//	ft_lstadd_front(&lst0, lst1);
//	ft_lstadd_front(&lst0, lst2);
//	ft_lstadd_front(&lst0, lst3);
//	ft_lstadd_front(&lst0, lst4);
//	while (lst0)
//	{
//		print(lst0);
//		lst0 = lst0->next;
//	}
//	return (0);
//}