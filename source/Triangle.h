#pragma once
#using <system.drawing.dll>
#include<iostream>
#include "Figure.h"
#include "Closed.h"
namespace ClFig{
using namespace std;
	using namespace System::Drawing;
public ref class Triangle :public Closed
	{
	protected:
		Triangle()
		{

		}
	private:
		int x1, x2, x3, y1, y2, y3;
	public:

		

		void Draw(Graphics^ gr, Pen^ pen) override
		{
			pen->Color = this->PenColor;
			gr->DrawLine(pen, x1, y1, x2, y2);
			gr->DrawLine(pen, x2, y2, x3, y3);
			gr->DrawLine(pen, x3, y3, x1, y1);
		}
		Triangle(Color PenColor, int x1, int y1, int x2, int y2, int x3, int y3)
		{	
			this->PenColor = PenColor;
			this->x1 = x1;
			this->x2 = x2;
			this->x3 = x3;
			this->y1 = y1;
			this->y2 = y2;
			this->y3 = y3;
		}

	};
}