/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 16:11:14 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/16 18:48:18 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

# include <stdio.h> // for debugging


# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define IS_INT(V) V > INT_MIN && V < INT_MAX

/*
** This is my structure list:
*/

typedef struct		s_node
{
	int				v;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

/*
** This help me to keep pointers and easily do operations:
*/

typedef struct		s_list
{
	int				len;
	t_node			*head;
	t_node			*tail;
}					t_list;

/*
** Lib
*/

t_list			*ft_lstnew(void);
t_list			*ft_lstappend(t_list *list, int v);
int				ft_isdigit(int c);
int				ft_strisdigit(char *s);
long			ft_atoi(const char *str);
int				ft_error(void);

/*
** ft_parsing.c
*/

t_list			*ft_parsing(int ac, char **av);
int				ft_check(t_list *list, char *av);
int				ft_isint(t_list *list, char *av);
int				ft_isunique(t_list *list, int v);

#endif
