#include "lists.h"

/**
 * check_cycle - checks if a linked list has circle
 *@list: the list
 *Return: 0 if none, 1 otherwise
 */

int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	while(
