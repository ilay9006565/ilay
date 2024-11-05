#include "Queue.h"
#include <iostream>

void initQueue(Queue* q, unsigned int size)
{
	q->_maxSize = size;
	q->_elements = new int[q->_maxSize];
	q->_count = 0;

	for (int i = 0; i < q->_maxSize; i++)
		q->_elements[i] = -3;
}

void cleanQueue(Queue* q)
{
	for (int i = 0; i < q->_maxSize; i++)
	{
		q->_elements[i] = -3;
	}
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (q->_count == q->_maxSize)
	{
		std::cout << "you reached the max of queue" << std::endl;

	}
	else
	{
		q->_elements[q->_count] = newValue;
		q->_count++;
	}
		
}

int dequeue(Queue* q)// return element in top of queue, or -1 if empty
{
	if (q->_elements[0] ==-3)
	{
		return -1;
	}
	else
	{
		int returnNum = q->_elements[0];
		for (int i = 0; i < q->_count; i++)
		{
			q->_elements[i] = q->_elements[i + 1];
		}
		q->_elements[q->_maxSize - 1] = -3;
		return returnNum;
	}
}

bool isEmpty(Queue* s)
{
	for (int i = 0; i < s->_maxSize; i++)
	{
		if (s->_elements[i] != -3)
			return false;
	}
	return true;
}

bool isFull(Queue* s)
{
	for (int i = 0; i < s->_maxSize; i++)
	{
		if (s->_elements[i] == -3)
			return false;
	}
	return true;
}


