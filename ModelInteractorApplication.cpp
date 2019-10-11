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
#ifdef USE_DLL
	HINSTANCE dll = LoadLibrary(dlls[id].file_name);
	if (!dll) throw "Dll cannot be found";

	typedef void* (*instance)(Manager&);
	instance CreateObject = (instance)GetProcAddress(dll, "CreateInstance");
	if (!CreateObject) throw "Dll CreateInstance cannot be found";
#else
	return actions[id].create();
#endif

	return NULL;
}

#ifdef USE_DLL
	InteractorDLL dlls[] =
	{
		{ CONSOLE_APPLICATION,  "CoutInteractor.dll" }
	};
#else
	InteractorAction actions[] =
	{
		{ CONSOLE_APPLICATION, CreateCoutInteractor }
	};
#endif