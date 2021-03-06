/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduval <tduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 22:24:26 by tduval            #+#    #+#             */
/*   Updated: 2019/01/07 18:37:50 by tduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct		s_list
{
	int				n;
	struct s_list	*next;
}					t_list;

int					lst_len(t_list *stack);
t_list				*cat_params(int ac, char **av, int *c);
void				sale_sort(t_list **stack_a, t_list **stack_b);
void				opti_sort(t_list **stack_a, t_list **stack_b);
void				sa(t_list **stack_a, int u);
void				sb(t_list **stack_b, int u);
void				ss(t_list *stack_a, t_list *stack_b, int u);
void				pa(t_list **stack_a, t_list **stack_b, int u);
void				pb(t_list **stack_a, t_list **stack_b, int u);
void				ra(t_list **stack_a, int u);
void				rb(t_list **stack_b, int u);
void				rr(t_list **stack_a, t_list **stack_b, int u);
void				rra(t_list **stack_a, int u);
void				rrb(t_list **stack_b, int u);
void				rrr(t_list *stack_a, t_list *stack_b, int u);
int					get_med(t_list *stack);
int					is_largest(t_list *stack);
int					stacks_sorted(t_list *stack);
t_list				*lst_new(int num);
t_list				*lst_pushfront(t_list *lst, int num);
t_list				*lst_pushback(t_list *lst, int num);
t_list				*lst_popfront(t_list *lst);
t_list				*lst_popback(t_list *lst);
void				lst_free(t_list **stack_a, t_list **stack_b);
void				print_stacks(t_list *stack_a, t_list *stack_b);
void				short_sort(t_list **stack_a, t_list **stack_b);

#endif
