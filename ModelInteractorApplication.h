#pragma once
#include "Defines.h"
#include <Windows.h>
#include "IInteractor.h"

class Adder;

class ModelInteractorApplication
{
public:
	ModelInteractorApplication(Adder*, IInteractor*);
	~ModelInteractorApplication();
	void Run();
};

enum INTERACTOR_VARIANT 
{
	CONSOLE_APPLICATION
};

struct InteractorAction
{
	INTERACTOR_VARIANT id;
	IInteractor* (*create)();
};
extern InteractorAction actions[];

IInteractor* CreateInstance(INTERACTOR_VARIANT);