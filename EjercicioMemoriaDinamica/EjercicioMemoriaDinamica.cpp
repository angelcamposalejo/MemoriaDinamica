#include "stdafx.h"  //________________________________________ EjercicioMemoriaDinamica.cpp
#include "EjercicioMemoriaDinamica.h"
#include "MyArray.h"
int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjercicioMemoriaDinamica app;
	return app.BeginDialog(IDI_EjercicioMemoriaDinamica, hInstance);
}

void EjercicioMemoriaDinamica::Window_Open(Win::Event& e)
{
	MyArray x(3), y(3);
	wstring texto;
	for (int i = 0; i < 3; i++)
	{
		x.datos[i] = 2.0*i + 1.0;
		y.datos[i] = 3.0*i + 2.0;
		Sys::Format(texto, L"%g, %g\r\n", x.datos[i],y.datos[i]);
		tbxSalida.Text += texto;
	}
}

