#pragma once

namespace ProyectoPA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ Tablero_principal;
	protected:
	private: System::Windows::Forms::TextBox^ Max_lmnt;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Exit_btn;
	private: System::Windows::Forms::Button^ FastS_btn;
	private: System::Windows::Forms::Button^ Borrar_btn;
	private: System::Windows::Forms::Button^ SbS_btn;
	private: System::Windows::Forms::Button^ Upload_btn;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

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
			this->Tablero_principal = (gcnew System::Windows::Forms::PictureBox());
			this->Max_lmnt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Exit_btn = (gcnew System::Windows::Forms::Button());
			this->FastS_btn = (gcnew System::Windows::Forms::Button());
			this->Borrar_btn = (gcnew System::Windows::Forms::Button());
			this->SbS_btn = (gcnew System::Windows::Forms::Button());
			this->Upload_btn = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tablero_principal))->BeginInit();
			this->SuspendLayout();
			// 
			// Tablero_principal
			// 
			this->Tablero_principal->BackColor = System::Drawing::Color::Transparent;
			this->Tablero_principal->Location = System::Drawing::Point(12, 95);
			this->Tablero_principal->Name = L"Tablero_principal";
			this->Tablero_principal->Size = System::Drawing::Size(835, 372);
			this->Tablero_principal->TabIndex = 24;
			this->Tablero_principal->TabStop = false;
			// 
			// Max_lmnt
			// 
			this->Max_lmnt->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Max_lmnt->Location = System::Drawing::Point(12, 51);
			this->Max_lmnt->Name = L"Max_lmnt";
			this->Max_lmnt->Size = System::Drawing::Size(100, 26);
			this->Max_lmnt->TabIndex = 23;
			this->Max_lmnt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(8, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 19);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Elementos por fila:";
			// 
			// Exit_btn
			// 
			this->Exit_btn->BackColor = System::Drawing::Color::White;
			this->Exit_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit_btn->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit_btn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Exit_btn->Location = System::Drawing::Point(957, 164);
			this->Exit_btn->Name = L"Exit_btn";
			this->Exit_btn->Size = System::Drawing::Size(93, 50);
			this->Exit_btn->TabIndex = 21;
			this->Exit_btn->Text = L"Salir";
			this->Exit_btn->UseVisualStyleBackColor = false;
			// 
			// FastS_btn
			// 
			this->FastS_btn->BackColor = System::Drawing::Color::White;
			this->FastS_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FastS_btn->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FastS_btn->Location = System::Drawing::Point(858, 234);
			this->FastS_btn->Name = L"FastS_btn";
			this->FastS_btn->Size = System::Drawing::Size(192, 50);
			this->FastS_btn->TabIndex = 20;
			this->FastS_btn->Text = L"Imprimir reporte";
			this->FastS_btn->UseVisualStyleBackColor = false;
			// 
			// Borrar_btn
			// 
			this->Borrar_btn->BackColor = System::Drawing::Color::White;
			this->Borrar_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Borrar_btn->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Borrar_btn->Location = System::Drawing::Point(858, 164);
			this->Borrar_btn->Name = L"Borrar_btn";
			this->Borrar_btn->Size = System::Drawing::Size(93, 50);
			this->Borrar_btn->TabIndex = 19;
			this->Borrar_btn->Text = L"Borrar Mapa";
			this->Borrar_btn->UseVisualStyleBackColor = false;
			// 
			// SbS_btn
			// 
			this->SbS_btn->BackColor = System::Drawing::Color::White;
			this->SbS_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SbS_btn->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SbS_btn->Location = System::Drawing::Point(858, 299);
			this->SbS_btn->Name = L"SbS_btn";
			this->SbS_btn->Size = System::Drawing::Size(192, 50);
			this->SbS_btn->TabIndex = 18;
			this->SbS_btn->Text = L"Solución paso a paso";
			this->SbS_btn->UseVisualStyleBackColor = false;
			// 
			// Upload_btn
			// 
			this->Upload_btn->BackColor = System::Drawing::Color::White;
			this->Upload_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Upload_btn->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Upload_btn->Location = System::Drawing::Point(858, 95);
			this->Upload_btn->Name = L"Upload_btn";
			this->Upload_btn->Size = System::Drawing::Size(186, 50);
			this->Upload_btn->TabIndex = 17;
			this->Upload_btn->Text = L"Cargar y mostrar archivo";
			this->Upload_btn->UseVisualStyleBackColor = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm2::timer1_Tick);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ClientSize = System::Drawing::Size(1073, 555);
			this->Controls->Add(this->Tablero_principal);
			this->Controls->Add(this->Max_lmnt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Exit_btn);
			this->Controls->Add(this->FastS_btn);
			this->Controls->Add(this->Borrar_btn);
			this->Controls->Add(this->SbS_btn);
			this->Controls->Add(this->Upload_btn);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tablero_principal))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
