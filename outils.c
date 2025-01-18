/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outils.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 08:47:24 by brturcio          #+#    #+#             */
/*   Updated: 2025/01/18 14:06:27 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

void	check_av( char **av)
{
	int	i;

	i = 0;
	// while (i < ac - 1)
	// {
	// 	printf("[%d][%d] %s\n",i ,av[i]);
	// 	i++;
	// }

	while (av[i] != NULL)
	{
		printf("[%d] %s\n",i, av[i]);
		i++;
	}


}
void	printf_error(void)
{
	printf("Error\n");
}


// void free_split(char **split) {
//     int i = 0;
//     while (split[i] != NULL) {
//         free(split[i]);

//         i++;
//     }
//     free(split);
// }

