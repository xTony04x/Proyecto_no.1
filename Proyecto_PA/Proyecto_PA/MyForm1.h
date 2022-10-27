#pragma once
#pragma unmanaged
#pragma managed
#include<stack>
#include<string>
#include <msclr\marshal_cppstd.h>








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

	public:












	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;






	private: System::Windows::Forms::Button^ button3;
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
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(158, 450);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 30);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Swap";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 386);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Mover de";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 441);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(70, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 402);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(70, 20);
			this->textBox1->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Ingresar mapa:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(92, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 29);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Agregar mapa";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 425);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"a";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm1::openFileDialog1_FileOk);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(455, 369);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(79, 30);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Escribir mapa";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 486);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(70, 20);
			this->textBox3->TabIndex = 31;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(12, 470);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(58, 13);
			this->label15->TabIndex = 32;
			this->label15->Text = L"pos de pila";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowDrop = true;
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(93, 69);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(441, 214);
			this->dataGridView1->TabIndex = 33;
			this->dataGridView1->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm1::dataGridView1_DragDrop);
			this->dataGridView1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::dataGridView1_MouseDown);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"p1";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"p2";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"p3";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"p4";
			this->Column4->Name = L"Column4";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(653, 534);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
	   
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e)
	{
		String^ FilePath = openFileDialog1->FileName;
		StreamReader^ sr = gcnew StreamReader(FilePath); 

			String^ pilas = "";

			String^ Linea = "";

			int Contador = 0;

			while ((Linea = sr->ReadLine()) != nullptr) {
				
				array<String^>^ datapilas = Linea->Split(',');

				dataGridView1->Rows->Add(1);
				dataGridView1->Rows[Contador]->Cells[0]->Value = datapilas[0];
				dataGridView1->Rows[Contador]->Cells[1]->Value = datapilas[1];
				dataGridView1->Rows[Contador]->Cells[2]->Value = datapilas[2];
				dataGridView1->Rows[Contador]->Cells[3]->Value = datapilas[3];
				
				p1[Contador] = datapilas[0];
				p2[Contador] = datapilas[1];
				p3[Contador] = datapilas[2];
				p4[Contador] = datapilas[3];

				Contador++;				
			}

			sr->Close();
		
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
