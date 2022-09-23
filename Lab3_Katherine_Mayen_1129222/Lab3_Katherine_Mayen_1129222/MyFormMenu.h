#pragma once
#include "Ejercicio1.h"
#include "Ejercicio2.h"
#include "Ejercicio3.h"

namespace Lab3KatherineMayen1129222 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyFormMenu
	/// </summary>
	public ref class MyFormMenu : public System::Windows::Forms::Form
	{
	public:
		MyFormMenu(void)
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
		~MyFormMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button_ejercicio1;
	private: System::Windows::Forms::Button^ button_ejercicio2;
	private: System::Windows::Forms::Button^ button_ejercicio3;
	private: System::Windows::Forms::Button^ button_salir;

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
			this->button_ejercicio1 = (gcnew System::Windows::Forms::Button());
			this->button_ejercicio2 = (gcnew System::Windows::Forms::Button());
			this->button_ejercicio3 = (gcnew System::Windows::Forms::Button());
			this->button_salir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(133, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ejercicios";
			// 
			// button_ejercicio1
			// 
			this->button_ejercicio1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_ejercicio1->Location = System::Drawing::Point(119, 102);
			this->button_ejercicio1->Name = L"button_ejercicio1";
			this->button_ejercicio1->Size = System::Drawing::Size(173, 37);
			this->button_ejercicio1->TabIndex = 1;
			this->button_ejercicio1->Text = L"Ejercicio 1";
			this->button_ejercicio1->UseVisualStyleBackColor = true;
			this->button_ejercicio1->Click += gcnew System::EventHandler(this, &MyFormMenu::button_ejercicio1_Click);
			// 
			// button_ejercicio2
			// 
			this->button_ejercicio2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_ejercicio2->Location = System::Drawing::Point(119, 156);
			this->button_ejercicio2->Name = L"button_ejercicio2";
			this->button_ejercicio2->Size = System::Drawing::Size(173, 37);
			this->button_ejercicio2->TabIndex = 2;
			this->button_ejercicio2->Text = L"Ejercicio 2";
			this->button_ejercicio2->UseVisualStyleBackColor = true;
			this->button_ejercicio2->Click += gcnew System::EventHandler(this, &MyFormMenu::button_ejercicio2_Click);
			// 
			// button_ejercicio3
			// 
			this->button_ejercicio3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_ejercicio3->Location = System::Drawing::Point(119, 210);
			this->button_ejercicio3->Name = L"button_ejercicio3";
			this->button_ejercicio3->Size = System::Drawing::Size(173, 37);
			this->button_ejercicio3->TabIndex = 3;
			this->button_ejercicio3->Text = L"Ejercicio 3";
			this->button_ejercicio3->UseVisualStyleBackColor = true;
			this->button_ejercicio3->Click += gcnew System::EventHandler(this, &MyFormMenu::button_ejercicio3_Click);
			// 
			// button_salir
			// 
			this->button_salir->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_salir->Location = System::Drawing::Point(119, 263);
			this->button_salir->Name = L"button_salir";
			this->button_salir->Size = System::Drawing::Size(173, 37);
			this->button_salir->TabIndex = 4;
			this->button_salir->Text = L"Salir";
			this->button_salir->UseVisualStyleBackColor = true;
			this->button_salir->Click += gcnew System::EventHandler(this, &MyFormMenu::button_salir_Click);
			// 
			// MyFormMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(423, 361);
			this->Controls->Add(this->button_salir);
			this->Controls->Add(this->button_ejercicio3);
			this->Controls->Add(this->button_ejercicio2);
			this->Controls->Add(this->button_ejercicio1);
			this->Controls->Add(this->label1);
			this->Name = L"MyFormMenu";
			this->Text = L"MyFormMenu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void button_ejercicio1_Click(System::Object^ sender, System::EventArgs^ e) {
		Ejercicio1^ frmEjercicio1 = gcnew Ejercicio1;
		frmEjercicio1->Show();
	}

	private: System::Void button_ejercicio2_Click(System::Object^ sender, System::EventArgs^ e) {
		Ejercicio2^ frmEjercicio2 = gcnew Ejercicio2;
		frmEjercicio2->Show();
	}

	private: System::Void button_ejercicio3_Click(System::Object^ sender, System::EventArgs^ e) {
		Ejercicio3^ frmEjercicio3 = gcnew Ejercicio3;
		frmEjercicio3->Show();
	}

	private: System::Void button_salir_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
