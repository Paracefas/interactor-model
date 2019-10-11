#include "Adder.h"
#include "ModelInteractorApplication.h"

int main(int argc, char const** argv)
{
	try
	{
		ModelInteractorApplication* app
			= new ModelInteractorApplication(new Adder(), CreateInstance(CONSOLE_APPLICATION));

		app->Run();

		delete app;					
	}
	catch (...)
	{
		throw;
	}
}