/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:22:01 by brturcio          #+#    #+#             */
/*   Updated: 2025/01/18 13:09:26 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	main(int ac, char **av)
{
	// t_slack	*slack_a;
	// t_slack	*slack_b;

	// slack_a = NULL;
	// slack_b = NULL;
	char	**av_resul = NULL;
	int	i;

	i = 0;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return (printf_error(),1);
	else if (ac == 2)
		av_resul = ft_split(av[1], ' ');
	else
	{
		while (i < ac)
		{
			if (!ft_strrchr(av[i], ' '))
				av_resul[i] = av[i];
			else
				av_resul = ft_split(av[i], ' ');
			i++;
		}

	}
	// free_split(av_resul)
	return (0);
}
