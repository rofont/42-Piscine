/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:35:10 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/26 16:44:30 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	
	char	dest1[] = "papa";
	char	*src1 = " et papi";
	printf("%s\n", ft_strncat(dest1, src1, 3));
    
    
    
}
