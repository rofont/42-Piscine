/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:28:50 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/19 10:20:37 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_num(int x, int y)
{
	ft_putchar(x / 10 + 48);
	ft_putchar(x % 10 + 48);
	ft_putchar(' ');
	ft_putchar(y / 10 + 48);
	ft_putchar(y % 10 + 48);
	if (x < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	
}

void	ft_print_comb2(void)
{
	int	a[2];

	a[0] = 0;
	while (a[0] <= 98)
	{
		a[1] = a[0] + 1;
		while (a[1] <= 99)
		{
			ft_num(a[0], a[1]);
			a[1]++;
		}
		a[0]++;
	}
}
