#include <iostream>
#include "node.h"
#include "linked_list.h"
#include "queue.h"
#include "stack.h"

int main(void) {
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


	std::cout << "\nqueue example\n[1,2,3] + 4\n";
	Queue q1;
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	std::cout << q1.dequeue() << "\n";
	std::cout << q1.dequeue() << "\n";
	q1.enqueue(4);
	std::cout << q1.dequeue() << "\n";
	std::cout << q1.dequeue() << "\n";

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
}