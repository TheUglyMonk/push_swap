#include "push_swap.h"

void op_r(t_stack_node **stack)
{
	t_stack_node *aux;
	int aux_b;
	t_stack_node *a;

	aux = ft_lstlast(*stack);
	a = *stack;
	aux_b = a->value;
	a->value = aux->value;
	aux->value = aux_b;

	//ft_lstadd_front(&stack, aux);
	//ft_lstdel_last (&stack);
	//free(aux);
}

void op_rr(t_stack_node **stack)
{
	t_stack_node *aux;

	aux = *stack;
	ft_lstadd_back(&stack, aux);
	ft_lstdel_first(*stack);
	free(aux);
}

void op_push(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*node_to_push;

	if (NULL == *b)
		return ;
	node_to_push = *b;
	*b = (*b)->next;
	if (*b)
		(*b)->prev = NULL;
	node_to_push->prev = NULL;
	if (NULL == *b)
	{
		*a = node_to_push;
		node_to_push->next = NULL;
	}
	else
	{
		node_to_push->next = *a;
		node_to_push->next->prev = node_to_push;
		*a = node_to_push;
	}
}

void op_swap(t_stack_node **stack)
{
	int aux;
	int aux_b;
	t_stack_node *a;

	a = *stack;
	aux_b = a->value;
	aux = a -> next -> value;
	a->value = aux;
	a -> next->value = aux_b;
}
