#include "push_swap.h"

int repetition (t_stack_node	*first, int val)
{
	while (first)
	{
		if (first->value == val)
			return (-1);
		first = first->next;
	}
	return (0);
}

int error_syntax(char *arg)
{
	int i;

	i = 1;
	if (arg[0] == '+' || arg[0] == '-' && !(arg[1] >= '0' && arg[1] <= '9'))
		return (-1);
	if (!(arg[0] == '+' || arg[0] == '-' || (arg[0] >= '0' && arg[0] <= '9')))
		return (-1);
	while (arg[i] != '\0')
	{
		if (!(arg[i] >= '0' && arg[i] <= '9'))
			return (-1);
		i++;
	}
	return (1);
}