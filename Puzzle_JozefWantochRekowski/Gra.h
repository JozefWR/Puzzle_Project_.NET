#pragma once
#include "About.h"
#include "Gra.h"
#include "Puzzle.h"
#include "msclr\marshal_cppstd.h"
#include "Board.h"
#include <fstream> 


namespace Puzzle_JozefWantochRekowski {

	
	

	using namespace System;
	using namespace System::Media;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	using namespace std;
	
	ref class MyForm;	

	/// <summary>
	/// Summary for Gra
	/// </summary>
	public ref class Gra : public System::Windows::Forms::Form
	{
	public:
		Gra(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
			this->game= new Puzzle();

			
			
		}
		Gra(String ^imie, MyForm ^parent)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			
			this->game= new Puzzle();

			

			this->parent = parent;

			LosowanieObrazkow();

			game->SetGracz(marshal_as<std::string>(imie));
			
			label1->Text = marshal_as<String^>(game->GetGracz());
		}

		void SetTitle(String ^title);
		void Back();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Gra()
		{
			if (components)
			{
				delete components;
			}
		}

		MyForm ^parent;
		Puzzle *game;
		int pierwszykawalek; //Klikanie


	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  wzorzec;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label26;




	private: System::Windows::Forms::ToolStripMenuItem^  boardToolStripMenuItem;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Gra::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->boardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->wzorzec = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->wzorzec))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox28))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem, 
				this->helpToolStripMenuItem, this->boardToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1463, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->newToolStripMenuItem, 
				this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &Gra::newToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Gra::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Gra::aboutToolStripMenuItem_Click);
			// 
			// boardToolStripMenuItem
			// 
			this->boardToolStripMenuItem->Name = L"boardToolStripMenuItem";
			this->boardToolStripMenuItem->Size = System::Drawing::Size(117, 20);
			this->boardToolStripMenuItem->Text = L"Last Player\'s Board";
			this->boardToolStripMenuItem->Click += gcnew System::EventHandler(this, &Gra::boardToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(135, 145);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Gra::pictureBox1_Click_1);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(0, 178);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(135, 145);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Gra::pictureBox2_Click_1);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(0, 329);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(135, 145);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Gra::pictureBox3_Click_1);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(0, 480);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(135, 145);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Gra::pictureBox4_Click_1);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(0, 631);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(135, 145);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Gra::pictureBox5_Click_1);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(141, 27);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(135, 145);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 6;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Gra::pictureBox6_Click_1);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(282, 27);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(135, 145);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 7;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Gra::pictureBox7_Click_1);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(423, 27);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(135, 145);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 8;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Gra::pictureBox8_Click_1);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(564, 27);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(135, 145);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 9;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Gra::pictureBox9_Click_1);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(141, 178);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(135, 145);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 10;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &Gra::pictureBox10_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(282, 178);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(135, 145);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 11;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &Gra::pictureBox11_Click_1);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Location = System::Drawing::Point(423, 178);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(135, 145);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 12;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &Gra::pictureBox12_Click_1);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Location = System::Drawing::Point(564, 178);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(135, 145);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 13;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &Gra::pictureBox13_Click_1);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Location = System::Drawing::Point(141, 329);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(135, 145);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 14;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &Gra::pictureBox14_Click_1);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Location = System::Drawing::Point(282, 329);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(135, 145);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 15;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &Gra::pictureBox15_Click_1);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Location = System::Drawing::Point(423, 329);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(135, 145);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 16;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &Gra::pictureBox16_Click_1);
			// 
			// pictureBox17
			// 
			this->pictureBox17->Location = System::Drawing::Point(564, 329);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(135, 145);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 17;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Click += gcnew System::EventHandler(this, &Gra::pictureBox17_Click_1);
			// 
			// pictureBox18
			// 
			this->pictureBox18->Location = System::Drawing::Point(141, 480);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(135, 145);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 18;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &Gra::pictureBox18_Click_1);
			// 
			// pictureBox19
			// 
			this->pictureBox19->Location = System::Drawing::Point(282, 480);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(135, 145);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox19->TabIndex = 19;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &Gra::pictureBox19_Click_1);
			// 
			// pictureBox20
			// 
			this->pictureBox20->Location = System::Drawing::Point(423, 480);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(135, 145);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox20->TabIndex = 20;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &Gra::pictureBox20_Click_1);
			// 
			// pictureBox21
			// 
			this->pictureBox21->Location = System::Drawing::Point(564, 480);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(135, 145);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox21->TabIndex = 21;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &Gra::pictureBox21_Click_1);
			// 
			// pictureBox22
			// 
			this->pictureBox22->Location = System::Drawing::Point(141, 631);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(135, 145);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox22->TabIndex = 22;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &Gra::pictureBox22_Click_1);
			// 
			// pictureBox23
			// 
			this->pictureBox23->Location = System::Drawing::Point(423, 631);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(135, 145);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox23->TabIndex = 23;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &Gra::pictureBox23_Click_1);
			// 
			// pictureBox24
			// 
			this->pictureBox24->Location = System::Drawing::Point(282, 631);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(135, 145);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox24->TabIndex = 24;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Click += gcnew System::EventHandler(this, &Gra::pictureBox24_Click_1);
			// 
			// pictureBox25
			// 
			this->pictureBox25->Location = System::Drawing::Point(564, 631);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(135, 145);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox25->TabIndex = 25;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Click += gcnew System::EventHandler(this, &Gra::pictureBox25_Click_1);
			// 
			// wzorzec
			// 
			this->wzorzec->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->wzorzec->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"wzorzec.Image")));
			this->wzorzec->Location = System::Drawing::Point(1097, 32);
			this->wzorzec->Name = L"wzorzec";
			this->wzorzec->Size = System::Drawing::Size(338, 366);
			this->wzorzec->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->wzorzec->TabIndex = 26;
			this->wzorzec->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Yellow;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(1088, 648);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(338, 102);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Gra::button1_Click);
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(1088, 429);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(363, 83);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox27->TabIndex = 28;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox28.BackgroundImage")));
			this->pictureBox28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox28->Location = System::Drawing::Point(1088, 533);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(363, 83);
			this->pictureBox28->TabIndex = 29;
			this->pictureBox28->TabStop = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(1097, 439);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(338, 55);
			this->label1->TabIndex = 55;
			this->label1->Text = L"Player\'s Name";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Location = System::Drawing::Point(1130, 545);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 57);
			this->label2->TabIndex = 59;
			this->label2->Text = L"Score:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Black;
			this->label26->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::Yellow;
			this->label26->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label26->Location = System::Drawing::Point(1269, 545);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(49, 57);
			this->label26->TabIndex = 53;
			this->label26->Text = L"0";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Gra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1463, 847);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->wzorzec);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox28);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Gra";
			this->Text = L"\\";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->wzorzec))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox28))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private : void LosowanieObrazkow() 
		  {
			  
			  array <String^>^ files = System::IO::Directory::GetFiles("Puzelki\\");
			  
			  this->game->Inicjalizacja();
			  this->game->Losowanie();

			  
			  pierwszykawalek=1;
			 
			  this->pictureBox1->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(0)]);
			  this->pictureBox6->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(1)]);
			  this->pictureBox7->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(2)]);
			  this->pictureBox8->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(3)]);
			  this->pictureBox9->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(4)]);
			  this->pictureBox2->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(5)]);
			  this->pictureBox10->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(6)]);
			  this->pictureBox11->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(7)]);
			  this->pictureBox12->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(8)]);
			  this->pictureBox13->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(9)]);
			  this->pictureBox3->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(10)]);
			  this->pictureBox14->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(11)]);
			  this->pictureBox15->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(12)]);
			  this->pictureBox16->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(13)]);
			  this->pictureBox17->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(14)]);
			  this->pictureBox4->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(15)]);
			  this->pictureBox18->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(16)]);
			  this->pictureBox19->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(17)]);
			  this->pictureBox20->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(18)]);
			  this->pictureBox21->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(19)]);
			  this->pictureBox5->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(20)]);
			  this->pictureBox22->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(21)]);
			  this->pictureBox24->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(22)]);
			  this->pictureBox23->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(23)]);
			  this->pictureBox25->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(24)]);

		  }
private : void PrzypisanieObrazkow() 
		  {
			  array <String^>^ files = System::IO::Directory::GetFiles("Puzelki\\");
			 
			  this->pictureBox1->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(0)]);
			  this->pictureBox6->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(1)]);
			  this->pictureBox7->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(2)]);
			  this->pictureBox8->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(3)]);
			  this->pictureBox9->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(4)]);
			  this->pictureBox2->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(5)]);
			  this->pictureBox10->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(6)]);
			  this->pictureBox11->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(7)]);
			  this->pictureBox12->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(8)]);
			  this->pictureBox13->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(9)]);
			  this->pictureBox3->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(10)]);
			  this->pictureBox14->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(11)]);
			  this->pictureBox15->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(12)]);
			  this->pictureBox16->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(13)]);
			  this->pictureBox17->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(14)]);
			  this->pictureBox4->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(15)]);
			  this->pictureBox18->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(16)]);
			  this->pictureBox19->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(17)]);
			  this->pictureBox20->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(18)]);
			  this->pictureBox21->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(19)]);
			  this->pictureBox5->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(20)]);
			  this->pictureBox22->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(21)]);
			  this->pictureBox24->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(22)]);
			  this->pictureBox23->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(23)]);
			  this->pictureBox25->Image = gcnew Drawing::Bitmap(files[this->game->Zwroc(24)]);


		  }
private : void Roznekliknicia(int IdPicturbox) 
		  {
			  
			 if (pierwszykawalek== 1)
			 {
				 this->game->SetSwap_a(IdPicturbox);
			 	
				 pierwszykawalek = 2;	 
			 }
			 else //if(clickNr == 2)
			 {
				this->game->SetSwap_b(IdPicturbox);
			
				this->game->Swap();

				MieczeSwietlne();

				PrzypisanieObrazkow();

				if (this->game->Sprawdz()==true)
				{
					Wygrana();

					this->label26->Text = gcnew String(this->game->Kroki().ToString());

					MessageBox::Show("Gratuluje Wygra³eœ gre!");


			
					
					this->pictureBox1->Enabled= false;
					this->pictureBox2->Enabled= false;
					this->pictureBox3->Enabled= false;
					this->pictureBox4->Enabled= false;
					this->pictureBox5->Enabled= false;
					this->pictureBox6->Enabled= false;
					this->pictureBox7->Enabled= false;
					this->pictureBox8->Enabled= false;
					this->pictureBox9->Enabled= false;
					this->pictureBox10->Enabled= false;
					this->pictureBox11->Enabled= false;
					this->pictureBox12->Enabled= false;
					this->pictureBox13->Enabled= false;
					this->pictureBox14->Enabled= false;
					this->pictureBox15->Enabled= false;
					this->pictureBox16->Enabled= false;
					this->pictureBox17->Enabled= false;
					this->pictureBox18->Enabled= false;
					this->pictureBox19->Enabled= false;
					this->pictureBox20->Enabled= false;
					this->pictureBox21->Enabled= false;
					this->pictureBox22->Enabled= false;
					this->pictureBox23->Enabled= false;
					this->pictureBox24->Enabled= false;
					this->pictureBox25->Enabled= false;


					fstream plik1;
						
					plik1.open( "ostatni gracz.txt", ios::app );
					if(plik1.good())
						{
							
							plik1 << this->game->GetGracz() ;
							plik1 <<"\n";
						
							plik1.close();
						}
					
					


					fstream plik2;
					
					plik2.open( "score gracz.txt", ios::app );
					if(plik2.good())
						{
							
							plik2 <<this->game->KrokiZwroc();
							plik2 <<"\n";

							plik2.close();
						}
					


					}
					else
					{	

						this->label26->Text = gcnew String(this->game->Kroki().ToString());
				
					}

					pierwszykawalek = 1;
				
			 }

		  }

private: System::Void pictureBox1_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(0);
		 
		 }
private: System::Void pictureBox2_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(5);
		 
		 }
private: System::Void pictureBox3_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(10);
		 
		 }
private: System::Void pictureBox4_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(15);
		
		 }
private: System::Void pictureBox5_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(20);
		 
		 }
private: System::Void pictureBox6_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(1);
		 
		 }
private: System::Void pictureBox7_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(2);
		 
		 }
private: System::Void pictureBox8_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(3);
		 
		 }
private: System::Void pictureBox9_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(4);
		 
		 }
private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(6);

		 }
private: System::Void pictureBox11_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(7);
		 
		 }
private: System::Void pictureBox12_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(8);
		 
		 }
private: System::Void pictureBox13_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(9);
		 
		 }
private: System::Void pictureBox14_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(11);
		 
		 }
private: System::Void pictureBox15_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(12);
		 
		 }
private: System::Void pictureBox16_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(13);
		 
		 }
private: System::Void pictureBox17_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(14);
		 
		 }
private: System::Void pictureBox18_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(16);
		 
		 }
private: System::Void pictureBox19_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(17);
		 
		 }
private: System::Void pictureBox20_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(18);
		 
		 }
private: System::Void pictureBox21_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(19);
		 
		 }
private: System::Void pictureBox22_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(21);
		 
		 }
private: System::Void pictureBox24_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(22);
		 
		 }
private: System::Void pictureBox23_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(23);
		 
		 }
private: System::Void pictureBox25_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 Roznekliknicia(24);
		 
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		 Application::Exit();

		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		 About ^about = gcnew About();
			
		 about->ShowDialog();
		 
		 }
private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 
		 SoundPlayer ^intromenu = gcnew SoundPlayer();
		 intromenu->SoundLocation = Application::StartupPath + "\\2.wav";

		 intromenu->Play();

		 this->Back();
		
		 delete this;
		 
		 
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		 Application::Exit();

		 }
private: System::Void boardToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		 Board ^board = gcnew Board();
			
		 board->ShowDialog();

		 }
private: void MieczeSwietlne(){

	SoundPlayer ^dzwiek = gcnew SoundPlayer();
	dzwiek->SoundLocation = Application::StartupPath + "\\1.wav";

    dzwiek->Play();

}

private: void Wygrana(){

	SoundPlayer ^wyg = gcnew SoundPlayer();
	wyg->SoundLocation = Application::StartupPath + "\\3.wav";

    wyg->Play();

}
};
}
