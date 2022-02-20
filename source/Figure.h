#pragma once
#using <system.drawing.dll>
#include<iostream>
namespace ClFig{
using namespace std;
	using namespace System::Drawing;
public ref class Figure {
	protected:
		Color PenColor;
		Figure()
		{
			this->PenColor = Color::Black;
		}
	public:
		virtual void Draw(Graphics^gr, Pen^pen) = 0;
	};
}