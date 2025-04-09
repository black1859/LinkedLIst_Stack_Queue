#pragma once
#include "node.h"
#define NONE -123456

//FIFO first in first out
class Queue
{
public:
	Queue();
	~Queue();

	bool isEmpty();
	void enqueue(int value);
	int dequeue();

private:
	Node* m_head;
	Node* m_tail;
};
