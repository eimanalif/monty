#include "monty.h"


/**
 * e_mul - multiplies top two elements
 * Description:multiplies top elements
 * @head:head
 * @counter: line_number
 * Return:void
*/


void e_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int  aux;
	int length = 0;

	h = *head;

	while (h)
	{
		h = h->next;
		length++;
	}

	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}


	h = *head;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*head = h->next;

	free(h);
}
