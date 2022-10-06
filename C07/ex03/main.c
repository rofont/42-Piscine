/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:27:40 by rofontai          #+#    #+#             */
/*   Updated: 2022/10/05 16:08:35 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
    char *str[] = {"Il", "etait", "une", "fois"};
    
    printf("%s\n", ft_strjoin(4, str, "-_-"));
    return (0);
}