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
