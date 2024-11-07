#include "Stack.h"
#include <iostream>

void reverse(int* nums, unsigned int size)
{
	Stack* revesed = new Stack;
	initStack(revesed);

	for (int i = 0; i < size; i++)
	{
		push(revesed, nums[i]);
	}
	for (int i = 0; i < size; i++)
	{
		nums[i] = pop(revesed);
	}
	delete revesed;
}

int* reverse10()
{
	Stack* reversed = new Stack;
	int size = 10;
	int* arr = new int[size];
	int num = 0;
	initStack(reversed);

	for (int i = 0; i < size; i++)
	{
		std::cout << "enter num: " << std::endl;
		std::cin >> num;
		arr[i] = num;
	}

	for (int i = 0; i < size; i++)
	{
		push(reversed, arr[i]);
	}
	for (int i = 0; i < size; i++)
	{
		arr[i] = pop(reversed);
	}
	delete reversed;

	return arr;
}