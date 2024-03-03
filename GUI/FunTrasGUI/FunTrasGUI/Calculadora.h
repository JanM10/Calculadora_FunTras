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
	private: System::Windows::Forms::Button^ botonResultado;


	private: System::Windows::Forms::Button^ botonDecimal;

	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ botonC;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ botonMasMenos;
	private: System::Windows::Forms::Button^ botonBorrar;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;




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
			this->botonResultado = (gcnew System::Windows::Forms::Button());
			this->botonDecimal = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->botonC = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->botonMasMenos = (gcnew System::Windows::Forms::Button());
			this->botonBorrar = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
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
			this->boton7->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->boton7->FlatAppearance->BorderSize = 0;
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
			this->boton8->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->boton8->FlatAppearance->BorderSize = 0;
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
			this->boton9->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->boton9->FlatAppearance->BorderSize = 0;
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
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(421, 390);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(120, 90);
			this->button4->TabIndex = 5;
			this->button4->Text = L"X";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Calculadora::EnterOperator);
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(421, 507);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 90);
			this->button5->TabIndex = 9;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Calculadora::EnterOperator);
			// 
			// boton6
			// 
			this->boton6->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->boton6->FlatAppearance->BorderSize = 0;
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
			this->boton5->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->boton5->FlatAppearance->BorderSize = 0;
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
			this->boton4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->boton4->FlatAppearance->BorderSize = 0;
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
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(421, 624);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(120, 90);
			this->button9->TabIndex = 13;
			this->button9->Text = L"+";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Calculadora::EnterOperator);
			// 
			// boton3
			// 
			this->boton3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->boton3->FlatAppearance->BorderSize = 0;
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
			this->bootn2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->bootn2->FlatAppearance->BorderSize = 0;
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
			this->boton1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->boton1->FlatAppearance->BorderSize = 0;
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
			// botonResultado
			// 
			this->botonResultado->BackColor = System::Drawing::Color::RoyalBlue;
			this->botonResultado->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->botonResultado->FlatAppearance->BorderSize = 0;
			this->botonResultado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonResultado->Location = System::Drawing::Point(421, 741);
			this->botonResultado->Name = L"botonResultado";
			this->botonResultado->Size = System::Drawing::Size(120, 90);
			this->botonResultado->TabIndex = 17;
			this->botonResultado->Text = L"=";
			this->botonResultado->UseVisualStyleBackColor = false;
			this->botonResultado->Click += gcnew System::EventHandler(this, &Calculadora::botonResultado_Click);
			// 
			// botonDecimal
			// 
			this->botonDecimal->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->botonDecimal->FlatAppearance->BorderSize = 0;
			this->botonDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonDecimal->Location = System::Drawing::Point(290, 741);
			this->botonDecimal->Name = L"botonDecimal";
			this->botonDecimal->Size = System::Drawing::Size(120, 90);
			this->botonDecimal->TabIndex = 16;
			this->botonDecimal->Text = L".";
			this->botonDecimal->UseVisualStyleBackColor = true;
			this->botonDecimal->Click += gcnew System::EventHandler(this, &Calculadora::botonDecimal_Click);
			// 
			// button15
			// 
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button15->FlatAppearance->BorderSize = 0;
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
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button16->FlatAppearance->BorderSize = 0;
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
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(421, 273);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 90);
			this->button1->TabIndex = 21;
			this->button1->Text = L"÷";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Calculadora::EnterOperator);
			// 
			// botonC
			// 
			this->botonC->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->botonC->FlatAppearance->BorderSize = 0;
			this->botonC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonC->Location = System::Drawing::Point(290, 273);
			this->botonC->Name = L"botonC";
			this->botonC->Size = System::Drawing::Size(120, 90);
			this->botonC->TabIndex = 20;
			this->botonC->Text = L"C";
			this->botonC->UseVisualStyleBackColor = true;
			this->botonC->Click += gcnew System::EventHandler(this, &Calculadora::botonC_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(156, 273);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 90);
			this->button3->TabIndex = 19;
			this->button3->Text = L"CE";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// botonMasMenos
			// 
			this->botonMasMenos->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->botonMasMenos->FlatAppearance->BorderSize = 0;
			this->botonMasMenos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonMasMenos->Location = System::Drawing::Point(23, 273);
			this->botonMasMenos->Name = L"botonMasMenos";
			this->botonMasMenos->Size = System::Drawing::Size(120, 90);
			this->botonMasMenos->TabIndex = 18;
			this->botonMasMenos->Text = L"+/-";
			this->botonMasMenos->UseVisualStyleBackColor = true;
			this->botonMasMenos->Click += gcnew System::EventHandler(this, &Calculadora::botonMasMenos_Click);
			// 
			// botonBorrar
			// 
			this->botonBorrar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->botonBorrar->FlatAppearance->BorderSize = 0;
			this->botonBorrar->Font = (gcnew System::Drawing::Font(L"Wingdings", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->botonBorrar->Location = System::Drawing::Point(563, 273);
			this->botonBorrar->Name = L"botonBorrar";
			this->botonBorrar->Size = System::Drawing::Size(190, 90);
			this->botonBorrar->TabIndex = 22;
			this->botonBorrar->Text = L"";
			this->botonBorrar->UseVisualStyleBackColor = true;
			this->botonBorrar->Click += gcnew System::EventHandler(this, &Calculadora::botonBorrar_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1193, 392);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(190, 90);
			this->button2->TabIndex = 26;
			this->button2->Text = L"cos(x)";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(984, 392);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(190, 90);
			this->button6->TabIndex = 25;
			this->button6->Text = L"sin(x)";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(772, 391);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(190, 90);
			this->button7->TabIndex = 24;
			this->button7->Text = L"e^x";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(563, 390);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(190, 90);
			this->button8->TabIndex = 23;
			this->button8->Text = L"x^-1";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(1193, 509);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(190, 90);
			this->button10->TabIndex = 30;
			this->button10->Text = L"x^y";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(984, 509);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(190, 90);
			this->button11->TabIndex = 29;
			this->button11->Text = L"logy(x)";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(772, 508);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(190, 90);
			this->button12->TabIndex = 28;
			this->button12->Text = L"ln(x)";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(563, 507);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(190, 90);
			this->button13->TabIndex = 27;
			this->button13->Text = L"tan(x)";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(1193, 626);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(190, 90);
			this->button14->TabIndex = 34;
			this->button14->Text = L"√x";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(984, 626);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(190, 90);
			this->button17->TabIndex = 33;
			this->button17->Text = L"tanh(x)";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(772, 625);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(190, 90);
			this->button18->TabIndex = 32;
			this->button18->Text = L"cosh(x)";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(563, 624);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(190, 90);
			this->button19->TabIndex = 31;
			this->button19->Text = L"sinh(x)";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(1193, 743);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(190, 90);
			this->button20->TabIndex = 38;
			this->button20->Text = L"cos^1(x)";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(984, 743);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(190, 90);
			this->button21->TabIndex = 37;
			this->button21->Text = L"tan^-1(x)";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(772, 742);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(190, 90);
			this->button22->TabIndex = 36;
			this->button22->Text = L"sin^-1(x)";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(563, 741);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(190, 90);
			this->button23->TabIndex = 35;
			this->button23->Text = L"y√x";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(772, 275);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(190, 90);
			this->button24->TabIndex = 39;
			this->button24->Text = L"sec(x)";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(984, 275);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(190, 90);
			this->button25->TabIndex = 40;
			this->button25->Text = L"cot(x)";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(1193, 275);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(190, 90);
			this->button26->TabIndex = 41;
			this->button26->Text = L"csc(x)";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// Calculadora
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(1431, 852);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->botonBorrar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->botonC);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->botonMasMenos);
			this->Controls->Add(this->botonResultado);
			this->Controls->Add(this->botonDecimal);
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
		double firstDigit, secondDigit, result;
		String^ operators;

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
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {

	Button^ NumbersOp = safe_cast<Button^>(sender);
	firstDigit = Double::Parse(txtDisplay->Text);

	txtDisplay->Text = "";
	operators = NumbersOp->Text;
}
	  
private: System::Void botonDecimal_Click(System::Object^ sender, System::EventArgs^ e) {

	if (!txtDisplay->Text->Contains ("."))
	{
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}

private: System::Void botonResultado_Click(System::Object^ sender, System::EventArgs^ e) {

	secondDigit = Double::Parse(txtDisplay->Text);

	// Se aplica el operador de suma
	if (operators == "+")
	{
		result = firstDigit + secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}

	// Se aplica el operador de resta
	else if (operators == "-")
	{
		result = firstDigit - secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}

	// Se aplica el operador de multiplicacion
	else if (operators == "X")
	{
		result = firstDigit * secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}

	// Se aplica el operador de division ÷
	else if (operators == "÷")
	{
		result = firstDigit / secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}

}
private: System::Void botonC_Click(System::Object^ sender, System::EventArgs^ e) {

	txtDisplay->Text = "0";

}
private: System::Void botonMasMenos_Click(System::Object^ sender, System::EventArgs^ e) {

	if (txtDisplay->Text->Contains("-"))
	{
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else
	{
		txtDisplay->Text = "-" + txtDisplay->Text;
	}

}
private: System::Void botonBorrar_Click(System::Object^ sender, System::EventArgs^ e) {

	if (txtDisplay->Text->Length > 0)
	{
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}

}
};
}
