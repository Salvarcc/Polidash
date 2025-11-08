#pragma once
#include "Minimapa.h"
#include "Jugador.h"

namespace Polidash {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			rectangulo1 = new Minimapa;
			rectangulo2 = new Minimapa;
			rectangulo3 = new Minimapa;
			jugador = new Jugador;

			canvas = this->CreateGraphics();


			graficos = panel1->CreateGraphics();



		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:

		Minimapa* rectangulo1;
		Minimapa* rectangulo2;
		Minimapa* rectangulo3;
		Jugador* jugador;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ LblLado;
	private: System::Windows::Forms::Label^ LblNumero;
	private: System::Windows::Forms::Label^ LblAngulos;
	private: System::Windows::Forms::Label^ LblVelocidad;
	private: System::Windows::Forms::Timer^ timer2;





		   Graphics^ canvas;
		   Graphics^ graficos;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->LblLado = (gcnew System::Windows::Forms::Label());
			   this->LblNumero = (gcnew System::Windows::Forms::Label());
			   this->LblAngulos = (gcnew System::Windows::Forms::Label());
			   this->LblVelocidad = (gcnew System::Windows::Forms::Label());
			   this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			   this->SuspendLayout();
			   // 
			   // panel1
			   // 
			   this->panel1->Location = System::Drawing::Point(20, 12);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(980, 537);
			   this->panel1->TabIndex = 0;
			   // 
			   // timer1
			   // 
			   this->timer1->Enabled = true;
			   this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(1037, 443);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(46, 13);
			   this->label1->TabIndex = 1;
			   this->label1->Text = L"Tramo 1";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(1308, 114);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(46, 13);
			   this->label2->TabIndex = 2;
			   this->label2->Text = L"Tramo 2";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(1037, 23);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(46, 13);
			   this->label3->TabIndex = 3;
			   this->label3->Text = L"Tramo 3";
			   // 
			   // LblLado
			   // 
			   this->LblLado->AutoSize = true;
			   this->LblLado->Location = System::Drawing::Point(1037, 173);
			   this->LblLado->Name = L"LblLado";
			   this->LblLado->Size = System::Drawing::Size(39, 13);
			   this->LblLado->TabIndex = 4;
			   this->LblLado->Text = L"Lados:";
			   // 
			   // LblNumero
			   // 
			   this->LblNumero->AutoSize = true;
			   this->LblNumero->Location = System::Drawing::Point(1037, 199);
			   this->LblNumero->Name = L"LblNumero";
			   this->LblNumero->Size = System::Drawing::Size(102, 13);
			   this->LblNumero->TabIndex = 5;
			   this->LblNumero->Text = L"Numero acumulado:";
			   // 
			   // LblAngulos
			   // 
			   this->LblAngulos->AutoSize = true;
			   this->LblAngulos->Location = System::Drawing::Point(1037, 226);
			   this->LblAngulos->Name = L"LblAngulos";
			   this->LblAngulos->Size = System::Drawing::Size(93, 13);
			   this->LblAngulos->TabIndex = 6;
			   this->LblAngulos->Text = L"Suma de Angulos:";
			   // 
			   // LblVelocidad
			   // 
			   this->LblVelocidad->AutoSize = true;
			   this->LblVelocidad->Location = System::Drawing::Point(1037, 252);
			   this->LblVelocidad->Name = L"LblVelocidad";
			   this->LblVelocidad->Size = System::Drawing::Size(103, 13);
			   this->LblVelocidad->TabIndex = 7;
			   this->LblVelocidad->Text = L"Velocidad del tramo:";
			   // 
			   // timer2
			   // 
			   this->timer2->Enabled = true;
			   this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1384, 561);
			   this->Controls->Add(this->LblVelocidad);
			   this->Controls->Add(this->LblAngulos);
			   this->Controls->Add(this->LblNumero);
			   this->Controls->Add(this->LblLado);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->panel1);
			   this->Name = L"MyForm";
			   this->Text = L"MyForm";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			   this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		rectangulo1->dibujartramo1(canvas);
		rectangulo2->dibujartramo2(canvas);
		rectangulo2->dibujartramo3(canvas);

		LblLado->Text = "Lados: " + jugador->getLados();
		LblNumero->Text = "Numero central: " + jugador->getNumero();
		LblAngulos->Text = "Suma de angulos: " + (jugador->getLados() - 2) * 180;
		LblVelocidad->Text = "Velocidad del tramo: " + jugador->getVelocidad();

	}

	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {

		jugador->dibujar(graficos);



	}
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {



		if (e->KeyCode == Keys::Up) {
			jugador->borrar(graficos);
			jugador->moverWASD(72);
			jugador->dibujar(graficos);

		}
		else if (e->KeyCode == Keys::Down) {
			jugador->borrar(graficos);
			jugador->moverWASD(80);
			jugador->dibujar(graficos);

		}
		else if (e->KeyCode == Keys::Left) {
			jugador->borrar(graficos);
			jugador->moverWASD(75);
			jugador->dibujar(graficos);

		}
		else if (e->KeyCode == Keys::Right) {
			jugador->borrar(graficos);
			jugador->moverWASD(77);
			jugador->dibujar(graficos);

		}





	}
	private: System::Void MyForm_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	}
	};
}
