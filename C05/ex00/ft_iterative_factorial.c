/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:29:36 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/26 14:53:32 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	nb_fac;

	i = 1;
	nb_fac = nb;
	if (nb <= 0)
	{
		if (nb == 0)
			return (1);
		return (0);
	}
	while (i != nb)
	{
		nb_fac = nb_fac * (nb - i);
		i++;
	}
	return (nb_fac);
}
