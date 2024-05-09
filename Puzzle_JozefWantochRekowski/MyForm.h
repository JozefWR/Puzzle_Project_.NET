#pragma once
#include "MyForm.h"
#include "About.h"
#include "Board.h"
#include "Gra.h"
#include "msclr\marshal_cppstd.h"

namespace Puzzle_JozefWantochRekowski {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Media;

	
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

			SoundPlayer ^intromenu = gcnew SoundPlayer();
			intromenu->SoundLocation = Application::StartupPath + "\\2.wav";

			intromenu->Play();

			
		
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
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Yellow;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(829, 650);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(300, 120);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Play";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Yellow;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->Location = System::Drawing::Point(475, 650);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(350, 120);
			this->button2->TabIndex = 2;
			this->button2->Text = L"About";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Yellow;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(171, 650);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(300, 120);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(270, 550);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(740, 83);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Set Player\'s Name";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(162, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(958, 500);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Yellow;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(171, 776);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(958, 120);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Last Player\'s Board";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1264, 951);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Star Wars Puzzle";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		 SoundPlayer ^intromenu = gcnew SoundPlayer();
		 intromenu->SoundLocation = Application::StartupPath + "\\2.wav";

		 intromenu->Stop();

		 Gra ^start = gcnew Gra(this->textBox1->Text,this);

		 start->SetTitle("Star Wars Puzzle Player: "+this->textBox1->Text);

		 start->Show();

		 this->Hide();

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		 
		 About ^about = gcnew About();
			
		 about->ShowDialog();

		 
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		 
		 Application::Exit();
		 
		 }

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		 
		 Board ^board = gcnew Board();
			
		 board->ShowDialog();

		

		}
};
}
