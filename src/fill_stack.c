#include "push_swap.h"

void fill_node(t_stack_node **a, int val)
{
	t_stack_node	*node;
	t_stack_node	*aux;


	node = malloc(sizeof(t_stack_node));
	node->value = val;
	node->next = NULL;
	if (*a == NULL)
	{
		
		node->prev = NULL;
		*a = node;
	}
	else
	{
		aux = ft_lstlast(*a);
		aux->next = node;
		node->prev = aux;
	}
}

int fill_stack (t_stack_node **first, char **vetor)
{
	int i;
	long val;

	i = 0;
	while (vetor[i])
	{
		//PRIMEIRO: Testar erros (syntax, repetição e limite de inteiro)
		if (error_syntax(vetor[i]) == -1)
		{
			printf("Erro de syntax! \n");
			return(-1);
		}
		val = ft_atoi(vetor[i]);
		if (repetition (*first, val) == -1)
		{
			printf("Erro de repetição! \n");
			return(-1);
		}
		if (val > INT_MAX || val < INT_MIN)
		{
			printf("Erro!\n Número excede tamanho de um inteiro \n");
			return(-1);
		}
		//SEGUNDO: Dar fill da stack
		fill_node(first, val);
 		i++;
	}
	return(1);
}