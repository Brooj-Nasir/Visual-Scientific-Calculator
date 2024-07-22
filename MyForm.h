#pragma once

namespace VCPPScientificCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ standardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ scientificToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ stndardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ scientificToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ txtDisplay;

	private: System::Windows::Forms::Button^ btn_1;
	private: System::Windows::Forms::Button^ btn_clear;
	private: System::Windows::Forms::Button^ btn_point;
	private: System::Windows::Forms::Button^ btn_backspace;




	private: System::Windows::Forms::Button^ btn_3;

	private: System::Windows::Forms::Button^ btn_2;
	private: System::Windows::Forms::Button^ btn_8;


	private: System::Windows::Forms::Button^ btn_7;

	private: System::Windows::Forms::Button^ btn_6;

	private: System::Windows::Forms::Button^ btn_5;

	private: System::Windows::Forms::Button^ btn_4;
	private: System::Windows::Forms::Button^ btn_pi;
	private: System::Windows::Forms::Button^ btn_log;



	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ btn_sqrt;
	private: System::Windows::Forms::Button^ btn_sinh;


	private: System::Windows::Forms::Button^ btn_sin;

	private: System::Windows::Forms::Button^ btn_Decimal;

	private: System::Windows::Forms::Button^ btn_cube;
	private: System::Windows::Forms::Button^ btn_cosh;
	private: System::Windows::Forms::Button^ btn_x_inverse;



	private: System::Windows::Forms::Button^ btn_binary;

	private: System::Windows::Forms::Button^ btn_cos;
	private: System::Windows::Forms::Button^ btn_hexa;


	private: System::Windows::Forms::Button^ btn_tan;

	private: System::Windows::Forms::Button^ btn_tanh;
	private: System::Windows::Forms::Button^ btn_logx;


	private: System::Windows::Forms::Button^ btn_equal;

	private: System::Windows::Forms::Button^ btn_plus;
	private: System::Windows::Forms::Button^ btn_minus;
	private: System::Windows::Forms::Button^ btn_mul;
	private: System::Windows::Forms::Button^ btn_div;
	private: System::Windows::Forms::Button^ btn_0;
	private: System::Windows::Forms::Button^ btn_mod;
	private: System::Windows::Forms::Button^ btn_exp;
	private: System::Windows::Forms::Button^ btn_percent;
	private: System::Windows::Forms::Button^ btn_oct;

	private: System::Windows::Forms::Label^ lbl_Show;






	protected:

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scientificToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stndardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scientificToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_point = (gcnew System::Windows::Forms::Button());
			this->btn_backspace = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_8 = (gcnew System::Windows::Forms::Button());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->btn_6 = (gcnew System::Windows::Forms::Button());
			this->btn_5 = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_pi = (gcnew System::Windows::Forms::Button());
			this->btn_log = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->btn_sqrt = (gcnew System::Windows::Forms::Button());
			this->btn_sinh = (gcnew System::Windows::Forms::Button());
			this->btn_sin = (gcnew System::Windows::Forms::Button());
			this->btn_Decimal = (gcnew System::Windows::Forms::Button());
			this->btn_cube = (gcnew System::Windows::Forms::Button());
			this->btn_cosh = (gcnew System::Windows::Forms::Button());
			this->btn_x_inverse = (gcnew System::Windows::Forms::Button());
			this->btn_binary = (gcnew System::Windows::Forms::Button());
			this->btn_cos = (gcnew System::Windows::Forms::Button());
			this->btn_hexa = (gcnew System::Windows::Forms::Button());
			this->btn_tan = (gcnew System::Windows::Forms::Button());
			this->btn_tanh = (gcnew System::Windows::Forms::Button());
			this->btn_logx = (gcnew System::Windows::Forms::Button());
			this->btn_equal = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->btn_mul = (gcnew System::Windows::Forms::Button());
			this->btn_div = (gcnew System::Windows::Forms::Button());
			this->btn_0 = (gcnew System::Windows::Forms::Button());
			this->btn_mod = (gcnew System::Windows::Forms::Button());
			this->btn_exp = (gcnew System::Windows::Forms::Button());
			this->btn_percent = (gcnew System::Windows::Forms::Button());
			this->btn_oct = (gcnew System::Windows::Forms::Button());
			this->lbl_Show = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->stndardToolStripMenuItem, this->scientificToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(675, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->standardToolStripMenuItem,
					this->scientificToolStripMenuItem1
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// standardToolStripMenuItem
			// 
			this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
			this->standardToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->standardToolStripMenuItem->Text = L"Standard";
			this->standardToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::standardToolStripMenuItem_Click);
			// 
			// scientificToolStripMenuItem1
			// 
			this->scientificToolStripMenuItem1->Name = L"scientificToolStripMenuItem1";
			this->scientificToolStripMenuItem1->Size = System::Drawing::Size(122, 22);
			this->scientificToolStripMenuItem1->Text = L"Scientific";
			this->scientificToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::scientificToolStripMenuItem1_Click);
			// 
			// stndardToolStripMenuItem
			// 
			this->stndardToolStripMenuItem->Name = L"stndardToolStripMenuItem";
			this->stndardToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->stndardToolStripMenuItem->Text = L"Edit";
			// 
			// scientificToolStripMenuItem
			// 
			this->scientificToolStripMenuItem->Name = L"scientificToolStripMenuItem";
			this->scientificToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->scientificToolStripMenuItem->Text = L"Help";
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(12, 28);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(318, 34);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btn_1
			// 
			this->btn_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_1->Location = System::Drawing::Point(8, 119);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(78, 45);
			this->btn_1->TabIndex = 2;
			this->btn_1->Text = L"1";
			this->btn_1->UseVisualStyleBackColor = true;
			this->btn_1->Click += gcnew System::EventHandler(this, &MyForm::number_button);
			// 
			// btn_clear
			// 
			this->btn_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_clear->Location = System::Drawing::Point(170, 68);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(78, 45);
			this->btn_clear->TabIndex = 3;
			this->btn_clear->Text = L"CE";
			this->btn_clear->UseVisualStyleBackColor = true;
			this->btn_clear->Click += gcnew System::EventHandler(this, &MyForm::btn_clear_Click);
			// 
			// btn_point
			// 
			this->btn_point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_point->Location = System::Drawing::Point(89, 68);
			this->btn_point->Name = L"btn_point";
			this->btn_point->Size = System::Drawing::Size(78, 45);
			this->btn_point->TabIndex = 4;
			this->btn_point->Text = L".";
			this->btn_point->UseVisualStyleBackColor = true;
			this->btn_point->Click += gcnew System::EventHandler(this, &MyForm::btn_point_Click);
			// 
			// btn_backspace
			// 
			this->btn_backspace->Font = (gcnew System::Drawing::Font(L"Wingdings", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btn_backspace->Location = System::Drawing::Point(8, 68);
			this->btn_backspace->Name = L"btn_backspace";
			this->btn_backspace->Size = System::Drawing::Size(78, 45);
			this->btn_backspace->TabIndex = 5;
			this->btn_backspace->Text = L"?";
			this->btn_backspace->UseVisualStyleBackColor = true;
			this->btn_backspace->Click += gcnew System::EventHandler(this, &MyForm::btn_backspace_Click);
			// 
			// btn_3
			// 
			this->btn_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_3->Location = System::Drawing::Point(170, 119);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(78, 45);
			this->btn_3->TabIndex = 6;
			this->btn_3->Text = L"3";
			this->btn_3->UseVisualStyleBackColor = true;
			this->btn_3->Click += gcnew System::EventHandler(this, &MyForm::number_button);
			// 
			// btn_2
			// 
			this->btn_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_2->Location = System::Drawing::Point(89, 119);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(78, 45);
			this->btn_2->TabIndex = 7;
			this->btn_2->Text = L"2";
			this->btn_2->UseVisualStyleBackColor = true;
			this->btn_2->Click += gcnew System::EventHandler(this, &MyForm::number_button);
			// 
			// btn_8
			// 
			this->btn_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_8->Location = System::Drawing::Point(89, 220);
			this->btn_8->Name = L"btn_8";
			this->btn_8->Size = System::Drawing::Size(78, 45);
			this->btn_8->TabIndex = 8;
			this->btn_8->Text = L"8";
			this->btn_8->UseVisualStyleBackColor = true;
			this->btn_8->Click += gcnew System::EventHandler(this, &MyForm::number_button);
			// 
			// btn_7
			// 
			this->btn_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_7->Location = System::Drawing::Point(8, 220);
			this->btn_7->Name = L"btn_7";
			this->btn_7->Size = System::Drawing::Size(78, 45);
			this->btn_7->TabIndex = 9;
			this->btn_7->Text = L"7";
			this->btn_7->UseVisualStyleBackColor = true;
			this->btn_7->Click += gcnew System::EventHandler(this, &MyForm::number_button);
			// 
			// btn_6
			// 
			this->btn_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_6->Location = System::Drawing::Point(170, 169);
			this->btn_6->Name = L"btn_6";
			this->btn_6->Size = System::Drawing::Size(78, 45);
			this->btn_6->TabIndex = 10;
			this->btn_6->Text = L"6";
			this->btn_6->UseVisualStyleBackColor = true;
			this->btn_6->Click += gcnew System::EventHandler(this, &MyForm::number_button);
			// 
			// btn_5
			// 
			this->btn_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_5->Location = System::Drawing::Point(89, 170);
			this->btn_5->Name = L"btn_5";
			this->btn_5->Size = System::Drawing::Size(78, 45);
			this->btn_5->TabIndex = 11;
			this->btn_5->Text = L"5";
			this->btn_5->UseVisualStyleBackColor = true;
			this->btn_5->Click += gcnew System::EventHandler(this, &MyForm::number_button);
			// 
			// btn_4
			// 
			this->btn_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_4->Location = System::Drawing::Point(8, 169);
			this->btn_4->Name = L"btn_4";
			this->btn_4->Size = System::Drawing::Size(78, 45);
			this->btn_4->TabIndex = 12;
			this->btn_4->Text = L"4";
			this->btn_4->UseVisualStyleBackColor = true;
			this->btn_4->Click += gcnew System::EventHandler(this, &MyForm::number_button);
			// 
			// btn_pi
			// 
			this->btn_pi->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pi->Location = System::Drawing::Point(339, 67);
			this->btn_pi->Name = L"btn_pi";
			this->btn_pi->Size = System::Drawing::Size(75, 45);
			this->btn_pi->TabIndex = 13;
			this->btn_pi->Text = L"?";
			this->btn_pi->UseVisualStyleBackColor = true;
			this->btn_pi->Click += gcnew System::EventHandler(this, &MyForm::btn_pi_Click);
			// 
			// btn_log
			// 
			this->btn_log->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_log->Location = System::Drawing::Point(420, 67);
			this->btn_log->Name = L"btn_log";
			this->btn_log->Size = System::Drawing::Size(75, 45);
			this->btn_log->TabIndex = 14;
			this->btn_log->Text = L"Log";
			this->btn_log->UseVisualStyleBackColor = true;
			this->btn_log->Click += gcnew System::EventHandler(this, &MyForm::btn_log_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(170, 220);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(78, 45);
			this->button14->TabIndex = 15;
			this->button14->Text = L"9";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::number_button);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(588, 67);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 45);
			this->button15->TabIndex = 16;
			this->button15->Text = L"x^2";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// btn_sqrt
			// 
			this->btn_sqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_sqrt->Location = System::Drawing::Point(501, 67);
			this->btn_sqrt->Name = L"btn_sqrt";
			this->btn_sqrt->Size = System::Drawing::Size(75, 45);
			this->btn_sqrt->TabIndex = 17;
			this->btn_sqrt->Text = L"Sqrt";
			this->btn_sqrt->UseVisualStyleBackColor = true;
			this->btn_sqrt->Click += gcnew System::EventHandler(this, &MyForm::btn_sqrt_Click);
			// 
			// btn_sinh
			// 
			this->btn_sinh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_sinh->Location = System::Drawing::Point(339, 118);
			this->btn_sinh->Name = L"btn_sinh";
			this->btn_sinh->Size = System::Drawing::Size(75, 45);
			this->btn_sinh->TabIndex = 18;
			this->btn_sinh->Text = L"Sinh";
			this->btn_sinh->UseVisualStyleBackColor = true;
			this->btn_sinh->Click += gcnew System::EventHandler(this, &MyForm::btn_sinh_Click);
			// 
			// btn_sin
			// 
			this->btn_sin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_sin->Location = System::Drawing::Point(420, 118);
			this->btn_sin->Name = L"btn_sin";
			this->btn_sin->Size = System::Drawing::Size(75, 45);
			this->btn_sin->TabIndex = 19;
			this->btn_sin->Text = L"Sin";
			this->btn_sin->UseVisualStyleBackColor = true;
			this->btn_sin->Click += gcnew System::EventHandler(this, &MyForm::btn_sin_Click);
			// 
			// btn_Decimal
			// 
			this->btn_Decimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Decimal->Location = System::Drawing::Point(501, 118);
			this->btn_Decimal->Name = L"btn_Decimal";
			this->btn_Decimal->Size = System::Drawing::Size(75, 45);
			this->btn_Decimal->TabIndex = 20;
			this->btn_Decimal->Text = L"Dec";
			this->btn_Decimal->UseVisualStyleBackColor = true;
			this->btn_Decimal->Click += gcnew System::EventHandler(this, &MyForm::btn_Decimal_Click);
			// 
			// btn_cube
			// 
			this->btn_cube->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cube->Location = System::Drawing::Point(588, 118);
			this->btn_cube->Name = L"btn_cube";
			this->btn_cube->Size = System::Drawing::Size(75, 45);
			this->btn_cube->TabIndex = 21;
			this->btn_cube->Text = L"x^3";
			this->btn_cube->UseVisualStyleBackColor = true;
			this->btn_cube->Click += gcnew System::EventHandler(this, &MyForm::btn_cube_Click);
			// 
			// btn_cosh
			// 
			this->btn_cosh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cosh->Location = System::Drawing::Point(339, 169);
			this->btn_cosh->Name = L"btn_cosh";
			this->btn_cosh->Size = System::Drawing::Size(75, 45);
			this->btn_cosh->TabIndex = 22;
			this->btn_cosh->Text = L"Cosh";
			this->btn_cosh->UseVisualStyleBackColor = true;
			this->btn_cosh->Click += gcnew System::EventHandler(this, &MyForm::btn_cosh_Click);
			// 
			// btn_x_inverse
			// 
			this->btn_x_inverse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_x_inverse->Location = System::Drawing::Point(588, 169);
			this->btn_x_inverse->Name = L"btn_x_inverse";
			this->btn_x_inverse->Size = System::Drawing::Size(75, 45);
			this->btn_x_inverse->TabIndex = 23;
			this->btn_x_inverse->Text = L"1/x";
			this->btn_x_inverse->UseVisualStyleBackColor = true;
			this->btn_x_inverse->Click += gcnew System::EventHandler(this, &MyForm::btn_x_inverse_Click);
			// 
			// btn_binary
			// 
			this->btn_binary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_binary->Location = System::Drawing::Point(501, 169);
			this->btn_binary->Name = L"btn_binary";
			this->btn_binary->Size = System::Drawing::Size(75, 45);
			this->btn_binary->TabIndex = 24;
			this->btn_binary->Text = L"Bin";
			this->btn_binary->UseVisualStyleBackColor = true;
			this->btn_binary->Click += gcnew System::EventHandler(this, &MyForm::btn_binary_Click);
			// 
			// btn_cos
			// 
			this->btn_cos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cos->Location = System::Drawing::Point(420, 169);
			this->btn_cos->Name = L"btn_cos";
			this->btn_cos->Size = System::Drawing::Size(75, 45);
			this->btn_cos->TabIndex = 25;
			this->btn_cos->Text = L"Cos";
			this->btn_cos->UseVisualStyleBackColor = true;
			this->btn_cos->Click += gcnew System::EventHandler(this, &MyForm::btn_cos_Click);
			// 
			// btn_hexa
			// 
			this->btn_hexa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_hexa->Location = System::Drawing::Point(501, 220);
			this->btn_hexa->Name = L"btn_hexa";
			this->btn_hexa->Size = System::Drawing::Size(75, 45);
			this->btn_hexa->TabIndex = 26;
			this->btn_hexa->Text = L"Hex";
			this->btn_hexa->UseVisualStyleBackColor = true;
			this->btn_hexa->Click += gcnew System::EventHandler(this, &MyForm::btn_hexa_Click);
			// 
			// btn_tan
			// 
			this->btn_tan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_tan->Location = System::Drawing::Point(420, 220);
			this->btn_tan->Name = L"btn_tan";
			this->btn_tan->Size = System::Drawing::Size(75, 45);
			this->btn_tan->TabIndex = 27;
			this->btn_tan->Text = L"Tan";
			this->btn_tan->UseVisualStyleBackColor = true;
			this->btn_tan->Click += gcnew System::EventHandler(this, &MyForm::btn_tan_Click);
			// 
			// btn_tanh
			// 
			this->btn_tanh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_tanh->Location = System::Drawing::Point(339, 220);
			this->btn_tanh->Name = L"btn_tanh";
			this->btn_tanh->Size = System::Drawing::Size(75, 45);
			this->btn_tanh->TabIndex = 28;
			this->btn_tanh->Text = L"Tanh";
			this->btn_tanh->UseVisualStyleBackColor = true;
			this->btn_tanh->Click += gcnew System::EventHandler(this, &MyForm::btn_tanh_Click);
			// 
			// btn_logx
			// 
			this->btn_logx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_logx->Location = System::Drawing::Point(588, 220);
			this->btn_logx->Name = L"btn_logx";
			this->btn_logx->Size = System::Drawing::Size(75, 45);
			this->btn_logx->TabIndex = 29;
			this->btn_logx->Text = L"ln x";
			this->btn_logx->UseVisualStyleBackColor = true;
			this->btn_logx->Click += gcnew System::EventHandler(this, &MyForm::btn_logx_Click);
			// 
			// btn_equal
			// 
			this->btn_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_equal->Location = System::Drawing::Point(251, 65);
			this->btn_equal->Name = L"btn_equal";
			this->btn_equal->Size = System::Drawing::Size(78, 45);
			this->btn_equal->TabIndex = 30;
			this->btn_equal->Text = L"=";
			this->btn_equal->UseVisualStyleBackColor = true;
			this->btn_equal->Click += gcnew System::EventHandler(this, &MyForm::btn_equal_Click);
			// 
			// btn_plus
			// 
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_plus->Location = System::Drawing::Point(251, 117);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(78, 45);
			this->btn_plus->TabIndex = 31;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = true;
			this->btn_plus->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Operator);
			// 
			// btn_minus
			// 
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_minus->Location = System::Drawing::Point(251, 168);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(78, 45);
			this->btn_minus->TabIndex = 32;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = true;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Operator);
			// 
			// btn_mul
			// 
			this->btn_mul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_mul->Location = System::Drawing::Point(251, 219);
			this->btn_mul->Name = L"btn_mul";
			this->btn_mul->Size = System::Drawing::Size(78, 45);
			this->btn_mul->TabIndex = 33;
			this->btn_mul->Text = L"*";
			this->btn_mul->UseVisualStyleBackColor = true;
			this->btn_mul->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Operator);
			// 
			// btn_div
			// 
			this->btn_div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_div->Location = System::Drawing::Point(170, 272);
			this->btn_div->Name = L"btn_div";
			this->btn_div->Size = System::Drawing::Size(78, 45);
			this->btn_div->TabIndex = 34;
			this->btn_div->Text = L"/";
			this->btn_div->UseVisualStyleBackColor = true;
			this->btn_div->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Operator);
			// 
			// btn_0
			// 
			this->btn_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_0->Location = System::Drawing::Point(89, 270);
			this->btn_0->Name = L"btn_0";
			this->btn_0->Size = System::Drawing::Size(78, 45);
			this->btn_0->TabIndex = 35;
			this->btn_0->Text = L"0";
			this->btn_0->UseVisualStyleBackColor = true;
			this->btn_0->Click += gcnew System::EventHandler(this, &MyForm::number_button);
			// 
			// btn_mod
			// 
			this->btn_mod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_mod->Location = System::Drawing::Point(420, 270);
			this->btn_mod->Name = L"btn_mod";
			this->btn_mod->Size = System::Drawing::Size(75, 45);
			this->btn_mod->TabIndex = 36;
			this->btn_mod->Text = L"Mod";
			this->btn_mod->UseVisualStyleBackColor = true;
			// 
			// btn_exp
			// 
			this->btn_exp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_exp->Location = System::Drawing::Point(339, 270);
			this->btn_exp->Name = L"btn_exp";
			this->btn_exp->Size = System::Drawing::Size(75, 45);
			this->btn_exp->TabIndex = 37;
			this->btn_exp->Text = L"Exp";
			this->btn_exp->UseVisualStyleBackColor = true;
			// 
			// btn_percent
			// 
			this->btn_percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_percent->Location = System::Drawing::Point(588, 272);
			this->btn_percent->Name = L"btn_percent";
			this->btn_percent->Size = System::Drawing::Size(75, 45);
			this->btn_percent->TabIndex = 38;
			this->btn_percent->Text = L"%";
			this->btn_percent->UseVisualStyleBackColor = true;
			this->btn_percent->Click += gcnew System::EventHandler(this, &MyForm::btn_percent_Click);
			// 
			// btn_oct
			// 
			this->btn_oct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_oct->Location = System::Drawing::Point(501, 272);
			this->btn_oct->Name = L"btn_oct";
			this->btn_oct->Size = System::Drawing::Size(75, 45);
			this->btn_oct->TabIndex = 39;
			this->btn_oct->Text = L"Oct";
			this->btn_oct->UseVisualStyleBackColor = true;
			this->btn_oct->Click += gcnew System::EventHandler(this, &MyForm::btn_oct_Click);
			// 
			// lbl_Show
			// 
			this->lbl_Show->AutoSize = true;
			this->lbl_Show->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbl_Show->Location = System::Drawing::Point(9, 28);
			this->lbl_Show->Name = L"lbl_Show";
			this->lbl_Show->Size = System::Drawing::Size(35, 13);
			this->lbl_Show->TabIndex = 42;
			this->lbl_Show->Text = L"label3";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(675, 348);
			this->Controls->Add(this->lbl_Show);
			this->Controls->Add(this->btn_oct);
			this->Controls->Add(this->btn_percent);
			this->Controls->Add(this->btn_exp);
			this->Controls->Add(this->btn_mod);
			this->Controls->Add(this->btn_0);
			this->Controls->Add(this->btn_div);
			this->Controls->Add(this->btn_mul);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->btn_equal);
			this->Controls->Add(this->btn_logx);
			this->Controls->Add(this->btn_tanh);
			this->Controls->Add(this->btn_tan);
			this->Controls->Add(this->btn_hexa);
			this->Controls->Add(this->btn_cos);
			this->Controls->Add(this->btn_binary);
			this->Controls->Add(this->btn_x_inverse);
			this->Controls->Add(this->btn_cosh);
			this->Controls->Add(this->btn_cube);
			this->Controls->Add(this->btn_Decimal);
			this->Controls->Add(this->btn_sin);
			this->Controls->Add(this->btn_sinh);
			this->Controls->Add(this->btn_sqrt);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->btn_log);
			this->Controls->Add(this->btn_pi);
			this->Controls->Add(this->btn_4);
			this->Controls->Add(this->btn_5);
			this->Controls->Add(this->btn_6);
			this->Controls->Add(this->btn_7);
			this->Controls->Add(this->btn_8);
			this->Controls->Add(this->btn_2);
			this->Controls->Add(this->btn_3);
			this->Controls->Add(this->btn_backspace);
			this->Controls->Add(this->btn_point);
			this->Controls->Add(this->btn_clear);
			this->Controls->Add(this->btn_1);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstnum;
		double secondnum;
		double result;
		double a;
		String^ Operator;
		char Operation;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Width = 340;
		MyForm::Height = 380;
		txtDisplay->Width = 290;
	}
private: System::Void scientificToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	 MyForm::Width = 700;
	 txtDisplay->Width = 666;

}
private: System::Void standardToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	 MyForm::Width = 340;
	 MyForm::Height = 380;
	 txtDisplay->Width = 290;
}
private: System::Void number_button(System::Object^ sender, System::EventArgs^ e) {
	//number Buttons
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
private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {
	//Clear
	txtDisplay->Clear();
}
private: System::Void btn_point_Click(System::Object^ sender, System::EventArgs^ e) {
	//decimal point 
	if (!txtDisplay->Text->Contains("."))
	{
		txtDisplay->Text = txtDisplay->Text + ".";
	 }
}
private: System::Void Arithmetic_Operator(System::Object^ sender, System::EventArgs^ e) {
	//Operators
	 Button^ op = safe_cast<Button^>(sender);
	 firstnum = Double::Parse(txtDisplay->Text);
	 txtDisplay->Text = "";
	 Operator = op->Text;
	 lbl_Show->Text = System::Convert::ToString(firstnum) + " " + Operator;
}
private: System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
	secondnum = Double::Parse(txtDisplay->Text);
	if (Operator == "+") {
		result = firstnum + secondnum;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (Operator == "-") {
		result = firstnum - secondnum;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (Operator == "*") {
		result = firstnum * secondnum;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (Operator == "/") {
		result = firstnum / secondnum;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (Operator == "Mod") {
		int first, second, results;
		first = Convert::ToInt32(firstnum);
		second = Convert::ToInt32(secondnum);
		results = first % second;
		txtDisplay->Text = System::Convert::ToString(results);
	}
	else if (Operator == "Exp") {
		result = (firstnum,(1 / secondnum));
		txtDisplay->Text = System::Convert::ToString(Math::Exp((result)));
	}
}
private: System::Void btn_backspace_Click(System::Object^ sender, System::EventArgs^ e) {
	//Backspace
	if (txtDisplay->Text->Length > 0) {
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}

}
private: System::Void btn_pi_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = ("3.141592653589793238462643383279502884197");

}
private: System::Void btn_log_Click(System::Object^ sender, System::EventArgs^ e) {
	//Log
	a = Double::Parse(txtDisplay->Text);
	lbl_Show->Text = System::Convert::ToString("log" + "(" + (txtDisplay->Text) + ")");
	a = Math::Log(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void btn_sqrt_Click(System::Object^ sender, System::EventArgs^ e) {
	//Square root
	a = Double::Parse(txtDisplay->Text);
	lbl_Show->Text = System::Convert::ToString("sqrt" + "(" + (txtDisplay->Text) + ")");
	a = Math::Sqrt(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void btn_sinh_Click(System::Object^ sender, System::EventArgs^ e) {
	//Sinh
	a = Double::Parse(txtDisplay->Text);
	lbl_Show->Text = System::Convert::ToString("sinh" + "(" + (txtDisplay->Text) + ")");
	a = Math::Sinh(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void btn_cosh_Click(System::Object^ sender, System::EventArgs^ e) {
	//Cosh
	a = Double::Parse(txtDisplay->Text);
	lbl_Show->Text = System::Convert::ToString("cosh" + "(" + (txtDisplay->Text) + ")");
	a = Math::Cosh(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void btn_tanh_Click(System::Object^ sender, System::EventArgs^ e) {
	//Tanh
	a = Double::Parse(txtDisplay->Text);
	lbl_Show->Text = System::Convert::ToString("tanh" + "(" + (txtDisplay->Text) + ")");
	a = Math::Tanh(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void btn_sin_Click(System::Object^ sender, System::EventArgs^ e) {
	//Sin
	a = Double::Parse(txtDisplay->Text);
	lbl_Show->Text = System::Convert::ToString("sin" + "(" + (txtDisplay->Text) + ")");
	a = Math::Sin(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void btn_cos_Click(System::Object^ sender, System::EventArgs^ e) {
	//Cos
	a = Double::Parse(txtDisplay->Text);
	lbl_Show->Text = System::Convert::ToString("cos" + "(" + (txtDisplay->Text) + ")");
	a = Math::Cos(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void btn_tan_Click(System::Object^ sender, System::EventArgs^ e) {
	//tan
	a = Double::Parse(txtDisplay->Text);
	lbl_Show->Text = System::Convert::ToString("tan" + "(" + (txtDisplay->Text) + ")");
	a = Math::Tan(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void btn_Decimal_Click(System::Object^ sender, System::EventArgs^ e) {
	//decimal
	a = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void btn_binary_Click(System::Object^ sender, System::EventArgs^ e) {
	//Binary
	int a = int::Parse(txtDisplay->Text);
	lbl_Show->Text = txtDisplay->Text;
	txtDisplay->Text = System::Convert::ToString(a, 2);
	
}
private: System::Void btn_hexa_Click(System::Object^ sender, System::EventArgs^ e) {
	//Hexadecimal
	int a = int::Parse(txtDisplay->Text);
	txtDisplay->Text = System::Convert::ToString(a, 16);
	lbl_Show->Text = " ";
}
private: System::Void btn_oct_Click(System::Object^ sender, System::EventArgs^ e) {
	//octal
	int a = int::Parse(txtDisplay->Text);
	txtDisplay->Text = System::Convert::ToString(a, 8);
	lbl_Show->Text = " ";
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	//square
	a = Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text);
	txtDisplay->Text = Convert::ToString(a);
}

private: System::Void btn_cube_Click(System::Object^ sender, System::EventArgs^ e) {
	//cube
	a = Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text);
	txtDisplay->Text = Convert::ToString(a);
}
private: System::Void btn_x_inverse_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1/x
	a = Convert::ToDouble(1.0/Convert::ToDouble(txtDisplay->Text));
	txtDisplay->Text = Convert::ToString(a);
}
private: System::Void btn_logx_Click(System::Object^ sender, System::EventArgs^ e) {
	//Ln x
	a = System::Math::Log(Convert::ToDouble(txtDisplay-> Text));
	txtDisplay->Text = Convert::ToString(a);
}
private: System::Void btn_percent_Click(System::Object^ sender, System::EventArgs^ e) {
	//%
	a = Convert::ToDouble(txtDisplay->Text) / Convert::ToDouble(100);
	txtDisplay->Text = Convert::ToString(a);
}
};
}
