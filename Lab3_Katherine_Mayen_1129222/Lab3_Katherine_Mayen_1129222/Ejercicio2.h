#pragma once
#include <vector>
#include <string>
#include <regex> 
#include <sstream>
#include <iostream>
#include <deque>
#include <msclr\marshal_cppstd.h>

namespace Lab3KatherineMayen1129222 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for Ejercicio2
	/// </summary>
	public ref class Ejercicio2 : public System::Windows::Forms::Form
	{
	public:
		Ejercicio2(void)
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
		~Ejercicio2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button_calcular;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_texto;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_cant_palabras;

	private: System::Windows::Forms::Label^ label3;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_texto = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_cant_palabras = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button_calcular);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox_texto);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(55, 50);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(471, 200);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Comprobación de palabras palíndromas";
			// 
			// button_calcular
			// 
			this->button_calcular->Location = System::Drawing::Point(140, 132);
			this->button_calcular->Name = L"button_calcular";
			this->button_calcular->Size = System::Drawing::Size(187, 29);
			this->button_calcular->TabIndex = 5;
			this->button_calcular->Text = L"Verificar palabras";
			this->button_calcular->UseVisualStyleBackColor = true;
			this->button_calcular->Click += gcnew System::EventHandler(this, &Ejercicio2::button_calcular_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(44, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(330, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ingrese un texto separado por comas:";
			// 
			// textBox_texto
			// 
			this->textBox_texto->Location = System::Drawing::Point(48, 87);
			this->textBox_texto->Name = L"textBox_texto";
			this->textBox_texto->Size = System::Drawing::Size(371, 28);
			this->textBox_texto->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(80, 279);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 21);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Cantidad de palabras";
			// 
			// textBox_cant_palabras
			// 
			this->textBox_cant_palabras->Enabled = false;
			this->textBox_cant_palabras->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_cant_palabras->Location = System::Drawing::Point(356, 285);
			this->textBox_cant_palabras->Name = L"textBox_cant_palabras";
			this->textBox_cant_palabras->Size = System::Drawing::Size(127, 28);
			this->textBox_cant_palabras->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(80, 300);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(230, 21);
			this->label3->TabIndex = 9;
			this->label3->Text = L"palíndromas encontradas:";
			// 
			// Ejercicio2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(585, 379);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_cant_palabras);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Ejercicio2";
			this->Text = L"Ejercicio2";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void button_calcular_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int cantidad = 0;
		String^ managed = textBox_texto->Text;
		std::string unmanaged = msclr::interop::marshal_as<std::string>(managed);

		std::stringstream ss(unmanaged);
		std::vector<std::string> result;

		while (ss.good())
		{
			std::string substr;
			getline(ss, substr, ',');
			result.push_back(substr);
		}

		for (int i = 0; i < result.size(); i++)
		{
			std::string palabra = result[i];
			if (esPalindroma(palabra))
			{
				cantidad++;
			}
		}
		textBox_cant_palabras->Text = System::Convert::ToString(cantidad);

	}

		static Boolean esPalindroma(std::string cadena)
		{
			if (cadena.length() < 2)
			{
				return true;
			}

			if (cadena[0] == cadena[cadena.length() - 1])
			{
				return esPalindroma(cadena.substr(1, cadena.length() - 2));
			}
			return false;
		}

	};
}
