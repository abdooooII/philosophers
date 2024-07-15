/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouafso <abouafso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:20:45 by abouafso          #+#    #+#             */
/*   Updated: 2024/07/15 08:01:56 by abouafso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	is_digit(char **str)
{
	int i = 1;
	int	j = 0;
	
	while(str[i])
	{
		while(str[i][j])
		{
			if(!(str[i][j] >= '0' && str[i][j] <= '9'))
			{
				printf("arguments contain alphabets");
				return(1);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return(0);
}

int main(int ac, char **av)
{
    
    if (ac < 5 || ac > 6)
    {
        printf("ERROR : INVALID NUMBER OF ARGUMENTS!\n");
        return(1);
    }
	is_digit(av);
    
}