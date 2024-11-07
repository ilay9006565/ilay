#include <iostream>
#include "LinkedList.h"
#include "Stack.h"


void push(Stack* s, unsigned int element) 
{
    List* newNode = new List;

    newNode->number = element;
    newNode->next = s->top;//מצביע על המשתנה העליון כך שהמשתנה הראשון "יורד" למטה

    s->top = newNode;
}

int pop(Stack* s)
{
    if (s->top == NULL) {
        return -1;  // Indicate the stack is empty
    }

    int returnValue = s->top->number;
    List* temp = s->top;
    s->top = s->top->next;
    delete temp;

    return returnValue;
}

void initStack(Stack* s) 
{
    s->top = NULL;
}

void cleanStack(Stack* s) 
{
    while (s->top != nullptr) 
    {
        List* temp = s->top;  
        s->top = s->top->next;  
        delete temp;
    }
}

bool isEmpty(Stack* s)
{
    if (s->top == NULL)
    {
        return true;
    }
    return false;
}

