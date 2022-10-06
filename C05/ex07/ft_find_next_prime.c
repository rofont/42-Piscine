/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:09:41 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/29 15:41:56 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	while (i < nb && nb % i != 0)
	{
		i += 2;
	}
	if (i == nb)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb >= 2147483630)
		return (2147483647);
	if (nb % 2 == 0)
		nb++;
	if (ft_is_prime(nb) == 0)
		return (ft_find_next_prime(nb + 2));
	return (nb);
}
