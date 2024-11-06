#include <iostream>
#include "LinkedList.h"
#include "Stack.h"


void push(Stack* s, unsigned int element) 
{
    List* newNode = new List;

    newNode->number = element;
    newNode->next = s->top;//מצביע על המשתנה העליון קח שהמשתנה הראשון "יורד" למטה

    s->top = newNode;
}

int pop(Stack* s)
{
    if (s->top == NULL) 
    {
        return -1;  
    }

    int topValue = s->top->number;

    List* temp = s->top;
    s->top = s->top->next;//הופך את האחד מתחת לעליון לעליון
    delete temp;

    return topValue;
}