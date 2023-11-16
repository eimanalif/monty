#include "monty.h"
/**
 * e_pint - print
 * Description:print
 * @head:head
 * @counter: line_number
 * Return:void
*/


void e_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}

