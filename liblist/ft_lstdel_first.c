#include "push_swap.h"

/*Delete the first node of a linked list.*/
void ft_lstdel_first(t_stack_node **head)
{
	t_stack_node *tmp;

	/*Linked list does not exist or the list is empty*/
	if(head == NULL || *head == NULL) 
		return;
  
	/*Storing the head to a temporary variable*/
	tmp = *head;
  
	/*Moving head to the next node*/
	*head = (*head)->next;
  
	/*Deleting the first node*/
	free(tmp);
}

/*int main(void){
  char *vetor[4] = {"42", "1445", "-32" , "6"};
  t_stack_node *a;
  a = NULL;
  fill_stack(&a, vetor);
  ft_lstdel_first(&a);
  ft_lstprint_val(a);
  
   while (a != NULL)
    {
        t_stack_node *temp = a->next;
        free(a);
        a = temp;
    }
    return (0);
}*/