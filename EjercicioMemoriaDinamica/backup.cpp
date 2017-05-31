#include "stdafx.h"  //________________________________________ EjercicioMemoriaDinamica.cpp
#include "EjercicioMemoriaDinamica.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	EjercicioMemoriaDinamica app;
	return app.BeginDialog(IDI_EjercicioMemoriaDinamica, hInstance);
}

void EjercicioMemoriaDinamica::Window_Open(Win::Event& e)
{
}

