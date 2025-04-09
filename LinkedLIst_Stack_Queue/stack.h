#pragma once
#include "node.h"
#define NONE -123456

//LIFO Last in FIrst out
class Stack
{
public:
	Stack();
	~Stack();

	bool isEmpty();
	void push(int value);
	int pop();

private:
	Node* m_head;
};
