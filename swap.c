#include "monty.h"



/**
 * e_swap - swap top two elements in stack.
 * Description:swap top element
 * @head: stack head
 * @counter: line_number
 * Return: void
*/


void e_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int i;
	int len = 0;

	h = *head;

	while (h)
	{
		h = h->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	i = h->n;
	h->n = h->next->n;
	h->next->n = i;
}
