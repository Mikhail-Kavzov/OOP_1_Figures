#pragma once
#using <system.drawing.dll>
#include<iostream>
#include "Figure.h"
#include "Closed.h"
namespace ClFig{
using namespace std;
	using namespace System::Drawing;
public ref  class Ellipse :public Closed
	{
	protected:
		int x, y;
		Ellipse()
		{

		}
	private:
		int xr, yr; //большая и малая полуоси
	public:
		
		void Draw(Graphics^ gr, Pen^ pen) override
		{
			pen->Color = this->PenColor;
			gr->DrawEllipse(pen, x - xr, y - yr, 2 * xr, 2 * yr);
		}

		Ellipse(Color PenColor, int x, int y, int xr, int yr)
		{
			this->PenColor = PenColor;
			this->x = x;
			this->y = y;
			this->xr = xr;
			this->yr = yr;
		}

	};
}