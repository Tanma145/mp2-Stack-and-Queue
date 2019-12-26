#pragma once
#include <msclr\marshal_cppstd.h>
#include "..\mp2-lab4-queue\mp2-lab4-queue\TQueue.h"

namespace CppWinForm1 {

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
		int MaxSize, Size, PopCount, PushCount;
		double p, q;

		TQueue<int>* pQueue;
		int CenterX, CenterY, Width, Height;
		Graphics^ gr;
		Random^ rnd1;
		Pen^ BlackPen;
		Pen^ WhitePen;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
		   Pen^ ALLCLPen;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			gr = CreateGraphics();
			rnd1 = gcnew Random();

			BlackPen = gcnew Pen(Color::Black);
			BlackPen->Width = 10.0F;
			WhitePen = gcnew Pen(SystemColors::Control);
			WhitePen->Width = 10.0F;

			CenterX = 125;
			CenterY = 25;
			Width = 300;
			Height = 300;

			PopCount = 0;
			PushCount = 0;
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(534, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Обновить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(615, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(793, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(793, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(793, 90);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(793, 116);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(793, 142);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(530, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Максимальная длина олчереди";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(531, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Начальная длина очереди";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(530, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(234, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Вероятность добавлеие элемента в очередь";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(530, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(233, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Вероятность удаления элемента из очереди";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(531, 145);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Скорость";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(530, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Пришло в очередь";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(636, 190);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Ушло из очереди";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(531, 213);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(636, 213);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 15;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(736, 190);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(96, 13);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Сейчас в очереди";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(736, 213);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 13);
			this->label11->TabIndex = 17;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(530, 248);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(43, 13);
			this->label12->TabIndex = 18;
			this->label12->Text = L"Голова";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(589, 248);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(37, 13);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Хвост";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(530, 272);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 13);
			this->label14->TabIndex = 20;
			this->label14->Text = L"label14";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(589, 272);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 13);
			this->label15->TabIndex = 21;
			this->label15->Text = L"label15";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(905, 364);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
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
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void DrawQueue() {
			int start = 360 * pQueue->GetHeadPos() / pQueue->GetMaxSize();
			int finish = 360 * (pQueue->GetCurSize()) / pQueue->GetMaxSize();
			gr->DrawArc(BlackPen, CenterX, CenterY, Width, Height, start, finish);
		}
		void Clean()
		{
			int start = 360 * pQueue->GetHeadPos() / pQueue->GetMaxSize();
			int finish = 360 * (pQueue->GetCurSize()) / pQueue->GetMaxSize();
			gr->DrawArc(WhitePen, CenterX, CenterY, Width, Height, start, finish);
		}
		void CleanAll()
		{
			gr->DrawArc(WhitePen, CenterX, CenterY, Width, Height, 0, 360);
		}
		private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
			MaxSize = Convert::ToInt32(textBox1->Text);
			Size = Convert::ToInt32(textBox2->Text);
			p = Convert::ToDouble(textBox3->Text);
			q = Convert::ToDouble(textBox4->Text);
			timer1->Interval = Convert::ToDouble(textBox5->Text);
					
			pQueue = new TQueue<int>(MaxSize);
			CleanAll();
			for (int i = 0; i < Size; i++)
			{
				pQueue->Push(i);
			}
			DrawQueue();
			timer1->Enabled = true;
			button2->Text = "Стоп";
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			timer1->Enabled = !timer1->Enabled;
			if (timer1->Enabled)
				button2->Text = "Стоп";
			else
				button2->Text = "Старт";
		}
		private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
			Clean();
			if ((rnd1->NextDouble() < p) && !pQueue->IsFull())
			{
				pQueue->Push(1);
				PushCount++;
			}
			if ((rnd1->NextDouble() < q) && !pQueue->IsEmpty())
			{
				pQueue->Pop();
				PopCount++;
			}
			DrawQueue();
			label8->Text = Convert::ToString(PushCount);
			label9->Text = Convert::ToString(PopCount);
			label11->Text = Convert::ToString(pQueue->GetCurSize());
			label14->Text = Convert::ToString(pQueue->GetHeadPos());
			label15->Text = Convert::ToString(pQueue->GetTailPos());
		}

};
}
