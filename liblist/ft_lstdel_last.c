#include "push_swap.h"


void ft_lstdel_last(t_stack_node **head)
{
    if (*head == NULL) 
	{
        return; // If the list is empty, nothing to delete
    }

    t_stack_node *temp = *head;
    t_stack_node *prev = NULL;

    // Traverse the list to find the last node and its previous node
    while (temp->next != NULL) 
	{
        prev = temp;
        temp = temp->next;
    }

    if (prev == NULL) 
	{
        // Only one node in the list, delete it
        free(*head);
        *head = NULL;
    } 
	else 
	{
        // More than one node, delete the last node
        prev->next = NULL;
        free(temp);
    }
}
