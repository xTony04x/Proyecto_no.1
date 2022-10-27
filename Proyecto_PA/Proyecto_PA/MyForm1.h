#pragma once
#pragma unmanaged
#pragma managed
#include<stack>
#include<string>
#include <msclr\marshal_cppstd.h>
#include"MyForm1.cpp"









namespace ProyectoPA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
    

	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public: int txb1 = 0,txb2 = 0, txb3 = 0;
	private: System::Windows::Forms::PictureBox^ Tablero_principal;
	public:
	private: System::Windows::Forms::TextBox^ Max_lmnt;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Exit_btn;
	private: System::Windows::Forms::Button^ FastS_btn;
	private: System::Windows::Forms::Button^ Borrar_btn;
	private: System::Windows::Forms::Button^ SbS_btn;
	private: System::Windows::Forms::Button^ Upload_btn;

	public:


























	public:
	public:
		

		MyForm1(void)
		{
			//ingresar todas las variables
			InitializeComponent();
			
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;







	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->Tablero_principal = (gcnew System::Windows::Forms::PictureBox());
			this->Max_lmnt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Exit_btn = (gcnew System::Windows::Forms::Button());
			this->FastS_btn = (gcnew System::Windows::Forms::Button());
			this->Borrar_btn = (gcnew System::Windows::Forms::Button());
			this->SbS_btn = (gcnew System::Windows::Forms::Button());
			this->Upload_btn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tablero_principal))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm1::openFileDialog1_FileOk);
			// 
			// Tablero_principal
			// 
			this->Tablero_principal->BackColor = System::Drawing::Color::Transparent;
			this->Tablero_principal->Location = System::Drawing::Point(25, 87);
			this->Tablero_principal->Name = L"Tablero_principal";
			this->Tablero_principal->Size = System::Drawing::Size(835, 372);
			this->Tablero_principal->TabIndex = 16;
			this->Tablero_principal->TabStop = false;
			// 
			// Max_lmnt
			// 
			this->Max_lmnt->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Max_lmnt->Location = System::Drawing::Point(25, 43);
			this->Max_lmnt->Name = L"Max_lmnt";
			this->Max_lmnt->Size = System::Drawing::Size(100, 26);
			this->Max_lmnt->TabIndex = 15;
			this->Max_lmnt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(21, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 19);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Elementos por fila:";
			// 
			// Exit_btn
			// 
			this->Exit_btn->BackColor = System::Drawing::Color::White;
			this->Exit_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit_btn->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit_btn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Exit_btn->Location = System::Drawing::Point(970, 156);
			this->Exit_btn->Name = L"Exit_btn";
			this->Exit_btn->Size = System::Drawing::Size(93, 50);
			this->Exit_btn->TabIndex = 13;
			this->Exit_btn->Text = L"Salir";
			this->Exit_btn->UseVisualStyleBackColor = false;
			// 
			// FastS_btn
			// 
			this->FastS_btn->BackColor = System::Drawing::Color::White;
			this->FastS_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FastS_btn->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FastS_btn->Location = System::Drawing::Point(871, 226);
			this->FastS_btn->Name = L"FastS_btn";
			this->FastS_btn->Size = System::Drawing::Size(192, 50);
			this->FastS_btn->TabIndex = 12;
			this->FastS_btn->Text = L"Imprimir reporte";
			this->FastS_btn->UseVisualStyleBackColor = false;
			// 
			// Borrar_btn
			// 
			this->Borrar_btn->BackColor = System::Drawing::Color::White;
			this->Borrar_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Borrar_btn->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Borrar_btn->Location = System::Drawing::Point(871, 156);
			this->Borrar_btn->Name = L"Borrar_btn";
			this->Borrar_btn->Size = System::Drawing::Size(93, 50);
			this->Borrar_btn->TabIndex = 11;
			this->Borrar_btn->Text = L"Borrar Mapa";
			this->Borrar_btn->UseVisualStyleBackColor = false;
			// 
			// SbS_btn
			// 
			this->SbS_btn->BackColor = System::Drawing::Color::White;
			this->SbS_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SbS_btn->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SbS_btn->Location = System::Drawing::Point(871, 291);
			this->SbS_btn->Name = L"SbS_btn";
			this->SbS_btn->Size = System::Drawing::Size(192, 50);
			this->SbS_btn->TabIndex = 10;
			this->SbS_btn->Text = L"Solución paso a paso";
			this->SbS_btn->UseVisualStyleBackColor = false;
			// 
			// Upload_btn
			// 
			this->Upload_btn->BackColor = System::Drawing::Color::White;
			this->Upload_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Upload_btn->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Upload_btn->Location = System::Drawing::Point(871, 87);
			this->Upload_btn->Name = L"Upload_btn";
			this->Upload_btn->Size = System::Drawing::Size(186, 50);
			this->Upload_btn->TabIndex = 9;
			this->Upload_btn->Text = L"Cargar y mostrar archivo";
			this->Upload_btn->UseVisualStyleBackColor = false;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(1069, 567);
			this->Controls->Add(this->Tablero_principal);
			this->Controls->Add(this->Max_lmnt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Exit_btn);
			this->Controls->Add(this->FastS_btn);
			this->Controls->Add(this->Borrar_btn);
			this->Controls->Add(this->SbS_btn);
			this->Controls->Add(this->Upload_btn);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tablero_principal))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{//abrir el archivo
		openFileDialog1->ShowDialog();
		
	}
		   
		
		   
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//SWAP
		
		
	}
		   
		   
	   
		   

	   
	   // para realizar los movimientos
		   static String^ path;
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e)
	{
		int size_pilas;
		try {
			int::TryParse(Max_lmnt->Text, size_pilas);
			// string que guarda la dirección
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
			spaces(info2, size_pilas, Tablero_principal);

		}
		catch (Exception^ e) {

			MessageBox::Show("Error detectado: " + e->Message, "Valores incorrectos", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}


 

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

}
	  
private: System::Void listBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void dataGridView1_DragDrop(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e) {
	
}

private: System::Void dataGridView1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	

}
};
}
