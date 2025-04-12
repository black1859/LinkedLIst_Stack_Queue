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

/*
	std::cout << "\nstack example\n[1,2,3] + 4\n";
	Stack s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	std::cout << s1.pop() << "\n";
	std::cout << s1.pop() << "\n";
	s1.push(4);
	std::cout << s1.pop() << "\n";
	std::cout << s1.pop() << "\n";
*/