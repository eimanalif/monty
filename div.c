#include "monty.h"


/**
 * e_div - divides top two elements in stack.
 * Description:divides top two elements in stack.
 * @head: head
 * @counter: line_number
 * Return: void
*/


void e_div(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int length = 0;
	int aux;

	h = *head;

	while (h)
	{
		h = h->next;
		length++;
	}

	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
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
	aux = h->next->n / h->n;
	h->next->n = aux;
	*head = h->next;

	free(h);
}
