#include "Adder.h"

Adder::Adder()
{
	m_count = 0;
}

int Adder::Add(int v)
{
	m_count += v;
	return m_count;
}

int Adder::GetCount()
{
	return m_count;
}
