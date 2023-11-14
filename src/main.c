#include "push_swap.h"

char **exclude_0(char **vetor)
{
	char    **aux;
	int     i;

	i =0;
	aux = malloc(sizeof(char) * (ft_strlen(vetor) - 1));
	while (vetor)
		aux[i] = vetor[++i];
	aux[++i] = '\0';
	return (aux);
}

char *cpy_argv(char **argv, int argc)
{
	char    **aux;
	int     i;

	aux = malloc(sizeof(char) * (argc - 1));
	i = 0;
	while (argv[i + 1])
	{
		aux[i] = argv[i + 1];
		i++;
	}
	aux[i + 1] = '\0';
	return (aux);
}

int main (int argc, char **argv)
{
	t_stack_node	*first;
	t_stack_node	*second;
	char			**vetor;

	first = NULL;
	second = NULL; 
	if (1 == argc || (2 == argc && !argv[1][0]))
		return (1);
	else if (2 == argc)
		vetor = ft_split(argv[1], ' ');
	else if (argc > 2)
		vetor = cpy_argv(argv, argc);
	//vetor = exclude_0(vetor); // esta função vai ser incluida no cpy_argv e ft_slit basicamente exclude o /0 na posiçao 0 de argv
	if (fill_stack (&first, vetor))
	{
		while (1)
		{
			if (stack_sorted(first))
				return (0);
			else if (ft_lstsize(first) == 2)
				return (0);
				// swap_pos
			else if (ft_lstsize(first) == 3)
				return (0);
				// tiny(&first);
			else
				return (0);
				//push_swap(&first, &second);
		}
	}
	// free memory
}
