#include "linked_list.h"
#include <iostream>

LinkedList::LinkedList(Node* head) : m_head(head)
{
}

LinkedList::LinkedList(int value)
{
	m_head = new Node(value);
}

LinkedList::LinkedList()
{
	m_head = nullptr;
}

void LinkedList::addItem(int value)
{
	if (isEmpty()) { //head exist
		m_head = new Node(value);
		return;
	}
	Node* current = m_head;
	while (current->getNext() != nullptr)
	{
		current = current->getNext();
	}
	current->setNext(new Node(value));

}

void LinkedList::delItem(int value)
{
	if (m_head->getValue() == value) {
		Node* temp = m_head;
		m_head = m_head->getNext();
		delete temp;
		return;
	}

	Node* before = m_head;
	Node* current = before->getNext(); //target is current
	while (current)
	{
		if (current->getValue() == value) {
			before->setNext(current->getNext());
			delete current;
			return;
		}
		before = current;
		current = before->getNext();
	}
}

Node* LinkedList::searchNode(int value) const
{
	Node* current = m_head;
	
	while (current) {
		if (current->getValue() == value) { return current; }
		current = current->getNext();
	}
	return nullptr;
}

bool LinkedList::isEmpty()
{
	return m_head == nullptr;
}

void LinkedList::printAll()
{
	if (isEmpty()) {
		std::cout << "empty\n";
		return;
	}
	Node* current = m_head;
	std::cout << current->getValue() << " ";

	while (current->getNext())
	{
		current = current->getNext();
		std::cout << current->getValue() << " ";
	}
	std::cout << "\n";
}

LinkedList::~LinkedList()
{
	Node* current = m_head;
	while (current) {
		Node* next = current->getNext();
		delete current;
		current = next;
	}
}