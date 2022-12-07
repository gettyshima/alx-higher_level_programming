#include "lists.h"

/**
  *check_cycle - checks if singly list has a cycle
  *@list: the list
  *
  *Return: 0 if there's none, 1 if there is
  */

int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (list != NULL)
	{
		while (slow && fast && fast->next)
		{
			fast = fast->next->next;
			slow = slow->next;
			if (slow == fast)
			{
				slow = list;
				while (slow != list)
				{
					slow = slow->next;
					fast = fast->next;
				}
				return (1);
			}
		}
	}
	return (0);
}
