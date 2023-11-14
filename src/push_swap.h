#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
// # include <unistd.h>

typedef struct s_stack_node
{
	int					value;
	int					current_position;
	//int					final_index;
	//int					push_price;
	//bool				above_median;
	//bool				cheapest;
	//struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}				t_stack_node;

//******************************Funções para manusear t_stack_node******************************//
void			ft_lstadd_back(t_stack_node **lst, t_stack_node *new);
void			ft_lstadd_front(t_stack_node **lst, t_stack_node *new);
void			ft_lstdel_first(t_stack_node **head);
void			ft_lstdel_last (t_stack_node **head);
t_stack_node	*ft_lstlast(t_stack_node *lst);
int				ft_lstsize(t_stack_node *lst);

#endif
