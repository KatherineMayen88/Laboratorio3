#pragma once
#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

namespace Lab3KatherineMayen1129222 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Ejercicio3
	/// </summary>
	public ref class Ejercicio3 : public System::Windows::Forms::Form
	{
	public:
		Ejercicio3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Ejercicio3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button_calcular;
	private: System::Windows::Forms::TextBox^ textBox_numero;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label;

	private: System::Windows::Forms::TextBox^ textBox_base_destino;
	private: System::Windows::Forms::TextBox^ textBox_base_origen;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label_resdec;



	private: System::Windows::Forms::Label^ label1;



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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button_calcular = (gcnew System::Windows::Forms::Button());
			this->textBox_numero = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label = (gcnew System::Windows::Forms::Label());
			this->textBox_base_destino = (gcnew System::Windows::Forms::TextBox());
			this->textBox_base_origen = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label_resdec = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button_calcular);
			this->groupBox1->Controls->Add(this->textBox_numero);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label);
			this->groupBox1->Controls->Add(this->textBox_base_destino);
			this->groupBox1->Controls->Add(this->textBox_base_origen);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(48, 44);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(414, 222);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Conversión de base m a base n";
			// 
			// button_calcular
			// 
			this->button_calcular->Location = System::Drawing::Point(135, 172);
			this->button_calcular->Name = L"button_calcular";
			this->button_calcular->Size = System::Drawing::Size(114, 29);
			this->button_calcular->TabIndex = 5;
			this->button_calcular->Text = L"Calcular";
			this->button_calcular->UseVisualStyleBackColor = true;
			this->button_calcular->Click += gcnew System::EventHandler(this, &Ejercicio3::button_calcular_Click);
			// 
			// textBox_numero
			// 
			this->textBox_numero->Location = System::Drawing::Point(259, 123);
			this->textBox_numero->Name = L"textBox_numero";
			this->textBox_numero->Size = System::Drawing::Size(98, 28);
			this->textBox_numero->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(51, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 21);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Base origen:";
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label->Location = System::Drawing::Point(51, 87);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(121, 21);
			this->label->TabIndex = 5;
			this->label->Text = L"Base destino:";
			// 
			// textBox_base_destino
			// 
			this->textBox_base_destino->Location = System::Drawing::Point(219, 84);
			this->textBox_base_destino->Name = L"textBox_base_destino";
			this->textBox_base_destino->Size = System::Drawing::Size(138, 28);
			this->textBox_base_destino->TabIndex = 4;
			// 
			// textBox_base_origen
			// 
			this->textBox_base_origen->Location = System::Drawing::Point(219, 45);
			this->textBox_base_origen->Name = L"textBox_base_origen";
			this->textBox_base_origen->Size = System::Drawing::Size(138, 28);
			this->textBox_base_origen->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(51, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(176, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Número a convertir:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(88, 298);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(177, 21);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Número convertido:";
			// 
			// label_resdec
			// 
			this->label_resdec->AutoSize = true;
			this->label_resdec->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_resdec->Location = System::Drawing::Point(304, 303);
			this->label_resdec->Name = L"label_resdec";
			this->label_resdec->Size = System::Drawing::Size(0, 21);
			this->label_resdec->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(304, 343);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 21);
			this->label1->TabIndex = 10;
			// 
			// Ejercicio3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(525, 418);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label_resdec);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Ejercicio3";
			this->Text = L"Ejercicio3";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_calcular_Click(System::Object^ sender, System::EventArgs^ e) {

		int num = System::Convert::ToInt32(textBox_numero->Text);
		int b1 = System::Convert::ToInt32(textBox_base_origen->Text);
		String^ b1n = textBox_numero->Text;
		int can = b1n->Length;
		int b2 = System::Convert::ToInt32(textBox_base_destino->Text);
		int dec = 0;
		int con = 0;

		if (b1 <= 10) {
			dec = recursivo2_10(b1n, b1, dec, can - 1, con, can - 1);
			label_resdec->Text = System::Convert::ToString(dec);
		}
		else {
			dec = recursivo11_16(b1n, b1, dec, can - 1, con, can - 1);
		}

		String^ res = "";
		label1->Text = recursivo_regreso(dec, b2, res);
	}


		   //Metodo Recursico Base N a 10 base, mayor a 11
		   int recursivo11_16(String^ n, int b, int dec, int c, int con, int fin) {
			   if (con == fin) {
				   int num = n[c];
				   dec = dec + ((num - 48) * pow(b, con));
				   return dec;
			   }
			   else {
				   int num = n[c];
				   dec = dec + ((num - 48) * pow(b, con));
				   con = con + 1;
				   c = c - 1;
				   return recursivo2_10(n, b, dec, c, con, fin);
			   }
		   }


		   //Metodo Recursivo Base N a 10 base, menor a 9
		   int recursivo2_10(String^ n, int b, int dec, int c, int con, int fin) {
			   if (con == fin) {
				   int num = n[c];
				   dec = dec + ((num - 48) * pow(b, con));
				   return dec;
			   }
			   else {
				   int num = n[c];
				   dec = dec + ((num - 48) * pow(b, con));
				   con = con + 1;
				   c = c - 1;
				   return recursivo2_10(n, b, dec, c, con, fin);
			   }
		   }


		   //Metodo Recursivo Base 10 a N base
		   String^ recursivo_regreso(int dec, int b2, String^ res) {
			   if (dec == 0) {
				   return res;
			   }
			   else
			   {
				   int num = dec % b2;
				   String^ letra = "";
				   if (num > 9) {
					   switch (num)
					   {
					   case 10: letra = "A";
						   break;
					   case 11: letra = "B";
						   break;
					   case 12: letra = "C";
						   break;
					   case 13: letra = "D";
						   break;
					   case 14: letra = "E";
						   break;
					   case 15: letra = "F";
						   break;
					   case 16: letra = "G";
						   break;
					   case 17: letra = "H";
						   break;
					   case 18: letra = "I";
						   break;
					   case 19: letra = "J";
						   break;
					   case 20: letra = "K";
						   break;
					   case 21: letra = "L";
						   break;
					   case 22: letra = "M";
						   break;
					   case 23: letra = "N";
						   break;
					   case 24: letra = "O";
						   break;
					   case 25: letra = "P";
						   break;
					   case 26: letra = "Q";
						   break;
					   case 27: letra = "R";
						   break;
					   case 28: letra = "S";
						   break;
					   case 29: letra = "T";
						   break;
					   case 30: letra = "U";
						   break;
					   case 31: letra = "V";
						   break;
					   case 32: letra = "W";
						   break;
					   case 33: letra = "X";
						   break;
					   case 34: letra = "Y";
						   break;
					   case 35: letra = "Z";
						   break;

					   default:
						   break;
					   }
					   dec = dec / b2;
					   res = letra + res;
					   return recursivo_regreso(dec, b2, res);
				   }
				   else {
					   dec = dec / b2;
					   String^ snum = System::Convert::ToString(num);
					   res = snum + res;
					   return recursivo_regreso(dec, b2, res);
				   }

			   }
		   }
};
}
