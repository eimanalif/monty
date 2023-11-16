#include "monty.h"


/**
 * e_pstr - prints string followed by a new line
 * Description:prints string followed by a new line
 * @head: stack head
 * @counter: line_number
 * Return: void
*/



void e_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	
	printf("\n");
}
