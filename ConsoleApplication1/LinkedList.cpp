#include "LinkedList.h"
#include <iostream>


List* initList(int num)
{
    List* newNode = new List; 
    newNode->number = num;      
    newNode->next = NULL;   
    return newNode;
}

List* addNode(List* head, int number)
{
    List* newNode = initList(number);
    if (head ==NULL ) 
    { 
        head = newNode;
    }
    else 
    {
        List* current = head;
        while (current->next) 
        { 
            current = current->next;
        }
        current->next = newNode; 
    }

    return newNode;
}

