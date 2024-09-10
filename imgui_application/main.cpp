#include <iostream>

#include <windows.h>

#include "window.h"


int main()
{
	while (!GetAsyncKeyState(VK_DELETE)) 
	{
		window::render();
	}

	return 0;
}