#pragma once

namespace Project4 {
		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Summary for MyForm_Extra
		/// </summary>
		public ref class MyForm_Extra : public System::Windows::Forms::Form
		{
		public:
			MyForm_Extra(void)
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
			~MyForm_Extra()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Label^  label1;
		private: System::Windows::Forms::Label^  label2;
		private: System::Windows::Forms::Button^  button1;
		private: System::Windows::Forms::Label^  label4;
		private: System::Windows::Forms::Label^  label5;

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
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm_Extra::typeid));
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->label5 = (gcnew System::Windows::Forms::Label());
				this->SuspendLayout();
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->BackColor = System::Drawing::Color::Transparent;
				this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label1->Location = System::Drawing::Point(12, 9);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(243, 32);
				this->label1->TabIndex = 0;
				this->label1->Text = L"Invalid Command!";
				this->label1->Click += gcnew System::EventHandler(this, &MyForm_Extra::label1_Click);
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->BackColor = System::Drawing::Color::Transparent;
				this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label2->Location = System::Drawing::Point(12, 41);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(730, 32);
				this->label2->TabIndex = 1;
				this->label2->Text = L"Click \"Help\" button in Command Mode to see Commands";
				this->label2->Click += gcnew System::EventHandler(this, &MyForm_Extra::label2_Click);
				// 
				// button1
				// 
				this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
				this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->button1->Location = System::Drawing::Point(315, 112);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(75, 36);
				this->button1->TabIndex = 2;
				this->button1->Text = L"OK";
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &MyForm_Extra::button1_Click);
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->BackColor = System::Drawing::Color::Transparent;
				this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label4->Location = System::Drawing::Point(441, 154);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(270, 24);
				this->label4->TabIndex = 15;
				this->label4->Text = L"� Arslan, Zunnorain and Jamal";
				// 
				// label5
				// 
				this->label5->AutoSize = true;
				this->label5->BackColor = System::Drawing::Color::Transparent;
				this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label5->Location = System::Drawing::Point(526, 112);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(185, 36);
				this->label5->TabIndex = 18;
				this->label5->Text = L"JJ Notepad ";
				// 
				// MyForm_Extra
				// 
				this->AcceptButton = this->button1;
				this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				this->ClientSize = System::Drawing::Size(745, 191);
				this->Controls->Add(this->label5);
				this->Controls->Add(this->label4);
				this->Controls->Add(this->button1);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->label1);
				this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->Margin = System::Windows::Forms::Padding(6);
				this->Name = L"MyForm_Extra";
				this->Text = L"Error!";
				this->Load += gcnew System::EventHandler(this, &MyForm_Extra::MyForm_Extra_Load);
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
		private: System::Void MyForm_Extra_Load(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
		}
		private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		}
		};
	}
