/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:22:01 by brturcio          #+#    #+#             */
/*   Updated: 2025/01/17 18:19:15 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	main(int ac, char **av)
{
	// t_slack	*slack_a;
	// t_slack	*slack_b;

	// slack_a = NULL;
	// slack_b = NULL;
	if (ac <= 1 ){
		;
		return (printf_error(),1);}
	if (ac >= 2)
		check_av(av, ac);
	return (0);
}
