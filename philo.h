/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouafso <abouafso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:21:38 by abouafso          #+#    #+#             */
/*   Updated: 2024/07/16 04:36:01 by abouafso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
#define PHILO_H

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

typedef struct s_philo
{
	int				philo;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				nb_time_to_eat;
}	t_philo;

int		countword(const char *s, char c);
char	*ft_strndup(const char *src, int n);
void	ft_free(char **ptr, int i);
char	**ft_help(const char *end, char c, int len, char **final);
char	**ft_split(const char *s, char c);
int		is_digit(char **str);
int		is_empty(char **av);
long	ft_atoi(const char *str);

#endif