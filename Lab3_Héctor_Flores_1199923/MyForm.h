#pragma once
#include "Triangulo.h"
#include "Cuadrilatero.h"
#include "Pentagono.h"
#include "Hexagono.h"
#include "Heptagono.h"
#include "Octagono.h"
#include "Eneagono.h"
#include "Decagono.h"

namespace Lab3HéctorFlores1199923 {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ lado1;
	private: System::Windows::Forms::Label^ lado2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ txtPerimetro;
	private: System::Windows::Forms::ComboBox^ comboB1;



	private: System::Windows::Forms::Label^ txtArea;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->lado1 = (gcnew System::Windows::Forms::Label());
			this->lado2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPerimetro = (gcnew System::Windows::Forms::Label());
			this->comboB1 = (gcnew System::Windows::Forms::ComboBox());
			this->txtArea = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(140, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(303, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"LABORATORIO 3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(85, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(236, 234);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 28);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Calcular";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(236, 122);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(236, 178);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 4;
			// 
			// lado1
			// 
			this->lado1->AutoSize = true;
			this->lado1->Location = System::Drawing::Point(160, 128);
			this->lado1->Name = L"lado1";
			this->lado1->Size = System::Drawing::Size(41, 16);
			this->lado1->TabIndex = 5;
			this->lado1->Text = L"Lado ";
			this->lado1->Click += gcnew System::EventHandler(this, &MyForm::lado1_Click);
			// 
			// lado2
			// 
			this->lado2->AutoSize = true;
			this->lado2->Location = System::Drawing::Point(50, 184);
			this->lado2->Name = L"lado2";
			this->lado2->Size = System::Drawing::Size(171, 16);
			this->lado2->TabIndex = 6;
			this->lado2->Text = L"Altura o Apotema (si aplica)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Rockwell", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(160, 289);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Perímetro:";
			// 
			// txtPerimetro
			// 
			this->txtPerimetro->AutoSize = true;
			this->txtPerimetro->Location = System::Drawing::Point(249, 289);
			this->txtPerimetro->Name = L"txtPerimetro";
			this->txtPerimetro->Size = System::Drawing::Size(77, 16);
			this->txtPerimetro->TabIndex = 8;
			this->txtPerimetro->Text = L"__________";
			// 
			// comboB1
			// 
			this->comboB1->FormattingEnabled = true;
			this->comboB1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Triangulo", L"Cuadrilatero", L"Pentagono", L"Hexagono",
					L"Heptagono", L"Octagono", L"Eneagono", L"Decagono"
			});
			this->comboB1->Location = System::Drawing::Point(402, 163);
			this->comboB1->Name = L"comboB1";
			this->comboB1->Size = System::Drawing::Size(121, 24);
			this->comboB1->TabIndex = 9;
			// 
			// txtArea
			// 
			this->txtArea->AutoSize = true;
			this->txtArea->Location = System::Drawing::Point(249, 340);
			this->txtArea->Name = L"txtArea";
			this->txtArea->Size = System::Drawing::Size(77, 16);
			this->txtArea->TabIndex = 10;
			this->txtArea->Text = L"__________";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(71, 72);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(443, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Calculadora de áreas y perímetros de polígonos regulares";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Rockwell", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(198, 339);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Área:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(368, 127);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(188, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Elija el polígono regular";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(398, 385);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(161, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Por: Héctor Flores";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FloralWhite;
			this->ClientSize = System::Drawing::Size(598, 414);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtArea);
			this->Controls->Add(this->comboB1);
			this->Controls->Add(this->txtPerimetro);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lado2);
			this->Controls->Add(this->lado1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		Triangulo Calculo;
		Cuadrilatero Cuadrado;
		Pentagono Penta;
		Hexagono Hexa;
		Heptagono Hepta;
		Octagono Octa;
		Eneagono Enea;
		Decagono Deca;

		double lado;
		double lado2;

		try {
		 lado = System::Convert::ToDouble(textBox1->Text);
		}
		catch (System::FormatException^) {

		}
		catch (System::OverflowException^) {

		}
		catch (System::Exception^) {

		}

		try {
			 lado2 = System::Convert::ToDouble(textBox2->Text);
		}
		catch (System::FormatException^) {
	
		}
		catch (System::OverflowException^) {
			
		}
		catch (System::Exception^) {
			
		}



		if(lado >= 0 && lado2 >= 0)
		{
		if(comboB1->Text == "Triangulo")
		{
			Calculo.setLado(lado);
			Calculo.setAltura(lado2);

			txtPerimetro->Text = Convert::ToString(Calculo.Perimetro(Calculo.getLado()));

			double area = (Calculo.Area(Calculo.getLado(), Calculo.getAltura()));

			String^ areaString = area.ToString("F2");

			txtArea->Text = areaString;
		
		}else if(comboB1->Text == "Cuadrilatero")
		{
			
			if(textBox2->Text != "")
			{
				MessageBox::Show("Deje vacio la casilla de la altura/apotema.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			
			}else
			{
				Cuadrado.setLadoC(lado);

				txtPerimetro->Text = Convert::ToString(Cuadrado.PerimetroC(Cuadrado.getLadoC()));

				double area = (Cuadrado.AreaC(Cuadrado.getLadoC()));

				String^ areaString = area.ToString("F2");

				txtArea->Text = areaString;
			
			}
		}else if(comboB1->Text == "Pentagono")
		{
			Penta.setLado(lado);
			Penta.setApo(lado2);
			
			txtPerimetro->Text = Convert::ToString(Penta.PerimetroP(Penta.getLado()));

			double area = (Penta.AreaP(Penta.getLado(),Penta.getApo()));

			String^ areaString = area.ToString("F2");

			txtArea->Text = areaString;

		}else if(comboB1->Text == "Hexagono")
		{
			Hexa.setLado(lado);
			Hexa.setApo(lado2);

			txtPerimetro->Text = Convert::ToString(Hexa.Perimetro(Hexa.getLado()));

			double area = (Hexa.Area(Hexa.getLado(), Hexa.getApo()));

			String^ areaString = area.ToString("F2");

			txtArea->Text = areaString;
		}else if (comboB1->Text == "Heptagono")
		{
			Hepta.setLado(lado);
			Hepta.setApo(lado2);

			txtPerimetro->Text = Convert::ToString(Hepta.Perimetro(Hepta.getLado()));

			double area = (Hepta.Area(Hepta.getLado(), Hepta.getApo()));

			String^ areaString = area.ToString("F2");

			txtArea->Text = areaString;
		}
		else if (comboB1->Text == "Octagono")
		{
			Octa.setLado(lado);
			Octa.setApo(lado2);

			txtPerimetro->Text = Convert::ToString(Octa.Perimetro(Octa.getLado()));

			double area = (Octa.Area(Octa.getLado(), Octa.getApo()));

			String^ areaString = area.ToString("F2");

			txtArea->Text = areaString;
		}
		else if (comboB1->Text == "Eneagono")
		{
			Enea.setLado(lado);
			Enea.setApo(lado2);

			txtPerimetro->Text = Convert::ToString(Enea.Perimetro(Enea.getLado()));

			double area = (Enea.Area(Enea.getLado(), Enea.getApo()));

			String^ areaString = area.ToString("F2");

			txtArea->Text = areaString;
		}
		else if (comboB1->Text == "Decagono")
		{
			Deca.setLado(lado);
			Deca.setApo(lado2);

			txtPerimetro->Text = Convert::ToString(Deca.Perimetro(Deca.getLado()));

			double area = (Deca.Area(Deca.getLado(), Deca.getApo()));

			String^ areaString = area.ToString("F2");

			txtArea->Text = areaString;
		}
		}
		else 
		{
		
			MessageBox::Show("No es posible utilizar valores negativos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	

		}
	private: System::Void lado1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
