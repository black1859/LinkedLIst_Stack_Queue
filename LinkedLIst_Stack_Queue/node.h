#pragma once

class Node
{
public:
	Node(int v, Node* next);
	Node(int v);

	Node* getNext();
	int getValue();
	void setNext(Node* other);

	~Node();	//Nothing
private:
	int m_value;
	Node* m_next;
};
