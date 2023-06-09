#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s -all string linked list
 * @n: int
 * @next: show the next node
 *
 * Description: singly linked list to structure
 */
typedef struct listint_s
{
	int num;
	struct listint_s *next;
} listint_t;

listint_t *add_nodeint(listint_t **head, const int num);
size_t print_listint(const listint_t *h);
int check_cycle(listint_t *list);
void free_listint(listint_t *head);

#endif /* LISTS_H */:wq
