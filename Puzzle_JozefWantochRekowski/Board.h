#pragma once
#include <fstream>
#include "msclr\marshal_cppstd.h"
#include <stack>


namespace Puzzle_JozefWantochRekowski {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace std;

	/// <summary>
	/// Summary for Board
	/// </summary>
	public ref class Board : public System::Windows::Forms::Form
	{
	public:
		Board(void)
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
		~Board()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Board::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(860, 823);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(202, 212);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 76);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(496, 212);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(189, 76);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Yellow;
			this->label3->Location = System::Drawing::Point(202, 312);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 76);
			this->label3->TabIndex = 3;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(496, 312);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(189, 76);
			this->label4->TabIndex = 4;
			this->label4->Text = L"label4";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Yellow;
			this->label5->Location = System::Drawing::Point(202, 412);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(189, 76);
			this->label5->TabIndex = 5;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Yellow;
			this->label6->Location = System::Drawing::Point(496, 512);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(189, 76);
			this->label6->TabIndex = 6;
			this->label6->Text = L"label6";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Yellow;
			this->label7->Location = System::Drawing::Point(202, 512);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(189, 76);
			this->label7->TabIndex = 7;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Yellow;
			this->label8->Location = System::Drawing::Point(496, 412);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(189, 76);
			this->label8->TabIndex = 8;
			this->label8->Text = L"label8";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Yellow;
			this->label9->Location = System::Drawing::Point(202, 95);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(153, 76);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Nick:";
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Yellow;
			this->label10->Location = System::Drawing::Point(496, 95);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(189, 76);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Score:";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Yellow;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(167, 800);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(550, 100);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Board::button1_Click);
			// 
			// Board
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(884, 911);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Board";
			this->Text = L"Last Player\'s Board";
			this->Load += gcnew System::EventHandler(this, &Board::Board_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Board::Board_KeyPress);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Board_Load(System::Object^  sender, System::EventArgs^  e) {
				
				fstream plik1;
				string nazwa_gracza;


				stack <string> board_nazwa;  // Inicjalizacja stosu LIFO nazw graczy
						
				plik1.open( "ostatni gracz.txt", ios::in );
				if(plik1.good())
				{
					while(!plik1.eof())		//Petla przepisuj¹ca do stosu a¿ dojdzie do konca pliku
					{
						
						getline(plik1, nazwa_gracza);	//odczyt pojedyñczej nazwy
						board_nazwa.push(nazwa_gracza); //Po³o¿enie na wierzcho³ek stosu ostatnio oczytanej nazwy

					}
					
					
					
					plik1.close();	//Zamkniecie pliku

				}
				board_nazwa.pop();	//Pominiecie znaku koncz¹cego plik z nazwami gracza(Usuwanie z wierzcho³ka stosu)
				nazwa_gracza=board_nazwa.top();	//Przypisanie do nazwy gracza wartoœæ wierzcho³ka stosu
				board_nazwa.pop();	//Skrócenie stosu o jeden element z wierzcho³ka

				this->label1->Text = msclr::interop::marshal_as<String ^>(nazwa_gracza);

				nazwa_gracza=board_nazwa.top();
				board_nazwa.pop();

				this->label3->Text = msclr::interop::marshal_as<String ^>(nazwa_gracza);

				nazwa_gracza=board_nazwa.top();
				board_nazwa.pop();

				this->label5->Text = msclr::interop::marshal_as<String ^>(nazwa_gracza);

				nazwa_gracza=board_nazwa.top();
				board_nazwa.pop();

				this->label7->Text = msclr::interop::marshal_as<String ^>(nazwa_gracza);




				fstream plik2;
				string ilosc_krokow;	
				stack <string> board_kroki;  // Inicjalizacja stosu LIFO ilosci krokow
				plik2.open("score gracz.txt", ios::in );
			
				if(plik2.good())
				{
				
					while(!plik2.eof())		//Petla przepisuj¹ca do stosu a¿ dojdzie do konca pliku
					{
						
						getline(plik2, ilosc_krokow);	//odczyt pojedyñczej ilosci korkow
						board_kroki.push(ilosc_krokow); //Po³o¿enie na wierzcho³ek stosu ostatnio oczytanej ilosci korkow

					}

					plik1.close();	//Zamkniecie pliku
				}
				
				board_kroki.pop();	//Pominiecie znaku koncz¹cego plik z iloscia krokow(Usuwanie z wierzcho³ka stosu)
				ilosc_krokow=board_kroki.top();	//Przypisanie do ilosci korkow wartoœæ wierzcho³ka stosu
				board_kroki.pop();

				this->label2->Text = msclr::interop::marshal_as<String ^>(ilosc_krokow);

				ilosc_krokow=board_kroki.top();
				board_kroki.pop();

				this->label4->Text = msclr::interop::marshal_as<String ^>(ilosc_krokow);

				ilosc_krokow=board_kroki.top();
				board_kroki.pop();

				this->label6->Text = msclr::interop::marshal_as<String ^>(ilosc_krokow);

				ilosc_krokow=board_kroki.top();
				board_kroki.pop();

				this->label8->Text = msclr::interop::marshal_as<String ^>(ilosc_krokow);
			 
			}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->Close();
		 
		 }
private: System::Void Board_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 
			 if(e->KeyChar == (char)Keys::Space)
			 {

				this->Close();

			 }

		 }


};
}
