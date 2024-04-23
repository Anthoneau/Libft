/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:58:20 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/23 11:09:40 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*content;

	if (!lst || !(*f) || !(*del))
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

//void	*f(void *cont)
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
//	return ((void *)content);
//}

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
//	t_list	*lst0;
//	t_list	*lst1;
//	t_list	*lst2;
//	t_list	*lst3;
//	t_list	*new_lst;
//	char	str0[] = "lorem";
//	char	str1[] = "ipsum";
//	char	str2[] = "dolor";
//	char	str3[] = "sit";
//	char	aie[] = "aie";
//	char	ok[] = "une nouvelle liste a ete retourne";

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
//	write(1, "\n", 1);
//	if (!(new_lst = ft_lstmap(lst0, &f, &del)))
//		return (0);
//	if (new_lst == lst0)
//		write(1, aie, ft_strlen(aie));
//	while (new_lst)
//	{
//		print(new_lst);	
//		new_lst = new_lst->next;
//	}
//	write(1, "\n", 1);
//	write(1, ok, ft_strlen(ok));
//	write(1, "\n", 1);
//	return (0);
//}