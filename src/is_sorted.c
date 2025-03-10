/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:11:49 by brturcio          #+#    #+#             */
/*   Updated: 2025/03/09 11:08:31 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	if (!stack || !stack->next)
		return (0);
	while (stack->next != NULL)
	{
		if(stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}
int	size_stack(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack != NULL)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

void	choose_sorting_algo(t_stack **a_stack, t_stack **b_stack)
{
	int	size;

	size = size_stack(*a_stack);
	if (!is_sorted(*a_stack))
	{
		if (size == 2)
			sort_two(a_stack);
		else if (size == 3)
			sort_three(a_stack);
		else if (size <= 5)
			sort_five(a_stack, b_stack);
		else
			ft_printf("mas de 5\n"); //(void)quick_sort(a_stack, b_stack);
	}
}
