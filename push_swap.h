/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:21:39 by brturcio          #+#    #+#             */
/*   Updated: 2025/01/17 18:04:06 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_slack
{
	int			index;
	int			value;
	int			pos;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
} t_slack;

void	check_av(char **av, int ac);
void	printf_error(void);


//split
static size_t	count_words(char const *str, char c);
static int	ft_free(char **result, size_t index);
static void	fill_result(char *new, char const *str, char c);
static int	div_words(char **result, char const *str, char sep);
char	**ft_split(char const *s, char c);

#endif
