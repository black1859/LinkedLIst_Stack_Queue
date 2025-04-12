#pragma once

#define NONE -123456

class CircularQueue
{
public:
	CircularQueue(int length);
	~CircularQueue();

	bool isEmpty();
	bool isFool();
	
	void enqueue(int value);
	int dequeue();

private:
	int* m_data;
	int m_front, m_rear;
	int m_length;
};

/*
	CircularQueue cq1(4);

	cq1.enqueue(65);
	cq1.enqueue(66);
	cq1.enqueue(67);

	char C1 = cq1.dequeue();
	char C2 = cq1.dequeue();
	char C3 = cq1.dequeue();
	
	cq1.enqueue(68);
	char C4 = cq1.dequeue();

	std::cout << C1 << C2 << C3 << C4;
*/