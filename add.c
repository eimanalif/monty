#include"monty.h"




/**
 * e_add - add two elements
 * Description:add two elements
 * @head: head
 * @counter: line_number
 * Return: void
*/


void e_add(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;

	free(h);
}

