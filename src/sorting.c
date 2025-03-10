/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 20:41:17 by brturcio          #+#    #+#             */
/*   Updated: 2025/03/09 19:07:01 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack **a_stack)
{
	// 2 1
	if ((*a_stack)->value > (*a_stack)->next->value)
		ft_sa(a_stack);
}

void	sort_three(t_stack **a_stack)
{
	if ((*a_stack)->value > (*a_stack)->next->value \
	&& (*a_stack)->next->value > (*a_stack)->next->next->value)
	{
		ft_sa(a_stack);
		ft_rra(a_stack);
	}
	else if ((*a_stack)->value > (*a_stack)->next->value \
	&& (*a_stack)->value > (*a_stack)->next->next->value)
		ft_ra(a_stack);
	else if ((*a_stack)->value > (*a_stack)->next->value)
		ft_sa(a_stack);
	else if ((*a_stack)->value < (*a_stack)->next->next->value \
	&& (*a_stack)->next->value > (*a_stack)->next->next->value)
	{
		ft_sa(a_stack);
		ft_ra(a_stack);
	}
	else if ((*a_stack)->value < (*a_stack)->next->value \
	&& (*a_stack)->next->value > (*a_stack)->next->next->value)
		ft_rra(a_stack);
}

t_stack *find_min(t_stack *a)
{
    t_stack *min = a;

    while (a)
    {
        if (a->nbr < min->nbr)
            min = a;
        a = a->next;
    }
    return (min);
}



int get_position(t_stack *a, t_stack *node)
{
    int pos = 0;

    while (a)
    {
        if (a == node)
            return pos;
        a = a->next;
        pos++;
    }
    return -1; // No debería ocurrir
}

void min_on_top(t_stack **a)
{
    t_stack *min = find_min(*a);

    while (*a != min)
    {
        if (get_position(*a, min) <= stack_len(*a) / 2)
            ra(a);
        else
            rra(a);
    }
}



void sort_five(t_stack **a_stack, t_stack **b_stack)
{
    t_stack *min;

    // Mover los dos números más pequeños a `b`
    while (stack_len(*a) > 3)
    {
        min = find_min(*a); // Encuentra el nodo con el valor más pequeño

        // Mover `min` a la cima de `a`
        while (*a != min)
        {
            if (get_position(*a, min) <= stack_len(*a) / 2) // Si está en la mitad superior
                ra(a, false);
            else // Si está en la mitad inferior
                rra(a, false);
        }

        pb(b, a, false); // Mover `min` de `a` a `b`
    }

    sort_three(a); // Ordenar los 3 números restantes en `a`

    // Mover de vuelta los números de `b` a `a`
    pa(a, b, false);
    pa(a, b, false);

    // Asegurar que el número más pequeño esté en la cima
    min_on_top(a);
}

