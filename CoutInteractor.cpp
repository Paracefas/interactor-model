#include "CoutInteractor.h"
#include "Adder.h"
#include <iostream>

void CoutInteractor::Getln()
{
	std::cin >> m_value;
}

void CoutInteractor::Println()
{
	std::cout << m_model->GetCount();
}

void CoutInteractor::Interact(void* model)
{
	m_model = (Adder*)model;
	Getln();
	m_model->Add(m_value);
	while (m_value)
	{
		Getln();
		m_model->Add(m_value);
	}
	Println();
}

IInteractor* CreateCoutInteractor()
{
	return new CoutInteractor();
}
