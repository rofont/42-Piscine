/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:57:08 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/30 09:56:57 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		l;
	char	*dest;

	l = 0;
	while (src[l] != '\0')
		l++;
	dest = (char *)malloc(sizeof(dest) * (l + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (i < l)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
