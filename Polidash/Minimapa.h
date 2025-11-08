#pragma once
#include "Jugador.h"

using namespace System::Drawing;

class Minimapa
{
public:
	Minimapa();
	~Minimapa();

	void dibujartramo1(Graphics^ canvas);
	void dibujartramo2(Graphics^ canvas);
	void dibujartramo3(Graphics^ canvas);

	void dibujarcirculo(Graphics^ graficos);
	void borrar(Graphics^ graficos);
	void mover(int circulo, int direccionCirculo);

private:

	int x;
	int y;
	int ancho;
	int alto;
	int dx;


};

Minimapa::Minimapa()
{
	x = 1000;
	y = 350;
	ancho = 350;
	alto = 150;
	dx = 1;



}

Minimapa::~Minimapa()
{
}

void Minimapa::dibujartramo1(Graphics^ canvas)
{
	Pen^ lapiz = gcnew Pen(Color::Red);

	canvas->DrawRectangle(lapiz, x, y + 100, ancho, alto / 2);


}

void Minimapa::dibujartramo2(Graphics^ canvas)
{

	Pen^ lapiz = gcnew Pen(Color::Red);

	canvas->DrawRectangle(lapiz, x + 262, y - 230, ancho / 4, alto * 2.1);
}
void Minimapa::dibujartramo3(Graphics^ canvas)
{
	Pen^ lapiz = gcnew Pen(Color::Red);

	canvas->DrawRectangle(lapiz, x, y - 320, ancho, alto / 2);


}


void Minimapa::dibujarcirculo(Graphics^ graficos)
{

	Pen^ lapiz = gcnew Pen(Color::Blue);
	graficos->DrawEllipse(lapiz, x + 200, y - 300, ancho / 4, alto / 10);

}

void Minimapa::borrar(Graphics^ graficos)
{



	Pen^ lapiz = gcnew Pen(Color::WhiteSmoke);
	graficos->DrawEllipse(lapiz, x, y + 125, ancho / 10, alto / 4);
}

void Minimapa::mover(int circulo, int direccionCirculo)
{
	// moverse de izq a der o der a izq :p

	if (direccionCirculo == 1)
		x = circulo;

	// moverse de arriba a abajo


	if (direccionCirculo == 2) {
		y = circulo;

	}


}
