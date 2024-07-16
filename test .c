/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test .c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouafso <abouafso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:20:45 by abouafso          #+#    #+#             */
/*   Updated: 2024/07/16 04:36:50 by abouafso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int is_digit(char **str)
{
	int i = 1;
	int j = 0;

	while (str[i])
	{
		while (str[i][j])
		{
			if (!(str[i][j] >= '0' && str[i][j] <= '9'))
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int is_empty(char **av)
{
	int i;
	int j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j] == ' ')
			j++;
		if (!av[i][j])
			return (1);
		i++;
	}
	return (0);
}
int split_args(int ac, char **av, t_philo *philo)
{
	(void) ac;
	char **splited;
	int i = 0;

	splited = ft_split(*av, ' ');
	if (!splited)
		return (1);
	philo->philo = ft_atoi(av[0]);
	philo->time_to_die = ft_atoi(av[1]);
	philo->time_to_eat = ft_atoi(av[2]);
	philo->time_to_sleep = ft_atoi(av[3]);
	if(av[4])
		philo->nb_time_to_eat = ft_atoi(av[4]);
	while(splited[i])
	{
		free(splited[i]);
		i++;
	}	
	free(splited);
	return (0);
}

void f() { system("leaks philo"); }

int main(int ac, char **av)
{
	t_philo philo;
	atexit(f);

	if (ac < 5 || ac > 6)
	{
		printf("ERROR : INVALID NUMBER OF ARGUMENTS!\n");
		return (1);
	}
	if (is_digit(av) || is_empty(av))
	{
		return (printf("Error\n"));
	}
	split_args(ac, ++av, &philo);
}