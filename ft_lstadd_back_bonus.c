/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:40:03 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/23 11:09:54 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst && new)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
	}
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
//	ft_lstadd_back(&lst0, lst1);
//	ft_lstadd_back(&lst0, lst2);
//	ft_lstadd_back(&lst0, lst3);
//	ft_lstadd_back(&lst0, lst4);
//	while (lst0)
//	{
//		print(lst0);
//		lst0 = lst0->next;
//	}
//	return (0);
//}