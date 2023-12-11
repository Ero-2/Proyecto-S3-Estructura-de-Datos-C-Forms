#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ graphLabel;
	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ treeLabel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ queueLabel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ stackLabel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ linkedListLabel;
	private: System::Windows::Forms::Label^ label1;

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
			this->graphLabel = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->treeLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->queueLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->stackLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkedListLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// graphLabel
			// 
			this->graphLabel->AutoSize = true;
			this->graphLabel->Location = System::Drawing::Point(422, 332);
			this->graphLabel->Name = L"graphLabel";
			this->graphLabel->Size = System::Drawing::Size(0, 13);
			this->graphLabel->TabIndex = 29;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(277, 333);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 13);
			this->label5->TabIndex = 28;
			this->label5->Text = L"GRAFO:";
			// 
			// treeLabel
			// 
			this->treeLabel->AutoSize = true;
			this->treeLabel->Location = System::Drawing::Point(422, 281);
			this->treeLabel->Name = L"treeLabel";
			this->treeLabel->Size = System::Drawing::Size(0, 13);
			this->treeLabel->TabIndex = 27;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(277, 282);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 13);
			this->label4->TabIndex = 26;
			this->label4->Text = L"ARBOL:";
			// 
			// queueLabel
			// 
			this->queueLabel->AutoSize = true;
			this->queueLabel->Location = System::Drawing::Point(422, 231);
			this->queueLabel->Name = L"queueLabel";
			this->queueLabel->Size = System::Drawing::Size(0, 13);
			this->queueLabel->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(274, 232);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 24;
			this->label3->Text = L"COLA:";
			// 
			// stackLabel
			// 
			this->stackLabel->AutoSize = true;
			this->stackLabel->Location = System::Drawing::Point(419, 185);
			this->stackLabel->Name = L"stackLabel";
			this->stackLabel->Size = System::Drawing::Size(0, 13);
			this->stackLabel->TabIndex = 23;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(276, 185);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 22;
			this->label2->Text = L"PILA:";
			// 
			// linkedListLabel
			// 
			this->linkedListLabel->AutoSize = true;
			this->linkedListLabel->Location = System::Drawing::Point(419, 133);
			this->linkedListLabel->Name = L"linkedListLabel";
			this->linkedListLabel->Size = System::Drawing::Size(0, 13);
			this->linkedListLabel->TabIndex = 21;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(276, 133);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 13);
			this->label1->TabIndex = 20;
			this->label1->Text = L"LISTA ENLAZADA";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(696, 479);
			this->Controls->Add(this->graphLabel);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->treeLabel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->queueLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->stackLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->linkedListLabel);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
