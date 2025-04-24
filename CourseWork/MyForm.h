#include "MyForm1.h" // User
#include "MyForm2.h"
#include "MyForm31.h"// Admin authorization

#pragma once

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(133, 142);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Выберите режим использования";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 239);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Пользователь";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(343, 239);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 42);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Администратор";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(380, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 47);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 453);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(500, 500);
			this->MinimumSize = System::Drawing::Size(500, 500);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ newForm = gcnew MyForm1();
		this->Hide(); // Скрытие текущей формы
		newForm->ShowDialog(); // Показ новой формы в режиме диалога
		this->Show(); // Возвращение текущей формы после закрытия диалога
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm2^ newForm2 = gcnew MyForm2();
		this->Hide(); // Скрытие текущей формы
		newForm2->ShowDialog(); // Показ новой формы в режиме диалога
		this->Show(); // Возвращение текущей формы после закрытия диалога
	}
};
}
