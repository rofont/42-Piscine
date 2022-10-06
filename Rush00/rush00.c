/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 08:27:02 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/18 09:19:02 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	column;

	row = 0;
	while (++row <= y)
	{
		column = 0;
		while (++column <= x)
		{
			if (row == 1 || row == y)
			{
				if (column == 1 || column == x)
					ft_putchar('o');
				else
					ft_putchar('-');
			}
			else if (column == 1 || column == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
