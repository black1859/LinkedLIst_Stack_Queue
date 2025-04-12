#include "circular_queue.h"

CircularQueue::CircularQueue(int length) : m_length(length) 
{
	m_data = new int[m_length];
	m_front = 0;
	m_rear = 0;

	for (int i = 0; i < m_length; i++) {
		m_data[i] = NONE;
	}
}

CircularQueue::~CircularQueue()
{
	delete m_data;
}

bool CircularQueue::isEmpty()
{
	if (m_front == m_rear && m_data[m_front] == NONE) { return true; }
	return false;
}

bool CircularQueue::isFool()
{
	if (m_front == m_rear && m_data[m_front] != NONE) { return true; }
	return false;
}

void CircularQueue::enqueue(int value)
{
	if (isFool()) { return; }
	m_data[m_rear] = value;
	m_rear = (m_rear + 1) % m_length;
}

int CircularQueue::dequeue()
{
	if (isEmpty()) { return NONE; }
	int value = m_data[m_front];
	m_data[m_front] = NONE;
	m_front = (m_front + 1) % m_length;

	return value;
}