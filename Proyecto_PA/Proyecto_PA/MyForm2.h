#pragma once
#include <Windows.h>
#include <string.h>
#include <msclr\marshal_cppstd.h>
#include "variables.h"
#include <iostream>
namespace ProyectoPA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
		static int segundos =60, minutos=9;
		static String^ secs;
		static String^ mins;
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c?digo de constructor aqu?
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est?n usando.
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
	private: System::Windows::Forms::Label^ label2;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del dise?ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?todo necesario para admitir el Dise?ador. No se puede modificar
		/// el contenido de este m?todo con el editor de c?digo.
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
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->FastS_btn->Click += gcnew System::EventHandler(this, &MyForm2::FastS_btn_Click);
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
			this->Borrar_btn->Click += gcnew System::EventHandler(this, &MyForm2::Borrar_btn_Click);
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
			this->SbS_btn->Text = L"Soluci?n paso a paso";
			this->SbS_btn->UseVisualStyleBackColor = false;
			this->SbS_btn->Click += gcnew System::EventHandler(this, &MyForm2::SbS_btn_Click);
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
			this->Upload_btn->Click += gcnew System::EventHandler(this, &MyForm2::Upload_btn_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm2::timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(937, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 25;
			this->label2->Text = L"label2";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ClientSize = System::Drawing::Size(1073, 555);
			this->Controls->Add(this->label2);
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

		private:
			bool bandera = false;

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		
			segundos--;
			if (segundos == 0) {
				minutos--;
			}
			secs = Convert::ToString(segundos);
			mins = Convert::ToString(minutos);
			label2->Text = mins + ":" + secs;
		
		
	}
		   static String^ path;
private: System::Void Upload_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	int size_pilas;
	try {
		int::TryParse(Max_lmnt->Text, size_pilas);
		// string que guarda la direcci?n
		String^ direc;
		// string de lectura
		string info2;
		// selector de archivo 
		Stream^ myst;
		// upload directory = updirec
		OpenFileDialog^ updirec = gcnew OpenFileDialog;

		try {
			//caracteristicas y filtros
			updirec->InitialDirectory = "c:\\documents";
			updirec->Filter = "Text file(*.txt)| *.txt";
			updirec->RestoreDirectory = false;

			if (updirec->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				if ((myst = updirec->OpenFile()) != nullptr)
				{
					direc = (updirec->FileName);
					path = direc;
					StreamReader^ lect = gcnew StreamReader(direc);
					String^ info = lect->ReadToEnd();
					info2 = msclr::interop::marshal_as<std::string>(info);
				}
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Error detectado: " + e->Message, "Valores incorrectos", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		Separador(info2, size_pilas, Tablero_principal);

	}
	catch (Exception^ e) {

		MessageBox::Show("Error detectado: " + e->Message, "Valores incorrectos", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void Borrar_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	Borrar(Tablero_principal);
}
private: System::Void SbS_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	Ordenar_SBS_Pila(Tablero_principal);
}
private: System::Void FastS_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	string instrucciones = Impresion();
	StreamWriter^ impresora = gcnew StreamWriter("colormania_resuelto.txt");
	String^ pasos = gcnew String(Impresion().c_str());
	impresora->Write(pasos);
	impresora->Close();
}
};
}
