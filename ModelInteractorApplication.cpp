#include "ModelInteractorApplication.h"
#include "CoutInteractor.h"

ModelInteractorApplication::ModelInteractorApplication(Adder* model, IInteractor* interactor)
{
	interactor->Interact(model);
}

ModelInteractorApplication::~ModelInteractorApplication()
{

}

void ModelInteractorApplication::Run()
{
}

IInteractor* CreateInstance(INTERACTOR_VARIANT id)
{	
	return actions[id].create();
}

InteractorAction actions[] =
{
	{ CONSOLE_APPLICATION, CreateCoutInteractor }
};