#pragma once
#include "Header1.h"
using namespace System;

class PowerUp : Figura
{
public:
	PowerUp();
	~PowerUp();

private:
	void dibujar(Graphics^ canvas) override;
	void borrar(Graphics^ canvas) override;
	void mover() override;


};

PowerUp::PowerUp() : Figura(900, rand() % (500 - 50 + 1) + 500, 100, 100, rand() % (4 - 1 + 1) + 4, rand() % (10 - 3 + 1) + 10, color)
{
	this->color = color;


}

PowerUp::~PowerUp()
{
}

void PowerUp::dibujar(Graphics^ canvas)
{
	Font^ fuente = gcnew Font("Arial", 12);
	Pen^ lapiz = gcnew Pen(Color::WhiteSmoke);

	switch (lados) {

	case 1:



		canvas->DrawEllipse(lapiz, x, y, ancho, alto);
		canvas->DrawString(numeroCentral.ToString(), fuente, Brushes::Black, x, y);

		break;


	case 2:


		Point p1 = Point(x, y + alto);
		Point p2 = Point(x + ancho / 2, y);
		Point p3 = Point(x + ancho, y + alto);

		array<Point>^ points = { p1,p2,p3 };

		canvas->DrawPolygon(lapiz, points);
		canvas->DrawString(numeroCentral.ToString(), fuente, Brushes::Black, x, y);

		break;


	case 3:

		canvas->DrawRectangle(lapiz, x, y, ancho, alto);
		canvas->DrawString(numeroCentral.ToString(), fuente, Brushes::Black, x, y);

	}

}

void PowerUp::borrar(Graphics^ canvas)
{
	Font^ fuente = gcnew Font("Arial", 12);
	Pen^ lapiz = gcnew Pen(Color::WhiteSmoke);

	switch (lados) {

	case 1:



		canvas->DrawEllipse(lapiz, x, y, ancho, alto);
		canvas->DrawString(numeroCentral.ToString(), fuente, Brushes::Black, x, y);

		break;


	case 2:


		Point p1 = Point(x, y + alto);
		Point p2 = Point(x + ancho / 2, y);
		Point p3 = Point(x + ancho, y + alto);

		array<Point>^ points = { p1,p2,p3 };

		canvas->DrawPolygon(lapiz, points);
		canvas->DrawString(numeroCentral.ToString(), fuente, Brushes::Black, x, y);

		break;


	case 3:

		canvas->DrawRectangle(lapiz, x, y, ancho, alto);
		canvas->DrawString(numeroCentral.ToString(), fuente, Brushes::Black, x, y);

	}

}

void PowerUp::mover()

{
	int xobjetivo = 50;



	if (x > 50)
		x += velocidad;




}
