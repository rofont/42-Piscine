/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:05:05 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/26 16:30:10 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *ft_strcat(char *dest, char *src);

int        main(void)
{
    char    dest[] = "papa";
    char    *src = " et papi";
    
    printf("%s\n", ft_strcat(dest, src));

}
