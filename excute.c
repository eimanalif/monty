#include "monty.h"
/**
* execute - execute opcode
*Description:execute opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: int
*/



int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", e_push}, {"pall", e_pall}, {"pint", e_pint},
				{"pop", e_pop},
				{"swap", e_swap},
				{"add", e_add},
				{"nop", e_nop},
				{"sub", e_sub},
				{"div", e_div},
				{"mul", e_mul},
				{"mod", e_mod},
				{"pchar", e_pchar},
				{"pstr", e_pstr},
				{"rotl", e_rotl},
				{"rotr", e_rotr},
				{"queue", e_queue},
				{"stack", e_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}

