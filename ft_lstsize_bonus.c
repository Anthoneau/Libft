/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:51:11 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/19 14:48:05 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

//#include <stdio.h>
//int main(void)
//{
//	t_list	*list1;
//	t_list	*list2;
//	t_list	*list3;
//	t_list	*list4;

//	list1 = ft_lstnew("list1");
//	list2 = ft_lstnew("list2");
//	list3 = ft_lstnew("list3");
//	list4 = ft_lstnew("list4");
//	list1->next = list2;
//	list2->next = list3;
//	list3->next = list4;

//	printf("%d\n", ft_lstsize(list1));
//	return (0);
//}