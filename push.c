#include "monty.h"


/**
 *e_push - add node
 *Description:add node
 *@head: stack head
 *@counter: line_number
 *Return: void
*/


void e_push(stack_t **head, unsigned int counter)
{
	int n = 0;
	int j = 0;
	int flg = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flg = 1; }

		if (flg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}

	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);

	if (bus.lifi == 0)
		addnode(head, n);

	else
		addqueue(head, n);
}
