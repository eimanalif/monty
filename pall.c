#include "monty.h"


/**
 * e_pall - prints stack
 * Description:prints stack
 * @head: stack head
 * @counter: no used
 * Return: void
 */




void e_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;

	if (h == NULL)
		return;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

