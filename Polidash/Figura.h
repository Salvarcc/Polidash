#pragma once

using namespace System;
using namespace System::Drawing;
using namespace std;


class Figura
{
public:
	Figura();
	~Figura();

	virtual void dibujar(Graphics ^canvas) = 0;
	virtual void mover() = 0;




private:

	int x;
	int y;
	int velocidad;
	int lados;
	int numeroCentral;
	int color;




};

Figura::Figura()
{
}

Figura::~Figura()
{
}