
#pragma once

#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/lexical_cast.hpp>
#include <msclr/marshal_cppstd.h> // Para la conversión de String^ a std::string
#include <msclr/marshal.h>
#include "fun_tras.h"


namespace FunTrasGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace boost::multiprecision;
	using namespace msclr::interop;

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
	private: System::Windows::Forms::Button^ botonPI;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ botonC;
	private: System::Windows::Forms::Button^ botonCE;



	private: System::Windows::Forms::Button^ botonMasMenos;
	private: System::Windows::Forms::Button^ botonBorrar;
	private: System::Windows::Forms::Button^ botonCos;
	private: System::Windows::Forms::Button^ botonSin;
	private: System::Windows::Forms::Button^ botonExp;



	private: System::Windows::Forms::Button^ boton_divi_t;



	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ botonTan;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ botonTanh;

	private: System::Windows::Forms::Button^ botonCosh;

	private: System::Windows::Forms::Button^ botonSinh;

	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ botonSec;

	private: System::Windows::Forms::Button^ botonCot;
	private: System::Windows::Forms::Button^ botonCsc;






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
			this->botonPI = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->botonC = (gcnew System::Windows::Forms::Button());
			this->botonCE = (gcnew System::Windows::Forms::Button());
			this->botonMasMenos = (gcnew System::Windows::Forms::Button());
			this->botonBorrar = (gcnew System::Windows::Forms::Button());
			this->botonCos = (gcnew System::Windows::Forms::Button());
			this->botonSin = (gcnew System::Windows::Forms::Button());
			this->botonExp = (gcnew System::Windows::Forms::Button());
			this->boton_divi_t = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->botonTan = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->botonTanh = (gcnew System::Windows::Forms::Button());
			this->botonCosh = (gcnew System::Windows::Forms::Button());
			this->botonSinh = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->botonSec = (gcnew System::Windows::Forms::Button());
			this->botonCot = (gcnew System::Windows::Forms::Button());
			this->botonCsc = (gcnew System::Windows::Forms::Button());
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
			this->txtDisplay->Size = System::Drawing::Size(1354, 80);
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
			this->button4->Text = L"x";
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
			this->botonResultado->BackColor = System::Drawing::Color::Orange;
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
			// botonPI
			// 
			this->botonPI->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->botonPI->FlatAppearance->BorderSize = 0;
			this->botonPI->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonPI->Location = System::Drawing::Point(23, 741);
			this->botonPI->Name = L"botonPI";
			this->botonPI->Size = System::Drawing::Size(120, 90);
			this->botonPI->TabIndex = 14;
			this->botonPI->Text = L"π";
			this->botonPI->UseVisualStyleBackColor = true;
			this->botonPI->Click += gcnew System::EventHandler(this, &Calculadora::botonPI_Click);
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
			// botonCE
			// 
			this->botonCE->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->botonCE->FlatAppearance->BorderSize = 0;
			this->botonCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonCE->Location = System::Drawing::Point(156, 273);
			this->botonCE->Name = L"botonCE";
			this->botonCE->Size = System::Drawing::Size(120, 90);
			this->botonCE->TabIndex = 19;
			this->botonCE->Text = L"CE";
			this->botonCE->UseVisualStyleBackColor = true;
			this->botonCE->Click += gcnew System::EventHandler(this, &Calculadora::botonCE_Click);
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
			// botonCos
			// 
			this->botonCos->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->botonCos->FlatAppearance->BorderSize = 0;
			this->botonCos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonCos->Location = System::Drawing::Point(1193, 392);
			this->botonCos->Name = L"botonCos";
			this->botonCos->Size = System::Drawing::Size(190, 90);
			this->botonCos->TabIndex = 26;
			this->botonCos->Text = L"cos(x)";
			this->botonCos->UseVisualStyleBackColor = true;
			this->botonCos->Click += gcnew System::EventHandler(this, &Calculadora::botonCos_Click);
			// 
			// botonSin
			// 
			this->botonSin->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->botonSin->FlatAppearance->BorderSize = 0;
			this->botonSin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonSin->Location = System::Drawing::Point(984, 392);
			this->botonSin->Name = L"botonSin";
			this->botonSin->Size = System::Drawing::Size(190, 90);
			this->botonSin->TabIndex = 25;
			this->botonSin->Text = L"sin(x)";
			this->botonSin->UseVisualStyleBackColor = true;
			// 
			// botonExp
			// 
			this->botonExp->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->botonExp->FlatAppearance->BorderSize = 0;
			this->botonExp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonExp->Location = System::Drawing::Point(772, 391);
			this->botonExp->Name = L"botonExp";
			this->botonExp->Size = System::Drawing::Size(190, 90);
			this->botonExp->TabIndex = 24;
			this->botonExp->Text = L"eˣ";
			this->botonExp->UseVisualStyleBackColor = true;
			this->botonExp->Click += gcnew System::EventHandler(this, &Calculadora::botonExp_Click);
			// 
			// boton_divi_t
			// 
			this->boton_divi_t->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->boton_divi_t->FlatAppearance->BorderSize = 0;
			this->boton_divi_t->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_divi_t->Location = System::Drawing::Point(563, 390);
			this->boton_divi_t->Name = L"boton_divi_t";
			this->boton_divi_t->Size = System::Drawing::Size(190, 90);
			this->boton_divi_t->TabIndex = 23;
			this->boton_divi_t->Text = L"1/x";
			this->boton_divi_t->UseVisualStyleBackColor = true;
			this->boton_divi_t->Click += gcnew System::EventHandler(this, &Calculadora::boton_divi_t_Click);
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
			this->button10->Text = L"xʸ";
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
			this->button11->Text = L"logᵧ(x)";
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
			// botonTan
			// 
			this->botonTan->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->botonTan->FlatAppearance->BorderSize = 0;
			this->botonTan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonTan->Location = System::Drawing::Point(563, 507);
			this->botonTan->Name = L"botonTan";
			this->botonTan->Size = System::Drawing::Size(190, 90);
			this->botonTan->TabIndex = 27;
			this->botonTan->Text = L"tan(x)";
			this->botonTan->UseVisualStyleBackColor = true;
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
			// botonTanh
			// 
			this->botonTanh->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->botonTanh->FlatAppearance->BorderSize = 0;
			this->botonTanh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonTanh->Location = System::Drawing::Point(984, 626);
			this->botonTanh->Name = L"botonTanh";
			this->botonTanh->Size = System::Drawing::Size(190, 90);
			this->botonTanh->TabIndex = 33;
			this->botonTanh->Text = L"tanh(x)";
			this->botonTanh->UseVisualStyleBackColor = true;
			// 
			// botonCosh
			// 
			this->botonCosh->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->botonCosh->FlatAppearance->BorderSize = 0;
			this->botonCosh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonCosh->Location = System::Drawing::Point(772, 625);
			this->botonCosh->Name = L"botonCosh";
			this->botonCosh->Size = System::Drawing::Size(190, 90);
			this->botonCosh->TabIndex = 32;
			this->botonCosh->Text = L"cosh(x)";
			this->botonCosh->UseVisualStyleBackColor = true;
			// 
			// botonSinh
			// 
			this->botonSinh->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->botonSinh->FlatAppearance->BorderSize = 0;
			this->botonSinh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonSinh->Location = System::Drawing::Point(563, 624);
			this->botonSinh->Name = L"botonSinh";
			this->botonSinh->Size = System::Drawing::Size(190, 90);
			this->botonSinh->TabIndex = 31;
			this->botonSinh->Text = L"sinh(x)";
			this->botonSinh->UseVisualStyleBackColor = true;
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
			this->button20->Text = L"cos⁻¹(x)";
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
			this->button21->Text = L"tan⁻¹(x)";
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
			this->button22->Text = L"sen⁻¹(x)";
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
			// botonSec
			// 
			this->botonSec->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->botonSec->FlatAppearance->BorderSize = 0;
			this->botonSec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonSec->Location = System::Drawing::Point(772, 275);
			this->botonSec->Name = L"botonSec";
			this->botonSec->Size = System::Drawing::Size(190, 90);
			this->botonSec->TabIndex = 39;
			this->botonSec->Text = L"sec(x)";
			this->botonSec->UseVisualStyleBackColor = true;
			this->botonSec->Click += gcnew System::EventHandler(this, &Calculadora::botonSec_Click);
			// 
			// botonCot
			// 
			this->botonCot->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->botonCot->FlatAppearance->BorderSize = 0;
			this->botonCot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonCot->Location = System::Drawing::Point(984, 275);
			this->botonCot->Name = L"botonCot";
			this->botonCot->Size = System::Drawing::Size(190, 90);
			this->botonCot->TabIndex = 40;
			this->botonCot->Text = L"cot(x)";
			this->botonCot->UseVisualStyleBackColor = true;
			this->botonCot->Click += gcnew System::EventHandler(this, &Calculadora::botonCot_Click);
			// 
			// botonCsc
			// 
			this->botonCsc->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->botonCsc->FlatAppearance->BorderSize = 0;
			this->botonCsc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonCsc->Location = System::Drawing::Point(1193, 275);
			this->botonCsc->Name = L"botonCsc";
			this->botonCsc->Size = System::Drawing::Size(190, 90);
			this->botonCsc->TabIndex = 41;
			this->botonCsc->Text = L"csc(x)";
			this->botonCsc->UseVisualStyleBackColor = true;
			this->botonCsc->Click += gcnew System::EventHandler(this, &Calculadora::botonCsc_Click);
			// 
			// Calculadora
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(1411, 852);
			this->Controls->Add(this->botonCsc);
			this->Controls->Add(this->botonCot);
			this->Controls->Add(this->botonSec);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->botonTanh);
			this->Controls->Add(this->botonCosh);
			this->Controls->Add(this->botonSinh);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->botonTan);
			this->Controls->Add(this->botonCos);
			this->Controls->Add(this->botonSin);
			this->Controls->Add(this->botonExp);
			this->Controls->Add(this->boton_divi_t);
			this->Controls->Add(this->botonBorrar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->botonC);
			this->Controls->Add(this->botonCE);
			this->Controls->Add(this->botonMasMenos);
			this->Controls->Add(this->botonResultado);
			this->Controls->Add(this->botonDecimal);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->botonPI);
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
		double firstDigit, secondDigit, soloOperation, result;
		String^ operators;
		fun_tras* funTras = new fun_tras();
		typedef number<cpp_dec_float<50>> cpp_dec_float_50;
		cpp_dec_float_50* soloOperation_1;

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
	String^ cadenaReemplazada = (txtDisplay->Text)->Replace(".", ",");
	firstDigit = Double::Parse(cadenaReemplazada);
	//double firstDigit = System::Convert::ToDouble(cadenaReemplazada);

	txtDisplay->Text = "";
	operators = NumbersOp->Text;
}
	  
private: System::Void botonDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
	//Existe un error que no deja utilizar "." a la hora de hacer el Parse por ende se usa ","
	if (!txtDisplay->Text->Contains("."))
	{
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}

private: System::Void botonResultado_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cadenaReemplazada = (txtDisplay->Text)->Replace(".", ",");
	secondDigit = Double::Parse(cadenaReemplazada);

	// Se aplica el operador de suma
	if (operators == "+")
	{
		result = firstDigit + secondDigit;
		txtDisplay->Text = System::Convert::ToString(result)->Replace(",", ".");
	}

	// Se aplica el operador de resta
	else if (operators == "-")
	{
		result = firstDigit - secondDigit;
		txtDisplay->Text = System::Convert::ToString(result)->Replace(",", ".");
	}

	// Se aplica el operador de multiplicacion
	else if (operators == "x")
	{
		result = firstDigit * secondDigit;
		txtDisplay->Text = System::Convert::ToString(result)->Replace(",", ".");
	}

	// Se aplica el operador de division ÷
	else if (operators == "÷")
	{
		result = firstDigit / secondDigit;
		txtDisplay->Text = System::Convert::ToString(result)->Replace(",", ".");
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

private: System::Void botonCE_Click(System::Object^ sender, System::EventArgs^ e) {

	txtDisplay->Clear();

}
private: System::Void botonPI_Click(System::Object^ sender, System::EventArgs^ e) {

	txtDisplay->Text = ("3.14159265358979323846");
}
private: System::Void botonSec_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ txtDisplayText = txtDisplay->Text;
	std::string soloOperationStr = marshal_as<std::string>(txtDisplayText);
	cpp_dec_float_50 soloOperation_1 = boost::lexical_cast<cpp_dec_float_50>(soloOperationStr);
	//// Operación y asignación
	soloOperation_1 = funTras->cos_t(soloOperation_1);

	//// Convertir de cpp_dec_float_50 a System::String y asignar al txtDisplay->Text
	txtDisplay->Text = gcnew String(boost::lexical_cast<std::string>(soloOperation_1).c_str());
}

private: System::Void botonCot_Click(System::Object^ sender, System::EventArgs^ e) {
	soloOperation = Double::Parse(txtDisplay->Text);
	soloOperation = (1/Math::Tan(soloOperation));
	txtDisplay->Text = System::Convert::ToString(soloOperation);
}

private: System::Void botonCsc_Click(System::Object^ sender, System::EventArgs^ e) {
	soloOperation = Double::Parse(txtDisplay->Text);
	soloOperation = (1/Math::Sin(soloOperation));
	txtDisplay->Text = System::Convert::ToString(soloOperation);
}

private: System::Void botonCos_Click(System::Object^ sender, System::EventArgs^ e) {
	soloOperation = Double::Parse(txtDisplay->Text);
	soloOperation = Math::Cos(soloOperation);
	txtDisplay->Text = System::Convert::ToString(soloOperation);
}
private: System::Void boton_divi_t_Click(System::Object^ sender, System::EventArgs^ e) {
	soloOperation = Double::Parse(txtDisplay->Text);
	soloOperation = (1/soloOperation);
	txtDisplay->Text = System::Convert::ToString(soloOperation);
}
private: System::Void botonExp_Click(System::Object^ sender, System::EventArgs^ e) {
	soloOperation = Double::Parse(txtDisplay->Text);
	soloOperation = Math::Exp(soloOperation);
	txtDisplay->Text = System::Convert::ToString(soloOperation);
}
};
}
