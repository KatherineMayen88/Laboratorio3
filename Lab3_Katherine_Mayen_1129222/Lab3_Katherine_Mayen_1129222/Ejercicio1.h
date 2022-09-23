#pragma once

namespace Lab3KatherineMayen1129222 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Ejercicio1
	/// </summary>
	public ref class Ejercicio1 : public System::Windows::Forms::Form
	{
	public:
		Ejercicio1(void)
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
		~Ejercicio1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_num1;
	private: System::Windows::Forms::TextBox^ textBox_num2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button_calcular;
	private: System::Windows::Forms::Label^ label_resultado;
	private: System::Windows::Forms::TextBox^ textBox_resultado;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_num1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_num2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button_calcular = (gcnew System::Windows::Forms::Button());
			this->label_resultado = (gcnew System::Windows::Forms::Label());
			this->textBox_resultado = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(87, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Número 1:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(87, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Número 2:";
			// 
			// textBox_num1
			// 
			this->textBox_num1->Location = System::Drawing::Point(205, 58);
			this->textBox_num1->Name = L"textBox_num1";
			this->textBox_num1->Size = System::Drawing::Size(143, 28);
			this->textBox_num1->TabIndex = 3;
			// 
			// textBox_num2
			// 
			this->textBox_num2->Location = System::Drawing::Point(205, 103);
			this->textBox_num2->Name = L"textBox_num2";
			this->textBox_num2->Size = System::Drawing::Size(143, 28);
			this->textBox_num2->TabIndex = 4;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button_calcular);
			this->groupBox1->Controls->Add(this->textBox_num2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox_num1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(47, 45);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(449, 200);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Calcular la multiplicación de dos números utilizando sumas";
			// 
			// button_calcular
			// 
			this->button_calcular->Location = System::Drawing::Point(205, 150);
			this->button_calcular->Name = L"button_calcular";
			this->button_calcular->Size = System::Drawing::Size(143, 29);
			this->button_calcular->TabIndex = 5;
			this->button_calcular->Text = L"Calcular";
			this->button_calcular->UseVisualStyleBackColor = true;
			this->button_calcular->Click += gcnew System::EventHandler(this, &Ejercicio1::button_calcular_Click);
			// 
			// label_resultado
			// 
			this->label_resultado->AutoSize = true;
			this->label_resultado->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_resultado->Location = System::Drawing::Point(134, 289);
			this->label_resultado->Name = L"label_resultado";
			this->label_resultado->Size = System::Drawing::Size(0, 21);
			this->label_resultado->TabIndex = 6;
			// 
			// textBox_resultado
			// 
			this->textBox_resultado->Enabled = false;
			this->textBox_resultado->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_resultado->Location = System::Drawing::Point(252, 287);
			this->textBox_resultado->Name = L"textBox_resultado";
			this->textBox_resultado->Size = System::Drawing::Size(143, 28);
			this->textBox_resultado->TabIndex = 7;
			// 
			// Ejercicio1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(561, 371);
			this->Controls->Add(this->label_resultado);
			this->Controls->Add(this->textBox_resultado);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Ejercicio1";
			this->Text = L"Ejercicio1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}



#pragma endregion
	private: System::Void button_calcular_Click(System::Object^ sender, System::EventArgs^ e) {

		int num1, num2, respuesta;
		int total = 0;

		num1 = System::Convert::ToInt32(textBox_num1->Text);
		num2 = System::Convert::ToInt32(textBox_num2->Text);
		label_resultado->Text = System::Convert::ToString(num1 + " * " + num2 + " = ");
		textBox_resultado->Text = System::Convert::ToString(ejercicio1_recursivo(num1, num2, total));
		//textBox_resultado->Text = System::Convert::ToString(ejercicio1_iterativo(num1, num2));
	}

	//FORMA RECURSIVA
	int	ejercicio1_recursivo(int n1, int n2, int total)
	{
		if (n2 != 1)
		{
			total = total + n1;
			return ejercicio1_recursivo(n1, (n2 - 1), total);
		}
		else
		{
			return (total + n1);
		}
	}

	//FORMA ITERATIVA
	int ejercicio1_iterativo(int n1, int n2)
	{
		int total = 0;

		for (int i = 0; i < n2; i++)
		{
			total = total + n1;
		}
		return total;
	}


};
}
