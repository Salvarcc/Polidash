#pragma once
#include "Figura.h"


class Jugador : public Figura

{
public:
	Jugador();
	~Jugador();

	void dibujar(Graphics^ canvas) override;
	void borrar(Graphics^ canvas) override;
	void mover() override;

	void moverWASD(char direccion);
	int getiLados() {
		return lados;
	}
	

private:
	int lados;

};

Jugador::Jugador() : Figura(10, 420, 100, 100, 3, 0, rand() % (3 - 1 + 1) + 1)
{
	lados = 3;
}

Jugador::~Jugador()
{
}

void Jugador::dibujar(Graphics^ canvas)
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
	if (lados == 5) {
		Point p1 = Point(x+ancho/2, y);
		Point p2 = Point(x + ancho, y+alto/2);
		Point p3 = Point(x + ancho/5*4, y + alto);
		Point p4 = Point(x+ancho/5, y + alto);
		Point p5 = Point(x, y + alto/2);
		array<Point>^ points = { p1,p2,p3,p4,p5 };
		canvas->FillPolygon(lapiz, points);
	}
	if (lados == 6) {
		Point p1 = Point(x + ancho/3, y);
		Point p2 = Point(x + ancho/3*2, y);
		Point p3 = Point(x+ancho , y + alto/2);
		Point p4 = Point(x + ancho / 3*2, y + alto);
		Point p5 = Point(x+ancho/3, y + alto);
		Point p6 = Point(x, y + alto / 2);
		array<Point>^ points = { p1,p2,p3,p4,p5,p6 };
		canvas->FillPolygon(lapiz, points);
	}
	if (lados == 7) {
		Point p1 = Point(x + ancho/2, y);
		Point p2 = Point(x + ancho / 8*7, y+alto/7);
		Point p3 = Point(x+ancho, y + alto/7*4);
		Point p4 = Point(x + ancho / 3 * 2, y + alto);
		Point p5 = Point(x + ancho / 3, y + alto);
		Point p6 = Point(x, y + alto / 7*4);
		Point p7 = Point(x+ancho/8, y + alto / 7);
		array<Point>^ points = { p1,p2,p3,p4,p5,p6,p7 };
		canvas->FillPolygon(lapiz, points);
	}
	if (lados == 8) {
		Point p1 = Point(x + ancho / 3, y);
		Point p2 = Point(x + ancho / 3*2, y);
		Point p3 = Point(x + ancho, y + alto / 3);
		Point p4 = Point(x + ancho, y + alto/3*2);
		Point p5 = Point(x + ancho /3*2, y + alto);
		Point p6 = Point(x+ancho/3, y + alto);
		Point p7 = Point(x, y + alto / 3*2);
		Point p8 = Point(x, y + alto /3);
		array<Point>^ points = { p1,p2,p3,p4,p5,p6,p7,p8 };
		canvas->FillPolygon(lapiz, points);
	}
	if (lados == 9) {
		Point p1 = Point(x, y + alto);
		Point p2 = Point(x + ancho / 2, y);
		Point p3 = Point(x + ancho, y + alto);
		array<Point>^ points = { p1,p2,p3 };
		canvas->FillPolygon(lapiz, points);
	}
	if (lados == 10) {
		Point p1 = Point(x, y + alto);
		Point p2 = Point(x + ancho / 2, y);
		Point p3 = Point(x + ancho, y + alto);
		array<Point>^ points = { p1,p2,p3 };
		canvas->FillPolygon(lapiz, points);
	}
	


	canvas->DrawString(numeroCentral.ToString(), fuente, Brushes::Black, x + 45, y + 50);

}

void Jugador::borrar(Graphics^ canvas)
{

	SolidBrush^ lapiz = gcnew SolidBrush(Color::WhiteSmoke);

	
		Point p1 = Point(x, y);
		Point p2 = Point(x + ancho, y);
		Point p3 = Point(x + ancho, y + alto);
		Point p4 = Point(x, y + alto);
		array<Point>^ points = { p1,p2,p3,p4 };
		canvas->FillPolygon(lapiz, points);
	

}

void Jugador::mover()
{
}

void Jugador::moverWASD(char direccion)
{
	if (tramo == 1) {
		switch (direccion) {

		case 75: x -= velocidad; break;
		case 77: x += velocidad; break;

		}
		if (x > 850)tramo++;
	}
	if (tramo == 2) {
		cambiodevelo();
		switch (direccion) {

		case 72: y -= velocidad; break;
		case 80: y += velocidad; break;

		}
		if (y < 10)tramo++;
		
	}
	if (tramo == 3) {
		cambiodevelo();
		switch (direccion) {

		case 75: x -= velocidad; break;
		case 77: x += velocidad; break;

		}
		if (x <10)tramo++;
	}
	/*
	switch (direccion) {


	case 72: y -= velocidad; break;
	case 80: y += velocidad; break;
	case 75: x -= velocidad; break;
	case 77: x += velocidad; break;

	}*/
	

}


