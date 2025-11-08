#pragma once
#include "Figura.h"


class Power : public Figura

{
public:
	Power();
	~Power();

	void dibujar(Graphics^ canvas) override;
	void borrar(Graphics^ canvas) override;
	void mover() override;

	


private:
	

};

Power::Power() : Figura(0, 0, 50, 50, rand() % (3 - 1 + 1) + 1, 0, rand() % (3 - 1 + 1) + 1)
{
	Random f;
	numeroCentral = f.Next(1, 6);
}

Power::~Power()
{
}

void Power::dibujar(Graphics^ canvas)
{
	SolidBrush^ lapiz;
	Font^ fuente = gcnew Font("Arial", 12);

	if (color == 1) {

		lapiz = gcnew SolidBrush(Color::Yellow);


	}
	if (color == 2) {

		lapiz = gcnew SolidBrush(Color::Red);

	}
	if (color == 3) {

		lapiz = gcnew SolidBrush(Color::Blue);


	}

	if (lados == 3) {
		Point p1 = Point(x, y + alto);
		Point p2 = Point(x + ancho / 2, y);
		Point p3 = Point(x + ancho, y + alto);
		array<Point>^ points = { p1,p2,p3 };
		canvas->FillPolygon(lapiz, points);
	}
	if (lados == 4) {
		Point p1 = Point(x, y);
		Point p2 = Point(x + ancho, y);
		Point p3 = Point(x + ancho, y + alto);
		Point p4 = Point(x, y + alto);
		array<Point>^ points = { p1,p2,p3,p4 };
		canvas->FillPolygon(lapiz, points);
	}
	


	canvas->DrawString(numeroCentral.ToString(), fuente, Brushes::Black, x + 45, y + 50);

}

void Power::borrar(Graphics^ canvas)
{

	SolidBrush^ lapiz = gcnew SolidBrush(Color::WhiteSmoke);


	Point p1 = Point(x, y);
	Point p2 = Point(x + ancho, y);
	Point p3 = Point(x + ancho, y + alto);
	Point p4 = Point(x, y + alto);
	array<Point>^ points = { p1,p2,p3,p4 };
	canvas->FillPolygon(lapiz, points);


}

void Power::mover()
{
	if (tramo == 1) {
		y++;
	}
	if (tramo == 2) {
		x++;
	}
	if (tramo == 3) {
		y--;
	}
}




