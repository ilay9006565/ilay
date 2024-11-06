#include "LinkedList.h"
#include <iostream>


List* initList(int num)
{
    List* newNode = new List; 
    newNode->number = num;      
    newNode->next = NULL;   
    return newNode;
}

void addNode(List* head, int number)
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
}

void removeNode(List* head)
{
    if (head == NULL) 
    {
        std::cout << "List is empty. Nothing to remove." << std::endl;
        return;
    }
    List* temp = head; 
    head = head->next; 
    delete temp;       
}

