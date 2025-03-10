/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:21:39 by brturcio          #+#    #+#             */
/*   Updated: 2025/03/09 19:05:36 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <limits.h>
#include "libft.h"
#include "ft_printf.h"

typedef struct s_stack
{
	int		value;
	struct s_stack	*next;

} t_stack;

//eliminar
void	print_stack_reverse(t_stack *stack);

// main
char	**get_args(int ac, char **av);
void	validate_and_parse_args(int ac, char **av, t_stack **a_stack);
void	choose_sorting_algo(t_stack **a_stack, t_stack **b_stack);

//validation
int	check_duplicate(char **args, char *num, int index);
int	is_number(char *args);
int	validate_args(char **args);

//atol
long	ft_atol(char *str);

//stack_util
t_stack	*init_stack(char **args);
int	push_node(t_stack **stack, int value);



//is_sorting
int	is_sorted(t_stack *stack);
int	size_stack(t_stack *stack);

//free
void	free_args(char **args);
void	free_stack(t_stack **stack);
void	free_stack_error(t_stack **stack);


//sortin
void	sort_two(t_stack **a_stack);
void	sort_three(t_stack **a_stack);
void	sort_five(t_stack **a_stack, t_stack **b_stack);
t_stack *find_min(t_stack_node *a); //BORRAR
void	min_on_top(t_stack **a) //BORRAR
int get_position(t_stack *a, t_stack *node);

//swap
void	ft_swap(t_stack **stack);
void	ft_sa(t_stack **a_stack);
void	ft_sb(t_stack **b_stack);
void	ft_ss(t_stack **a_stack, t_stack **b_stack);

//push
void	ft_push(t_stack **dest, t_stack **src);
void	ft_pa(t_stack **a_stack, t_stack **b_stack);
void	ft_pb(t_stack **a_stack, t_stack **b_stack);

//reverse
void	ft_reverse_rotate(t_stack **stack);
void	ft_rra(t_stack **a_stack);
void	ft_rrb(t_stack **b_stack);
void	ft_rrr(t_stack **a_stack, t_stack **b_stack);

//rotate
void	ft_rotate(t_stack **stack);
void	ft_ra(t_stack **a_stack);
void	ft_rb(t_stack **b_stack);
void	ft_rr(t_stack **a_stack, t_stack **b_stack);

#endif
