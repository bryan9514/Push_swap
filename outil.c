/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outil.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:20:58 by brturcio          #+#    #+#             */
/*   Updated: 2025/01/17 18:19:12 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_av(char **av, int ac)
{
	int	i;

	i = 0;
	while (i < ac - 1)
	{
		i++;
		printf("[%d] %s\n", i ,av[i]);
	}

}
void	printf_error(void)
{
	printf("Error\n");
}


