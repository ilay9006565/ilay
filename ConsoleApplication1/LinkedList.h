#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct List
{
	int number;
	List* next;
} List;


List* initList(int num);

List* addNode(List* head, int num);



#endif /* LINKEDLIST_H */