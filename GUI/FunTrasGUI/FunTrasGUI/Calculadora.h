#pragma once

namespace FunTrasGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculadora
	/// </summary>
	public ref class Calculadora : public System::Windows::Forms::Form
	{
	public:
		Calculadora(void)
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
		~Calculadora()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtDisplay;
	protected:

	protected:

	private: System::Windows::Forms::Button^ boton7;
	private: System::Windows::Forms::Button^ boton8;
	private: System::Windows::Forms::Button^ boton9;



	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ boton6;

	private: System::Windows::Forms::Button^ boton5;

	private: System::Windows::Forms::Button^ boton4;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ boton3;

	private: System::Windows::Forms::Button^ bootn2;

	private: System::Windows::Forms::Button^ boton1;

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button6;


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
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->boton7 = (gcnew System::Windows::Forms::Button());
			this->boton8 = (gcnew System::Windows::Forms::Button());
			this->boton9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->boton6 = (gcnew System::Windows::Forms::Button());
			this->boton5 = (gcnew System::Windows::Forms::Button());
			this->boton4 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->boton3 = (gcnew System::Windows::Forms::Button());
			this->bootn2 = (gcnew System::Windows::Forms::Button());
			this->boton1 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(29, 31);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->ReadOnly = true;
			this->txtDisplay->Size = System::Drawing::Size(512, 80);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &Calculadora::textBox1_TextChanged);
			// 
			// boton7
			// 
			this->boton7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton7->Location = System::Drawing::Point(23, 390);
			this->boton7->Name = L"boton7";
			this->boton7->Size = System::Drawing::Size(120, 90);
			this->boton7->TabIndex = 2;
			this->boton7->Text = L"7";
			this->boton7->UseVisualStyleBackColor = true;
			this->boton7->Click += gcnew System::EventHandler(this, &Calculadora::EnterNumber);
			// 
			// boton8
			// 
			this->boton8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton8->Location = System::Drawing::Point(156, 390);
			this->boton8->Name = L"boton8";
			this->boton8->Size = System::Drawing::Size(120, 90);
			this->boton8->TabIndex = 3;
			this->boton8->Text = L"8";
			this->boton8->UseVisualStyleBackColor = true;
			this->boton8->Click += gcnew System::EventHandler(this, &Calculadora::EnterNumber);
			// 
			// boton9
			// 
			this->boton9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton9->Location = System::Drawing::Point(290, 390);
			this->boton9->Name = L"boton9";
			this->boton9->Size = System::Drawing::Size(120, 90);
			this->boton9->TabIndex = 4;
			this->boton9->Text = L"9";
			this->boton9->UseVisualStyleBackColor = true;
			this->boton9->Click += gcnew System::EventHandler(this, &Calculadora::EnterNumber);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(421, 390);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(120, 90);
			this->button4->TabIndex = 5;
			this->button4->Text = L"X";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(421, 507);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 90);
			this->button5->TabIndex = 9;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// boton6
			// 
			this->boton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton6->Location = System::Drawing::Point(290, 507);
			this->boton6->Name = L"boton6";
			this->boton6->Size = System::Drawing::Size(120, 90);
			this->boton6->TabIndex = 8;
			this->boton6->Text = L"6";
			this->boton6->UseVisualStyleBackColor = true;
			this->boton6->Click += gcnew System::EventHandler(this, &Calculadora::EnterNumber);
			// 
			// boton5
			// 
			this->boton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton5->Location = System::Drawing::Point(156, 507);
			this->boton5->Name = L"boton5";
			this->boton5->Size = System::Drawing::Size(120, 90);
			this->boton5->TabIndex = 7;
			this->boton5->Text = L"5";
			this->boton5->UseVisualStyleBackColor = true;
			this->boton5->Click += gcnew System::EventHandler(this, &Calculadora::EnterNumber);
			// 
			// boton4
			// 
			this->boton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton4->Location = System::Drawing::Point(23, 507);
			this->boton4->Name = L"boton4";
			this->boton4->Size = System::Drawing::Size(120, 90);
			this->boton4->TabIndex = 6;
			this->boton4->Text = L"4";
			this->boton4->UseVisualStyleBackColor = true;
			this->boton4->Click += gcnew System::EventHandler(this, &Calculadora::EnterNumber);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(421, 624);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(120, 90);
			this->button9->TabIndex = 13;
			this->button9->Text = L"+";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// boton3
			// 
			this->boton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton3->Location = System::Drawing::Point(290, 624);
			this->boton3->Name = L"boton3";
			this->boton3->Size = System::Drawing::Size(120, 90);
			this->boton3->TabIndex = 12;
			this->boton3->Text = L"3";
			this->boton3->UseVisualStyleBackColor = true;
			this->boton3->Click += gcnew System::EventHandler(this, &Calculadora::EnterNumber);
			// 
			// bootn2
			// 
			this->bootn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bootn2->Location = System::Drawing::Point(156, 624);
			this->bootn2->Name = L"bootn2";
			this->bootn2->Size = System::Drawing::Size(120, 90);
			this->bootn2->TabIndex = 11;
			this->bootn2->Text = L"2";
			this->bootn2->UseVisualStyleBackColor = true;
			this->bootn2->Click += gcnew System::EventHandler(this, &Calculadora::EnterNumber);
			// 
			// boton1
			// 
			this->boton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton1->Location = System::Drawing::Point(23, 624);
			this->boton1->Name = L"boton1";
			this->boton1->Size = System::Drawing::Size(120, 90);
			this->boton1->TabIndex = 10;
			this->boton1->Text = L"1";
			this->boton1->UseVisualStyleBackColor = true;
			this->boton1->Click += gcnew System::EventHandler(this, &Calculadora::EnterNumber);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::RoyalBlue;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(421, 741);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(120, 90);
			this->button13->TabIndex = 17;
			this->button13->Text = L"=";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(290, 741);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(120, 90);
			this->button14->TabIndex = 16;
			this->button14->Text = L",";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(156, 741);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(120, 90);
			this->button15->TabIndex = 15;
			this->button15->Text = L"0";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Calculadora::EnterNumber);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(23, 741);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(120, 90);
			this->button16->TabIndex = 14;
			this->button16->Text = L"π";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Calculadora::EnterNumber);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(421, 273);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 90);
			this->button1->TabIndex = 21;
			this->button1->Text = L"+/-";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(290, 273);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 90);
			this->button2->TabIndex = 20;
			this->button2->Text = L"C";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(156, 273);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 90);
			this->button3->TabIndex = 19;
			this->button3->Text = L"CE";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(23, 273);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 90);
			this->button6->TabIndex = 18;
			this->button6->Text = L"%";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// Calculadora
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(570, 852);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->boton3);
			this->Controls->Add(this->bootn2);
			this->Controls->Add(this->boton1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->boton6);
			this->Controls->Add(this->boton5);
			this->Controls->Add(this->boton4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->boton9);
			this->Controls->Add(this->boton8);
			this->Controls->Add(this->boton7);
			this->Controls->Add(this->txtDisplay);
			this->Name = L"Calculadora";
			this->Text = L"Calculadora";
			this->Load += gcnew System::EventHandler(this, &Calculadora::Calculadora_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Calculadora_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {7;
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);

	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = Numbers->Text;
	}
	else
	{
		txtDisplay->Text = txtDisplay->Text + Numbers->Text;
	}
}
};
}
