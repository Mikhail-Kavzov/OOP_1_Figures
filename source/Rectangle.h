#pragma once
#using <system.drawing.dll>
#include<iostream>
#include "Figure.h"
#include "Closed.h"
namespace ClFig{
using namespace std;
	using namespace System::Drawing;
public ref  class Rectangle:public Closed
	{
	protected:
		int x, y, width;
		Rectangle()
		{

		}
	private:
		int height;
	public:	

		void Draw(Graphics^ gr, Pen^ pen) override
		{
			pen->Color = this->PenColor;
			int xw = x + width;
			int yh = y + height;
			gr->DrawLine(pen, x,y,xw,y);
			gr->DrawLine(pen, xw, y, xw, yh);
			gr->DrawLine(pen, xw, yh, x, yh);
			gr->DrawLine(pen, x, yh, x,y);

		}
		Rectangle(Color PenColor,int x, int y, int width, int height)
		{
			this->PenColor = PenColor;
			this->x = x;
			this->y = y;
			this->width = width;
			this->height = height;
		}

	};
}