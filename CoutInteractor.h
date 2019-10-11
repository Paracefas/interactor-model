#pragma once
#include "IInteractor.h"
#include "Defines.h"

class Adder;

class CoutInteractor implements IInteractor
{
	Adder* m_model;
	int m_value;
public:
	void Getln();
	void Println();
	void Interact(void*);
};

IInteractor* CreateCoutInteractor();