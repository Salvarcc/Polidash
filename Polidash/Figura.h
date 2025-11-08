#pragma once

using namespace System;
using namespace System::Drawing;
using namespace std;


class Figura
{
public:
	Figura();
	Figura(int x, int y, int velocidad, int lados, int numeroCentral, int color);


	~Figura();

	virtual void dibujar(Graphics ^canvas) = 0;
	virtual void mover() = 0;
	virtual void borrar(Graphics^ canvas) = 0;


	void setX(int x);
	void setY(int y);

	int getLados();
	int getX();		
	int getY();



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

 Figura::Figura(int x, int y, int velocidad, int lados, int numeroCentral, int color)
{
	 this->x = x;
	 this->y = y;
	 this->lados = lados;
	 this->numeroCentral = numeroCentral;
	 this->velocidad = velocidad;
	 this->color = color;




}

Figura::~Figura()
{
}

 void Figura::setX(int x)
{
	 this->x = x;


}

  void Figura::setY(int y)
 {
	  this->y = y;

 }

int Figura::getLados()
{
	return lados;
}

 int Figura::getX()
{
	return x;
}

  int Figura::getY()
 {
	 return y;
 }
