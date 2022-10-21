#include "lists.h"
/**
 * list_len - to return then number of elements in a list.
 * @h: singly linked list.
 * Return:return number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
