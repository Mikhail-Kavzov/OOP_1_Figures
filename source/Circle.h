#pragma once
#using <system.drawing.dll>
#include<iostream>
#include "Figure.h"
#include "Closed.h"
#include "Ellipse.h"
namespace ClFig{
using namespace std;
	using namespace System::Drawing;
public ref class Circle :public Ellipse
	{
	private:
		int r; 
	public:

		

		void Draw(Graphics^ gr, Pen^ pen) override
		{
			pen->Color = this->PenColor;
			gr->DrawEllipse(pen, x - r, y - r, 2 * r, 2 *r);
			
		}
		Circle(Color PenColor,int x, int y, int r)
		{
			this->PenColor = PenColor;
			this->x = x;
			this->y = y;
			this->r = r;
		}

	};
}