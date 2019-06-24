#pragma once
#include "About.h"

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for Zunnorain_Form
	/// </summary>
	public ref class Zunnorain_Form : public System::Windows::Forms::Form
	{
	public:
		Zunnorain_Form(void)
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
		~Zunnorain_Form()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  redoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pasteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cutToolStripMenuItem;

	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	public: System::Windows::Forms::RichTextBox^  richTextBox1;
	private:

	protected:

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
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(690, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(44, 24);
			this->fileToolStripMenuItem->Text = L"File";
			this->fileToolStripMenuItem->Click += gcnew System::EventHandler(this, &Zunnorain_Form::fileToolStripMenuItem_Click);
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->newToolStripMenuItem->Size = System::Drawing::Size(173, 26);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &Zunnorain_Form::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(173, 26);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Zunnorain_Form::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->saveToolStripMenuItem->Size = System::Drawing::Size(173, 26);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Zunnorain_Form::saveToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(173, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Zunnorain_Form::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripMenuItem1,
					this->redoToolStripMenuItem, this->copyToolStripMenuItem, this->pasteToolStripMenuItem, this->cutToolStripMenuItem
			});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(47, 24);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(120, 26);
			this->toolStripMenuItem1->Text = L"Undo";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Zunnorain_Form::toolStripMenuItem1_Click);
			// 
			// redoToolStripMenuItem
			// 
			this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
			this->redoToolStripMenuItem->Size = System::Drawing::Size(120, 26);
			this->redoToolStripMenuItem->Text = L"Redo";
			this->redoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Zunnorain_Form::redoToolStripMenuItem_Click);
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->Size = System::Drawing::Size(120, 26);
			this->copyToolStripMenuItem->Text = L"Copy";
			this->copyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Zunnorain_Form::copyToolStripMenuItem_Click);
			// 
			// pasteToolStripMenuItem
			// 
			this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
			this->pasteToolStripMenuItem->Size = System::Drawing::Size(120, 26);
			this->pasteToolStripMenuItem->Text = L"Paste";
			this->pasteToolStripMenuItem->Click += gcnew System::EventHandler(this, &Zunnorain_Form::pasteToolStripMenuItem_Click);
			// 
			// cutToolStripMenuItem
			// 
			this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
			this->cutToolStripMenuItem->Size = System::Drawing::Size(120, 26);
			this->cutToolStripMenuItem->Text = L"Cut";
			this->cutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Zunnorain_Form::cutToolStripMenuItem_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(0, 31);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(690, 313);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Zunnorain_Form::richTextBox1_TextChanged_1);
			// 
			// Zunnorain_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(690, 343);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Zunnorain_Form";
			this->RightToLeftLayout = true;
			this->Text = L"Notepad";
			this->Load += gcnew System::EventHandler(this, &Zunnorain_Form::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void fileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}



	private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->richTextBox1->Clear();
	}


	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		Stream^ mystream1;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		//About ^ about = gcnew About;
		//about->Show();
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			/*if ((mystream1 = openFileDialog1->OpenFile()) != nullptr)
			{
				String^ strfilename = openFileDialog1->InitialDirectory + openFileDialog1->FileName;

				//MessageBox::Show(strfilename);
				// Code to write the stream goes here.
				mystream1->Close();
			}*/
			this->richTextBox1->LoadFile(openFileDialog1->FileName, RichTextBoxStreamType::PlainText);
		}
	}
	private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		Stream^ myStream;
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();

		saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		saveFileDialog1->FilterIndex = 2;
		saveFileDialog1->RestoreDirectory = true;

		//String^ Filename = saveFileDialog1->FileName;
		//System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter(Filename);


		//File::WriteAllText(Project1::Forms::richTextBox1);



		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			/*if ((myStream = saveFileDialog1->OpenFile()) != nullptr)
			{
				String^ strfilename = saveFileDialog1->InitialDirectory + saveFileDialog1->FileName;
				MessageBox::Show(strfilename);
				// Code to write the stream goes here.
				myStream->Close();
			}*/
			this->richTextBox1->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText);
		}
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void cutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->richTextBox1->Cut();
	}
	private: System::Void pasteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->richTextBox1->Paste();
	}
	private: System::Void copyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->richTextBox1->Copy();
	}

	private: System::Void redoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->richTextBox1->Redo();
	}
	private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->richTextBox1->Undo();
	}
	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void richTextBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
	}
	};

}
