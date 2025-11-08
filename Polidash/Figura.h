	#pragma once
	#include "conio.h"
#include <cstdlib> 


	using namespace System;
	using namespace System::Drawing;
	using namespace std;


	class Figura
	{
	public:
		Figura();
		Figura(int x, int y,int ancho,int alto, int lados, int numeroCentral, int color);


		~Figura();

		virtual void dibujar(Graphics ^canvas) = 0;
		virtual void mover() = 0;
		virtual void borrar(Graphics^ canvas) = 0;


		void setX(int x);
		void setY(int y);

		int getLados();
		int getX();		
		int getY();
		int getVelocidad();
		int getNumero();
		int getancho();
		int getalto();
		int gettramo() {
			return tramo;
		}

		


	protected:

		int x;
		int y;
		int velocidad;
		int lados;
		int numeroCentral;
		int color;
		int ancho;
		int alto;
		int tramo;
		int vuelta;

		void cambiodevelo();

	};

	Figura::Figura()
	{
	}

	 Figura::Figura(int x, int y,int ancho,int alto , int lados, int numeroCentral, int color)
	{
		 this->x = x;
		 this->y = y;
		 this->lados = lados;
		 this->numeroCentral = numeroCentral;
		 velocidad= rand() % (10 - 5 + 1) + 5;
		 this->color = color;
		 this->ancho = ancho;
		 this->alto = alto;
		 vuelta = 2;
		 tramo = 1;



	}

	Figura::~Figura()
	{
	}

	void Figura::cambiodevelo() {
		Random f;
		if (tramo == vuelta) {
			velocidad = f.Next(1, 11);
			vuelta++;
		}
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

	   int Figura::getNumero()
	  {
		  return numeroCentral;
	  }
	    int Figura::getancho()
	   {
		   return ancho;
	   }
	   int Figura::getVelocidad()
	   {
		   return velocidad;
	   }

	   int Figura::getalto()
	   {
		   return alto;
	   }