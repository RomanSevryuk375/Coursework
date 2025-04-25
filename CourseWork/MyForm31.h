#include "MyForm1.h"
#include <windows.h>
#include <sql.h>
#include <sqltypes.h>
#include <sqlext.h>
#include <iostream>
#include <msclr/marshal_cppstd.h>

#pragma once

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Сводка для MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ PushToData;


	private: System::Windows::Forms::Button^ button3;

	protected:

	private:

		

		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		array<Byte>^ ConvertImageToBytes(System::Drawing::Image^ image) {
			if (image == nullptr) return nullptr;

			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg); // Можно использовать другой формат
			return ms->ToArray();
		}
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->PushToData = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(743, 57);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(177, 175);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(666, 38);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(177, 131);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(666, 38);
			this->textBox2->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(177, 219);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(666, 38);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(177, 263);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(666, 38);
			this->textBox5->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(129, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 31);
			this->label1->TabIndex = 6;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(34, 178);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 31);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Название";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(110, 222);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 31);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Тип";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(34, 266);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 31);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Описание";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(92, 310);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 31);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Фото";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(177, 310);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(256, 256);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// PushToData
			// 
			this->PushToData->Location = System::Drawing::Point(709, 497);
			this->PushToData->Name = L"PushToData";
			this->PushToData->Size = System::Drawing::Size(134, 69);
			this->PushToData->TabIndex = 12;
			this->PushToData->Text = L"Добавить";
			this->PushToData->UseVisualStyleBackColor = true;
			this->PushToData->Click += gcnew System::EventHandler(this, &MyForm3::PushToData_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(637, 57);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 51);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Выйти";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(932, 653);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->PushToData);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->MaximumSize = System::Drawing::Size(950, 700);
			this->MinimumSize = System::Drawing::Size(950, 700);
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void PushToData_Click(System::Object^ sender, System::EventArgs^ e) {
				// Обработчик события кнопки

		try {
			String^ connectionString = "Data Source = localhost\\sqlexpress;Initial Catalog = DB1;Integrated Security = True;Pooling = False;Encrypt = False;TrustServerCertificate = False";
			SqlConnection^ sqlConnection = gcnew SqlConnection(connectionString);
			sqlConnection->Open();
			MessageBox::Show("Соединение открыто.");

			String^ query = "INSERT INTO Users (Name, Type, Overview, Img) VALUES (@Name, @Type, @Overview, @Img)";
			SqlCommand^ sqlCommand = gcnew SqlCommand(query, sqlConnection);
			MessageBox::Show("Запрос создан.");

			sqlCommand->Parameters->AddWithValue("@Name", textBox1->Text);
			sqlCommand->Parameters->AddWithValue("@Type", textBox2->Text);
			sqlCommand->Parameters->AddWithValue("@Overview", textBox4->Text);
			sqlCommand->Parameters->AddWithValue("@Img", ConvertImageToBytes(pictureBox1->Image));
			MessageBox::Show("Параметры добавлены.");

			sqlCommand->ExecuteNonQuery();
			MessageBox::Show("Данные добавлены!");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка: " + ex->Message);
		}
	}
};
}
