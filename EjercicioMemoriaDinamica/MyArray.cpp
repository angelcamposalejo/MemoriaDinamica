#include "stdafx.h"
#include "MyArray.h"


MyArray::MyArray(void)
{
	datos = NULL;
	contador = 0;
}
MyArray::MyArray(int contador)
{
	datos = new double[contador];
	if (datos != NULL)
	{
		this->contador = contador;
	}
	else
	{
		this->contador = 0;
	}
}

MyArray::~MyArray()
{
	if (datos != NULL)delete[]datos;
}
