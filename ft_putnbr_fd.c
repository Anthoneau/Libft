/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoldber <agoldber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:25:30 by agoldber          #+#    #+#             */
/*   Updated: 2024/04/22 12:31:49 by agoldber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	a;

	a = n;
	if (a == -2147483648)
	{
		ft_putstr_fd("-214748364", fd);
		a = 8;
	}
	if (a < 0)
	{
		a *= -1;
		ft_putchar_fd('-', fd);
	}
	if (a >= 10)
	{
		ft_putnbr_fd(a / 10, fd);
		a %= 10;
		ft_putchar_fd((a + '0'), fd);
	}
	else if (a <= 9)
		ft_putchar_fd((a + '0'), fd);
}

//#include <stdio.h>
//int	main(int ac, char **av)
//{
//	int	n;

//	if (ac)
//	{
//		n = ft_atoi(av[1]);
//		printf("%s\n", av[1]);
//		ft_putnbr_fd(n, 1);
//	}
//	return (0);
//}