/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouafso <abouafso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:20:45 by abouafso          #+#    #+#             */
/*   Updated: 2024/07/16 09:26:47 by abouafso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	is_number(int c)
{
	return ((c >= '0' && c <= '9') || c == ' ');
}

int	is_num(char c)
{
	if (!c)
		return (0);
	return (c >= '0' && c <= '9');
}

int	is_alpha(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j + 1] &&
				av[i][j] == '+'&& is_num(av[i][j + 1]))
			{
				j++;
				continue ;
			}
			else if (!is_number(av[i][j]))
				return (1);
			j++;
		}
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

	philo->philo = ft_atoi(av[1]);
	philo->time_to_die = ft_atoi(av[2]);
	philo->time_to_eat = ft_atoi(av[3]);
	philo->time_to_sleep = ft_atoi(av[4]);
	if(av[5])
		philo->nb_time_to_eat = ft_atoi(av[5]);
	return (0);
}

void f() { system("leaks philo"); }

int main(int ac, char **av)
{
	t_philo philo;
	// atexit(f);

	if (ac < 5 || ac > 6)
	{
		printf("ERROR : INVALID NUMBER OF ARGUMENTS!\n");
		return (1);
	}
	if (is_alpha(av) || is_empty(av))
	{
		return (printf("Error\n"));
	}
	split_args(ac, av, &philo);
		printf("%d\n", philo.philo);
	printf("%d\n", philo.time_to_die);
	printf("%d\n", philo.time_to_eat);
	printf("%d\n", philo.time_to_sleep);
	// printf("%d\n", philo.nb_time_to_eat);
}