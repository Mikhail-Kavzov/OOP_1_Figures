#pragma once
#using <system.drawing.dll>
#include<iostream>
#include "Figure.h"
#include "Closed.h"
#include "Rectangle.h"
namespace ClFig{
using namespace std;
	using namespace System::Drawing;
public ref  class Square:public Rectangle
	{


	public:

		void Draw(Graphics^ gr, Pen^ pen) override
		{
			
			int xw = x + width;
			int yh = y + width;
			pen->Color = this->PenColor;
			gr->DrawLine(pen, x, y, xw, y);
			gr->DrawLine(pen, xw, y, xw, yh);
			gr->DrawLine(pen, xw, yh, x, yh);
			gr->DrawLine(pen, x, yh, x, y);
		}

		Square(Color PenColor,int x, int y, int width)
		{
			this->PenColor = PenColor;
			this->x = x;
			this->y = y;
			this->width = width;
		}
	};
}