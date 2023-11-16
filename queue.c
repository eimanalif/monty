#include "monty.h"


/**
 * e_queue - prints top
 * Description:prints top
 * @head:head
 * @counter: line_number
 * Return: void
*/


void e_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}


/**
 * addqueue - add node to tail stack
 * Description: add node
 * @n: new_value
 * @head: head of the stack
 * Return: void
*/

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error\n");
	}

	new_node->n = n;
	new_node->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}

	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}

	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
