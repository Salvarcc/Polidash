#pragma once
using namespace System;

#include "iostream"

class Figura
{
public:
	Figura();
	~Figura();

	virtual void dibujar() = 0;
	



private:

	int x;
	int y;
	int velocidad;
	int lados;
	int numeroCentral;
	string color;




};

Figura::Figura()
{
}

Figura::~Figura()
{
}