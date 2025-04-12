#pragma once
#include "node.h"

class LinkedList
{
public:
	LinkedList(Node* header);
	LinkedList(int value);
	LinkedList();

	void addItem(int value);
	void delItem(int value);
	Node* searchNode(int value) const;

	bool isEmpty();
	void printAll();

	~LinkedList();

private:
	Node* m_head;
};

/* test this code in main
std::cout << "Linked List example\n[1,2,3] - 2 + 4 - 1\n";
	LinkedList l1;
	l1.addItem(1);
	l1.addItem(2);
	l1.addItem(3);
	l1.printAll();

	l1.delItem(2);
	l1.addItem(4);
	l1.printAll();

	l1.delItem(1);
	l1.printAll();
*/