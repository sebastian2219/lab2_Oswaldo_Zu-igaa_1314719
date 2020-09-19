#pragma once

namespace lab2OswaldoZuñigaa1314719 {
	using namespace System::Diagnostics;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de carrera
	/// </summary>
	public ref class carrera : public System::Windows::Forms::Form
	{
	public:
		carrera(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~carrera()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::Timer^ timer1;
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(332, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Iniciar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &carrera::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 155);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(182, 218);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 3;
			// 
			// timer1
			// 
			timer1->Interval = 1000;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Blue;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Lime;
			this->label4->Location = System::Drawing::Point(33, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(346, 24);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Carrera de la liebre y la tortuga";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(350, 240);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"salir";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &carrera::button2_Click);
			// 
			// carrera
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(437, 275);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"carrera";
			this->Text = L"carrera";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int movTortuga (int n);
		int movLiebre (int n);
		void print(int pista[], int* liebre, int* totuga) {

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Random rnd;
		int pista[70];
		int* liebre = &pista[0];
		int* tortuga = &pista[0];
		label3->Text = "Bang arrancan";
		while (liebre < &pista[70] && tortuga< &pista[70])
		{
			int pasoLiebre = movLiebre(rnd.Next(1, 11));
			int pasotortuga = movTortuga(rnd.Next(1, 11));
			liebre += pasoLiebre;
			tortuga += pasotortuga;

			if (liebre <&pista[0]||tortuga <&pista[0])
			{
				liebre = &pista[0];
				tortuga = &pista[0];
			}
			
			for (int i = 0; i <= 70; i++)
			{

				if (&pista[i] == liebre && &pista[i] == tortuga)
				{
					
					label1->Text = "O";
				}
				else if (&pista[i] == liebre)
				{
					label1->Text = "L";
				}
				else if (&pista[i] == tortuga)
				{
					label1->Text = "T" ;
				}
				else
				{
					label1->Text = "_";
				}
			}
		}
		if (liebre == &pista[70]&& tortuga == &pista[70])
		{
			label2->Text = "Es un empate";
		}
		else if (liebre == &pista[70]) 
		{ 
			label2->Text = "La liebre gana.Ni hablar";
		}
		else if (tortuga == &pista[70])
		{
			label2->Text = "La tortuga gana! ¡Bravo!";
		}
		else 
		{
			label2->Text = "Ningun ganador";
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
