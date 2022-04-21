#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: the first node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		count += 1;
	}
	return (count);
}