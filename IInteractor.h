#pragma once
#include "Defines.h"

_interface IInteractor
{
	virtual void Getln() = 0;
	virtual void Println() = 0;
	virtual void Interact(void*) = 0;
};