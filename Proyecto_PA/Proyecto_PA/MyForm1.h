#pragma once
#include<stack>
#include<string>
#include"declar.h"
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

	public: int txb1 = 0, txb2 = 0;
	private: System::Windows::Forms::ListBox^ listBox1;
	public:
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::Label^ label8;
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;


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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(112, 450);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 30);
			this->button2->TabIndex = 11;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 420);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Mover de";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 475);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(70, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 436);
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
			this->label3->Location = System::Drawing::Point(12, 459);
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
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(170, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"P0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(270, 82);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"P1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(367, 82);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"P2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(456, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"P3";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(273, 450);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(79, 30);
			this->button3->TabIndex = 17;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(146, 114);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(72, 160);
			this->listBox1->TabIndex = 18;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(251, 114);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(72, 160);
			this->listBox2->TabIndex = 19;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(343, 114);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(72, 160);
			this->listBox3->TabIndex = 20;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(437, 114);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(72, 160);
			this->listBox4->TabIndex = 21;
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(437, 362);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(72, 160);
			this->listBox5->TabIndex = 22;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(435, 327);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(82, 13);
			this->label8->TabIndex = 23;
			this->label8->Text = L"mapa ingresado";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(653, 534);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->listBox5);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
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
	
	txb1 = Convert::ToInt32(textBox1->Text);
	txb2 = Convert::ToInt32(textBox2->Text);
	cambios();
}

	   // para realizar los movimientos
	   public: void cambios() {
		   char temp;
		   declar x;
		   x.p0.push('r');
		   x.p0.push('b');
		   x.p0.push('a');

		   //pila no.1
		   x.p1.push('a');
		   x.p1.push('r');
		   x.p1.push('v');

		   //PILA NO.2
		   x.p2.push('a');
		   x.p2.push('r');
		   x.p2.push('v');
		   x.p2.push('b');

		   //PILA NO.3
		   x.p3.push('b');
		   x.p3.push('a');
		   x.p3.push('v');
		   
		   if (txb1==0) 
		   {
			   if (txb2 == 1)
			   {
				   listBox1->Items->Remove(x.p0.top());
				   temp = x.p0.top();
				   x.p1.push(temp);
				   x.p0.pop();
				   listBox2->Items->Add(x.p1.top());
			   }
			   else if(txb2 == 2)
			   {

			   }
			   else if(txb2 == 3)
			   {

			   }
			   else
			   {
				   MessageBox::Show("Ingrese un numero del 0 al 3");
			   }

		   }
		   else if (txb1 == 1)
		   {
			   if (txb2 == 0)
			   {
				   
			   }
			   else if (txb2 == 2)
			   {

			   }
			   else if (txb2 == 3)
			   {

			   }
			   else
			   {
				   MessageBox::Show("Ingrese un numero del 0 al 3");
			   }

		   }
		   else if (txb1 == 2)
		   {
			   if (txb2 == 0)
			   {

			   }
			   else if (txb2 == 1)
			   {

			   }
			   else if (txb2 == 3)
			   {

			   }
			   else
			   {
				   MessageBox::Show("Ingrese un numero del 0 al 3");
			   }

		   }
		   else if (txb1 == 3)
		   {
			   if (txb2 == 0)
			   {

			   }
			   else if (txb2 == 1)
			   {

			   }
			   else if (txb2 == 2)
			   {

			   }
			   else
			   {
				   MessageBox::Show("Ingrese un numero del 0 al 3");
			   }

		   }
	   }
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) 
{
	String^ FilePath = openFileDialog1->FileName;
	StreamReader^ Sr = gcnew StreamReader(FilePath);
	String^ linea= ",";
	linea = Sr->ReadLine();
	listBox5->Text = linea;
	Sr->Close();


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	declar x;
	
	//pila no.0
	x.p0.push('r');
	x.p0.push('b');
	x.p0.push('a');

	//pila no.1
	x.p1.push('a');
	x.p1.push('r');
	x.p1.push('v');

	//PILA NO.2
	x.p2.push('a');
	x.p2.push('r');
	x.p2.push('v');
	x.p2.push('b');

	//PILA NO.3
	x.p3.push('b');
	x.p3.push('a');
	x.p3.push('v');

	while (!x.p0.empty())
	{
		listBox1->Items->Add(x.p0.top());
		x.p0.pop();
	}
	while (!x.p1.empty())
	{
		listBox2->Items->Add(x.p1.top());
		x.p1.pop();
	}
	while (!x.p2.empty())
	{
		listBox3->Items->Add(x.p2.top());
		x.p2.pop();
	}
	while (!x.p3.empty())
	{
		listBox4->Items->Add(x.p3.top());
		x.p3.pop();
	}
}
};
}
