#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct List
{
	int number;
	List* next;
} List;


List* initList(int num);

void addNode(List* head, int num);

void removeNode(List* head);

#endif /* LINKEDLIST_H */