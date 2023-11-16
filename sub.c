#include "monty.h"


/**
  *e_sub- subtracts the top element of the stack
  *		from the second top element of the stack.
  *Description:subtracts the top element of the
  *		stack from the second top element of the stack.
  *@head: head
  *@counter: line_number
  *Return: void
 */


void e_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int su;
	int nodes;

	aux = *head;

	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;

	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	aux = *head;
	su = aux->next->n - aux->n;
	aux->next->n = su;
	*head = aux->next;

	free(aux);
}
