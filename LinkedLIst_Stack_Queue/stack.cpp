#include "stack.h"

Stack::Stack()
{
	m_head = nullptr;
}

Stack::~Stack()
{
	Node* current = m_head;
	while (current) {
		Node* next = current->getNext();
		delete current;
		current = next;
	}
}

bool Stack::isEmpty()
{
	return m_head == nullptr;
}

void Stack::push(int value)
{
	if (m_head) {
		m_head = new Node(value, m_head);
	}
	else
	{
		m_head = new Node(value);
	}
}

int Stack::pop()
{
	if (isEmpty()) {
		return NONE;
	}
	Node* current = m_head;
	m_head = m_head->getNext();
	int value = current->getValue();
	delete current;
	return value;
}

