/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:00:37 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/22 09:05:23 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;

    i = 0;
	if (size < 1)
		return(i);
	while (src[i -1] != '\0' || i <= size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
    return (i);
}
