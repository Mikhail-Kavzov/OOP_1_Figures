#pragma once
#using <system.drawing.dll>
#include<iostream>
#include "Figure.h"
namespace ClFig{
using namespace std;
	using namespace System::Drawing;
	 public ref class list {
	private:
		
		Figure^ fig;
		list^ next=nullptr;
	public:
		
		void add(Figure^ fig)
		{
			
			this->fig = fig;
		}
		list^ GetMemNext()
		{
			this->next = gcnew ClFig::list;
			return this->next;
		}
		list^ operator++()
		{
			return this->next;
		}
		void Draw(Graphics^gr,Pen^pen)
		{
			fig->Draw(gr,pen);
			
		}
	

	};
}