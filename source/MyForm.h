#pragma once
#using <system.drawing.dll>
#include<iostream>
#include "Figure.h"
#include "Closed.h"
#include "Unclosed.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Ellipse.h"
#include "Circle.h"
#include "Square.h"
#include "list.h"


namespace OOP1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


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

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		//List<ClFig::Figure^>^ Fig = gcnew List<ClFig::Figure^>;
		ClFig::list^ headFig;
		
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1231, 470);
			this->Name = L"MyForm";
			this->Text = L"Figures";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		
		
	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Pen^ pen = gcnew Pen(Color::Black);
		ClFig::list^ curr = headFig;
		while (curr!= nullptr)
		{
			curr->Draw(e->Graphics, pen);
			curr = ++curr;
		}
	

	}

	private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		
		headFig = gcnew ClFig::list;
		ClFig::list^ curr = headFig;
		curr->add(gcnew ClFig::Circle(Color::Black, 30, 30, 30));
		curr = curr->GetMemNext();
		curr->add(gcnew ClFig::Ellipse(Color::Green, 500, 400, 200, 50));
		curr = curr->GetMemNext();
		curr->add(gcnew ClFig::Square(Color::Red, 100, 50, 50));
		curr = curr->GetMemNext();
		curr->add(gcnew ClFig::Rectangle(Color::Yellow, 200, 200, 50, 70));
		curr = curr->GetMemNext();
		curr->add(gcnew ClFig::Triangle(Color::Magenta, 700, 800, 900, 800, 690, 600));
		curr = curr->GetMemNext();
		curr->add(gcnew ClFig::Line(Color::Orange, 150, 300, 200, 400));

	}
	};
}
