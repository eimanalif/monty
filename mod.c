#include "monty.h"


/**
 * e_mod - computes the rest of division of second lement
 *		top element of the stack by top element of stack
 * Description:computes the rest of division of second lement
 *		top element of the stack by top element of stack
 * @head: head
 * @counter: line_number
 * Return: void
*/


void e_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int aux;
	int length = 0;

	h = *head;

	while (h)
	{
		h = h->next;
		length++;
	}

	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;

	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;

	free(h);
}
