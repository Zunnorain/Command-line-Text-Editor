#pragma once
#include"MyForm_Arslan.h"
#include"MyForm_Extra.h"
#include"Zunnorain_Form.h"
namespace Project4 {
		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Summary for Command_Mode_New
		/// </summary>
		public ref class Command_Mode_New : public System::Windows::Forms::Form
		{
		public:
			Zunnorain_Form^ zunnorain_form = gcnew Zunnorain_Form();
			Command_Mode_New(void)
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
			~Command_Mode_New()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Label^  label1;
		private: System::Windows::Forms::Button^  button1;
		private: System::Windows::Forms::Button^  button2;
		private: System::Windows::Forms::TextBox^  textBox1;

		private: System::Windows::Forms::Button^  button3;
		private: System::Windows::Forms::Button^  button4;


		private: System::Windows::Forms::Label^  label2;
		private: System::Windows::Forms::Label^  label3;
		private: System::Windows::Forms::TextBox^  textBox2;
		private: System::Windows::Forms::Button^  button5;
		private: System::Windows::Forms::Button^  button6;
		private: System::Windows::Forms::Label^  label4;
		private: System::Windows::Forms::Label^  label6;
		private: System::Windows::Forms::PrintDialog^  printDialog1;
		private: System::Windows::Forms::MenuStrip^  menuStrip1;
		private: System::Windows::Forms::ToolStripMenuItem^  printToolStripMenuItem;




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
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Command_Mode_New::typeid));
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->button2 = (gcnew System::Windows::Forms::Button());
				this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				this->button3 = (gcnew System::Windows::Forms::Button());
				this->button4 = (gcnew System::Windows::Forms::Button());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				this->button5 = (gcnew System::Windows::Forms::Button());
				this->button6 = (gcnew System::Windows::Forms::Button());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->label6 = (gcnew System::Windows::Forms::Label());
				this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
				this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
				this->printToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->menuStrip1->SuspendLayout();
				this->SuspendLayout();
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->BackColor = System::Drawing::Color::Transparent;
				this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label1->ForeColor = System::Drawing::Color::Snow;
				this->label1->Location = System::Drawing::Point(83, 28);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(422, 37);
				this->label1->TabIndex = 0;
				this->label1->Text = L"Text Editor Command Mode";
				this->label1->Click += gcnew System::EventHandler(this, &Command_Mode_New::label1_Click);
				// 
				// button1
				// 
				this->button1->BackColor = System::Drawing::Color::Transparent;
				this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
				this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button1->Location = System::Drawing::Point(90, 94);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(101, 29);
				this->button1->TabIndex = 1;
				this->button1->Text = L"Open";
				this->button1->UseVisualStyleBackColor = false;
				this->button1->Click += gcnew System::EventHandler(this, &Command_Mode_New::button1_Click);
				// 
				// button2
				// 
				this->button2->BackColor = System::Drawing::Color::Transparent;
				this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
				this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button2->Location = System::Drawing::Point(419, 94);
				this->button2->Name = L"button2";
				this->button2->Size = System::Drawing::Size(99, 29);
				this->button2->TabIndex = 2;
				this->button2->Text = L"Help";
				this->button2->UseVisualStyleBackColor = false;
				this->button2->Click += gcnew System::EventHandler(this, &Command_Mode_New::button2_Click);
				// 
				// textBox1
				// 
				this->textBox1->AcceptsTab = true;
				this->textBox1->Location = System::Drawing::Point(90, 174);
				this->textBox1->Name = L"textBox1";
				this->textBox1->Size = System::Drawing::Size(415, 22);
				this->textBox1->TabIndex = 3;
				this->textBox1->TextChanged += gcnew System::EventHandler(this, &Command_Mode_New::textBox1_TextChanged);
				// 
				// button3
				// 
				this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
				this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button3->Location = System::Drawing::Point(161, 202);
				this->button3->Name = L"button3";
				this->button3->Size = System::Drawing::Size(101, 29);
				this->button3->TabIndex = 5;
				this->button3->Text = L"Confirm";
				this->button3->UseVisualStyleBackColor = true;
				this->button3->Click += gcnew System::EventHandler(this, &Command_Mode_New::button3_Click);
				// 
				// button4
				// 
				this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
				this->button4->DialogResult = System::Windows::Forms::DialogResult::Cancel;
				this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button4->Location = System::Drawing::Point(303, 202);
				this->button4->Name = L"button4";
				this->button4->Size = System::Drawing::Size(99, 29);
				this->button4->TabIndex = 6;
				this->button4->Text = L"Cancel";
				this->button4->UseVisualStyleBackColor = true;
				this->button4->Click += gcnew System::EventHandler(this, &Command_Mode_New::button4_Click);
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->BackColor = System::Drawing::Color::Transparent;
				this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label2->ForeColor = System::Drawing::Color::Snow;
				this->label2->Location = System::Drawing::Point(87, 141);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(160, 25);
				this->label2->TabIndex = 9;
				this->label2->Text = L"Enter Command:";
				this->label2->Visible = false;
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->BackColor = System::Drawing::Color::Transparent;
				this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label3->Location = System::Drawing::Point(87, 242);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(0, 25);
				this->label3->TabIndex = 10;
				this->label3->Visible = false;
				// 
				// textBox2
				// 
				this->textBox2->AcceptsTab = true;
				this->textBox2->Location = System::Drawing::Point(90, 279);
				this->textBox2->Name = L"textBox2";
				this->textBox2->Size = System::Drawing::Size(415, 22);
				this->textBox2->TabIndex = 11;
				this->textBox2->Visible = false;
				this->textBox2->TextChanged += gcnew System::EventHandler(this, &Command_Mode_New::textBox2_TextChanged_2);
				// 
				// button5
				// 
				this->button5->BackColor = System::Drawing::Color::Transparent;
				this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
				this->button5->DialogResult = System::Windows::Forms::DialogResult::Cancel;
				this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button5->Location = System::Drawing::Point(161, 307);
				this->button5->Name = L"button5";
				this->button5->Size = System::Drawing::Size(101, 29);
				this->button5->TabIndex = 12;
				this->button5->Text = L"Confirm";
				this->button5->UseVisualStyleBackColor = false;
				this->button5->Visible = false;
				this->button5->Click += gcnew System::EventHandler(this, &Command_Mode_New::button5_Click_1);
				// 
				// button6
				// 
				this->button6->BackColor = System::Drawing::Color::Transparent;
				this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
				this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button6->Location = System::Drawing::Point(303, 307);
				this->button6->Name = L"button6";
				this->button6->Size = System::Drawing::Size(99, 29);
				this->button6->TabIndex = 13;
				this->button6->Text = L"Cancel";
				this->button6->UseVisualStyleBackColor = false;
				this->button6->Visible = false;
				this->button6->Click += gcnew System::EventHandler(this, &Command_Mode_New::button6_Click_1);
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->BackColor = System::Drawing::Color::Transparent;
				this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label4->Location = System::Drawing::Point(415, 384);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(299, 24);
				this->label4->TabIndex = 14;
				this->label4->Text = L"© Arslan, Zunnorain and Jamal";
				// 
				// label6
				// 
				this->label6->AutoSize = true;
				this->label6->BackColor = System::Drawing::Color::Transparent;
				this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label6->Location = System::Drawing::Point(527, 231);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(185, 36);
				this->label6->TabIndex = 19;
				this->label6->Text = L"JJ Notepad ";
				// 
				// printDialog1
				// 
				this->printDialog1->UseEXDialog = true;
				// 
				// menuStrip1
				// 
				this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
				this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->printToolStripMenuItem });
				this->menuStrip1->Location = System::Drawing::Point(0, 0);
				this->menuStrip1->Name = L"menuStrip1";
				this->menuStrip1->Size = System::Drawing::Size(724, 28);
				this->menuStrip1->TabIndex = 20;
				this->menuStrip1->Text = L"menuStrip1";
				// 
				// printToolStripMenuItem
				// 
				this->printToolStripMenuItem->Name = L"printToolStripMenuItem";
				this->printToolStripMenuItem->Size = System::Drawing::Size(51, 24);
				this->printToolStripMenuItem->Text = L"Print";
				this->printToolStripMenuItem->Click += gcnew System::EventHandler(this, &Command_Mode_New::printToolStripMenuItem_Click);
				// 
				// Command_Mode_New
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				this->ClientSize = System::Drawing::Size(724, 419);
				this->Controls->Add(this->label6);
				this->Controls->Add(this->label4);
				this->Controls->Add(this->button6);
				this->Controls->Add(this->button5);
				this->Controls->Add(this->textBox2);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->button4);
				this->Controls->Add(this->button3);
				this->Controls->Add(this->textBox1);
				this->Controls->Add(this->button2);
				this->Controls->Add(this->button1);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->menuStrip1);
				this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->MainMenuStrip = this->menuStrip1;
				this->Name = L"Command_Mode_New";
				this->Text = L"Command Mode";
				this->Load += gcnew System::EventHandler(this, &Command_Mode_New::Command_Mode_New_Load);
				this->menuStrip1->ResumeLayout(false);
				this->menuStrip1->PerformLayout();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
		private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		}
		public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			zunnorain_form->Show();
			zunnorain_form->Text = "Notepad (Command Mode)";
			//Opens new Text Editor Form (Zunnorain's form)
			//and remember declare "gcnew" object outside of this scope so that it can be accessed in every function
			this->label2->Show();
			this->textBox1->Show();
			this->button3->Show();
			this->button4->Show();
		}
		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Show();
			MyForm_Arslan^ obj = gcnew MyForm_Arslan();
			obj->Show();
		}
		private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			if ((this->textBox1->Text) == "app") {
				this->textBox1->Text = "";
				this->textBox1->Hide();
				this->label2->Hide();
				this->button3->Hide();
				this->button4->Hide();
				this->label3->Show();
				this->label3->Text = "Enter Text to Append: ";
				this->textBox2->Show();
				this->button5->Show();
				this->button6->Show();
			}
			else if ((this->textBox1->Text) == "del") {
				zunnorain_form->richTextBox1->Text = "";
				this->textBox1->Text = "";
			}
			else if ((this->textBox1->Text) == "spcs") {
				this->textBox1->Text = "";
				this->textBox1->Hide();
				this->label2->Hide();
				this->button3->Hide();
				this->button4->Hide();
				this->label3->Show();
				this->label3->Text = "Enter Number of Spaces: ";
				this->textBox2->Show();
				this->button5->Show();
				this->button6->Show();
			}
			else if ((this->textBox1->Text) == "enter") {
				this->textBox1->Text = "";
				this->textBox1->Hide();
				this->label2->Hide();
				this->button3->Hide();
				this->button4->Hide();
				this->label3->Show();
				this->label3->Text = "Enter Number of lines: ";
				this->textBox2->Show();
				this->button5->Show();
				this->button6->Show();
			}
			else if ((this->textBox1->Text) == "rpl") {
				this->textBox1->Text = "";
				this->textBox1->Hide();
				this->label2->Hide();
				this->button3->Hide();
				this->button4->Hide();
				this->label3->Show();
				this->label3->Text = "Enter Text to replace whole document: ";
				this->textBox2->Show();
				this->button5->Show();
				this->button6->Show();
			}
			else if ((this->textBox1->Text) == "exit") {
					this->textBox1->Text = "";
				this->Close();
				zunnorain_form->Close();
				//jamal ka form only
			}
			else {
				//shows error
				this->Show();
				MyForm_Extra^ obj1 = gcnew MyForm_Extra();
				obj1->Show();
			}


		}
		private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			this->textBox1->Text = "";
		}
		private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void textBox2_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void textBox2_TextChanged_2(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void Command_Mode_New_Load(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void button5_Click_1(System::Object^  sender, System::EventArgs^  e) {

			if ((this->label3->Text) == "Enter Number of Spaces: ") {
				int str_to_int = int::Parse(this->textBox2->Text);		//declaring string to int converter
				for (int i = 0; i <= str_to_int; i++) {
					zunnorain_form->richTextBox1->AppendText(" ");
				}
				this->textBox2->Text = "";
				this->label3->Text = "";
				this->label3->Hide();
				this->textBox2->Hide();
				this->button5->Hide();
				this->button6->Hide();
				this->label2->Show();
				this->textBox1->Show();
				this->button3->Show();
				this->button4->Show();
			}
			else if ((this->label3->Text) == "Enter Number of lines: ") {
				int str_to_int_2 = int::Parse(this->textBox2->Text);		//declaring string to int converter
				for (int i = 0; i <= str_to_int_2; i++) {
					zunnorain_form->richTextBox1->AppendText("\n");
				}
				this->textBox2->Text = "";
				this->label3->Text = "";
				this->label3->Hide();
				this->textBox2->Hide();
				this->button5->Hide();
				this->button6->Hide();
				this->label2->Show();
				this->textBox1->Show();
				this->button3->Show();
				this->button4->Show();
			}
			else if ((this->label3->Text) == "Enter Text to Append: ") {
				zunnorain_form->richTextBox1->AppendText(textBox2->Text);
				this->textBox2->Text = "";
				this->label3->Text = "";
				this->label3->Hide();
				this->textBox2->Hide();
				this->button5->Hide();
				this->button6->Hide();
				this->label2->Show();
				this->textBox1->Show();
				this->button3->Show();
				this->button4->Show();
			}
			else if ((this->label3->Text) == "Enter Text to replace whole document: ") {
				//universalobj->richtextbox->Text="";
				zunnorain_form->richTextBox1->Text = this->textBox2->Text;
				this->textBox2->Text = "";
				this->label3->Text = "";
				this->label3->Hide();
				this->textBox2->Hide();
				this->button5->Hide();
				this->button6->Hide();
				this->label2->Show();
				this->textBox1->Show();
				this->button3->Show();
				this->button4->Show();
			}
		}

		private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
			this->textBox2->Text = "";
			this->label3->Text = "";
			this->label3->Hide();
			this->textBox2->Hide();
			this->button5->Hide();
			this->button6->Hide();
			this->label2->Show();
			this->textBox1->Show();
			this->button3->Show();
			this->button4->Show();
		}
		private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		}
private: System::Void webBrowser1_DocumentCompleted(System::Object^  sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^  e) {
}
private: System::Void printToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->printDialog1->ShowDialog();
}
};
	}
