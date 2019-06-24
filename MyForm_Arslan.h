#pragma once

namespace Project4 {
		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Summary for MyForm_Arslan
		/// </summary>
		public ref class MyForm_Arslan : public System::Windows::Forms::Form
		{
		public:
			MyForm_Arslan(void)
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
			~MyForm_Arslan()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Label^  label1;
		protected:
		private: System::Windows::Forms::Label^  label2;
		private: System::Windows::Forms::Label^  label3;
		private: System::Windows::Forms::Label^  label4;
		private: System::Windows::Forms::Label^  label5;
		private: System::Windows::Forms::Label^  label6;
		private: System::Windows::Forms::Button^  button1;
		private: System::Windows::Forms::Label^  label7;
		private: System::Windows::Forms::Label^  label8;

		private: System::Windows::Forms::Label^  label9;
		private: System::Windows::Forms::Label^  label11;

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
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm_Arslan::typeid));
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->label5 = (gcnew System::Windows::Forms::Label());
				this->label6 = (gcnew System::Windows::Forms::Label());
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->label7 = (gcnew System::Windows::Forms::Label());
				this->label8 = (gcnew System::Windows::Forms::Label());
				this->label9 = (gcnew System::Windows::Forms::Label());
				this->label11 = (gcnew System::Windows::Forms::Label());
				this->SuspendLayout();
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->BackColor = System::Drawing::Color::Transparent;
				this->label1->Font = (gcnew System::Drawing::Font(L"Bell MT", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label1->Location = System::Drawing::Point(444, 9);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(256, 56);
				this->label1->TabIndex = 0;
				this->label1->Text = L"Commands";
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->BackColor = System::Drawing::Color::Transparent;
				this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label2->Location = System::Drawing::Point(448, 65);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(247, 32);
				this->label2->TabIndex = 1;
				this->label2->Text = L"app - Append Text";
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->BackColor = System::Drawing::Color::Transparent;
				this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label3->Location = System::Drawing::Point(422, 110);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(304, 32);
				this->label3->TabIndex = 2;
				this->label3->Text = L"del - Delete whole Text";
				this->label3->Click += gcnew System::EventHandler(this, &MyForm_Arslan::label3_Click);
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->BackColor = System::Drawing::Color::Transparent;
				this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label4->Location = System::Drawing::Point(383, 156);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(403, 32);
				this->label4->TabIndex = 3;
				this->label4->Text = L"spcs - To enter n-times Spaces";
				// 
				// label5
				// 
				this->label5->AutoSize = true;
				this->label5->BackColor = System::Drawing::Color::Transparent;
				this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label5->Location = System::Drawing::Point(347, 199);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(471, 32);
				this->label5->TabIndex = 4;
				this->label5->Text = L"enter - To use \"Enter\" button n-times";
				// 
				// label6
				// 
				this->label6->AutoSize = true;
				this->label6->BackColor = System::Drawing::Color::Transparent;
				this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label6->Location = System::Drawing::Point(307, 245);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(557, 32);
				this->label6->TabIndex = 5;
				this->label6->Text = L"rpl - To replace whole text with Entered text";
				this->label6->Click += gcnew System::EventHandler(this, &MyForm_Arslan::label6_Click);
				// 
				// button1
				// 
				this->button1->Location = System::Drawing::Point(523, 334);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(105, 33);
				this->button1->TabIndex = 6;
				this->button1->Text = L"OK";
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &MyForm_Arslan::button1_Click_1);
				// 
				// label7
				// 
				this->label7->AutoSize = true;
				this->label7->BackColor = System::Drawing::Color::Transparent;
				this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label7->Location = System::Drawing::Point(500, 287);
				this->label7->Name = L"label7";
				this->label7->Size = System::Drawing::Size(171, 32);
				this->label7->TabIndex = 7;
				this->label7->Text = L"exit - To Exit";
				// 
				// label8
				// 
				this->label8->AutoSize = true;
				this->label8->BackColor = System::Drawing::Color::Transparent;
				this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label8->Location = System::Drawing::Point(427, 458);
				this->label8->Name = L"label8";
				this->label8->Size = System::Drawing::Size(270, 24);
				this->label8->TabIndex = 15;
				this->label8->Text = L"© Arslan, Zunnorain and Jamal";
				// 
				// label9
				// 
				this->label9->AutoSize = true;
				this->label9->BackColor = System::Drawing::Color::Transparent;
				this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label9->Location = System::Drawing::Point(717, 366);
				this->label9->Name = L"label9";
				this->label9->Size = System::Drawing::Size(270, 24);
				this->label9->TabIndex = 19;
				this->label9->Text = L"© Arslan, Zunnorain and Jamal";
				// 
				// label11
				// 
				this->label11->AutoSize = true;
				this->label11->BackColor = System::Drawing::Color::Transparent;
				this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label11->Location = System::Drawing::Point(78, 177);
				this->label11->Name = L"label11";
				this->label11->Size = System::Drawing::Size(185, 36);
				this->label11->TabIndex = 20;
				this->label11->Text = L"JJ Notepad ";
				// 
				// MyForm_Arslan
				// 
				this->AcceptButton = this->button1;
				this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				this->ClientSize = System::Drawing::Size(995, 397);
				this->Controls->Add(this->label11);
				this->Controls->Add(this->label9);
				this->Controls->Add(this->label8);
				this->Controls->Add(this->label7);
				this->Controls->Add(this->button1);
				this->Controls->Add(this->label6);
				this->Controls->Add(this->label5);
				this->Controls->Add(this->label4);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->label1);
				this->Name = L"MyForm_Arslan";
				this->Text = L"Commands";
				this->Load += gcnew System::EventHandler(this, &MyForm_Arslan::MyForm_Arslan_Load);
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void MyForm_Arslan_Load(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
		}
		private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		}
};
	}
