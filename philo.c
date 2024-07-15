/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouafso <abouafso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:20:45 by abouafso          #+#    #+#             */
/*   Updated: 2024/07/14 19:48:14 by abouafso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int main(int ac, char **av)
{
    (void) av;
    if (ac < 5 || ac > 6)
    {
        printf("ERROR : INVALID NUMBER OF ARGUMENTS!\n");
        return(1);
    }
    
}