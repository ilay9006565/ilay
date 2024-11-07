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
    int  returnValue = 0;
    List* tempo = s->top;
    List* before = NULL;

    while (tempo->next != NULL)//לולאה רצה עד כדי למצוא את העליון במחסנית והאחד שאחריו
    {
        before = tempo;
        tempo = tempo->next;
    }

    returnValue = tempo->number;
    delete(tempo);
    before->next = NULL;

    return returnValue;
}

void initStack(Stack* s) 
{
    s->top = nullptr;
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
