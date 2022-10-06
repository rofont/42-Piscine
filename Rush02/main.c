/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:04:52 by rofontai          #+#    #+#             */
/*   Updated: 2022/10/02 11:55:44 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include

unsigned int validation_argc (unsigned int argc, char **argv);

int main(int argc, char **argv)
{
    unsigned i;
    i = validation_argc(argc, **argv);


    return (0);
}