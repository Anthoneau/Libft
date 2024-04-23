/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:36:06 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/19 14:46:19 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}

//#include <stdio.h>
//int	main(void)
//{
//	t_list	*list1;
//	t_list	*list2;
//	t_list	*list3;
//	t_list	*list4;
//	char str[] = "hein";

//	list1 = ft_lstnew(str);
//	list2 = ft_lstnew(str);
//	list3 = ft_lstnew(str);
//	list4 = ft_lstnew(str);
//	list1->next = list2;
//	list2->next = list3;
//	list3->next = list4;
//	ft_lstlast(list1);
//	return (0);
//}