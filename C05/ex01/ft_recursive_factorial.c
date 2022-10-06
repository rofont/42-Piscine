/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:54:52 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/27 08:38:40 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
	{
		if (nb == 0)
			return (1);
		return (0);
	}
	if (nb == 1)
		return (nb);
	return (nb * ft_recursive_factorial(nb - 1));
}
