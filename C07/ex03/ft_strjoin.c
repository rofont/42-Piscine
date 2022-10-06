/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:37:52 by rofontai          #+#    #+#             */
/*   Updated: 2022/10/05 16:12:31 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strl(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

int	ft_ultimate_strl(int size, char **strs)
{
	int	i;
	int	len;

	i = 0;
	while (i < size)
	{
		len = len + ft_strl(strs[i]);
		i++;
	}
	return (len);
}

int	ft_write(char *dest, char *src, int index)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[index] = src[i];
		i++;
		index++;
	}
	return (index);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strdef;
	int		tail;
	int		i;
	int		x;

	i = 0;
	x = 0;
	if (size == 0)
		return ((char *)malloc(1));
	tail = (ft_ultimate_strl(size, strs)) + ((size - 1) * ft_strl(sep));
	strdef = (char *)malloc(sizeof(char) * tail +1);
	if (strdef == NULL)
		return (0);
	while (i < size && i < tail)
	{
		x = ft_write(strdef, *strs, x);
		if (i != size - 1)
			x = ft_write(strdef, sep, x);
		i++;
		strs++;
	}
	strdef[tail] = '\0';
	return (strdef);
}
