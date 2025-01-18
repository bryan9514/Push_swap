/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:21:39 by brturcio          #+#    #+#             */
/*   Updated: 2025/01/18 13:12:29 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include "../Push_swap/libft/libft.h"


typedef struct s_slack
{
	int			index;
	int			value;
	int			pos;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
} t_slack;

void	printf_error(void);
void	check_av( char **av);


// split
size_t	count_words(char const *str, char c);
int	ft_free(char **result, size_t index);
void	fill_result(char *new, char const *str, char c);
int	div_words(char **result, char const *str, char sep);
char	**ft_split(char const *s, char c);


//a quitar
char	*ft_strrchr(const char *s, int c);
size_t	ft_strlen(const char *str);
#endif
