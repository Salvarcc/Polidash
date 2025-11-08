#pragma once
#include "Figura.h"
#include "conio.h"


class Jugador : public Figura

{
public:
	Jugador();
	~Jugador();

	void dibujar(Graphics^ canvas) override;
	void borrar(Graphics^ canvas) override;
	void mover() override;

	void moverWASD(char direccion);

	
private:

	

};

Jugador::Jugador() : Figura (100,300,100,100, 3, 0, rand() % (3 - 1 + 1)+1)
{


}

Jugador::~Jugador()
{
}

void Jugador::dibujar(Graphics^ canvas)
{
	SolidBrush^ lapiz;

	if (color == 1) {

		lapiz = gcnew SolidBrush(Color::Yellow);

	}
	if (color == 2) {

		lapiz = gcnew SolidBrush(Color::Red);

	}
	if (color == 3) {

		lapiz = gcnew SolidBrush(Color::Blue);

	}


	Point p1 = Point(x, y + alto);
	Point p2 = Point(x + ancho / 2, y);
	Point p3 = Point(x + ancho, y + alto);

	array<Point>^ points = { p1,p2,p3 };

	canvas->FillPolygon(lapiz, points);

}

void Jugador::borrar(Graphics^ canvas)
{

	SolidBrush^ lapiz = gcnew SolidBrush(Color::WhiteSmoke);

	Point p1 = Point(x, y + alto);
	Point p2 = Point(x + ancho / 2, y);
	Point p3 = Point(x + ancho, y + alto);

	array<Point>^ points = { p1,p2,p3 };

	canvas->FillPolygon(lapiz, points);

}

void Jugador::mover()
{
}

void Jugador::moverWASD(char direccion)
{
	switch (direccion) {


	case 72: y -= velocidad; break;
	case 80: y += velocidad; break;
	case 75: x -= velocidad; break;
	case 77: x += velocidad; break;

	}

}



