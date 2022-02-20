#pragma once
#using <system.drawing.dll>
#include<iostream>
#include "Figure.h"
#include "Unclosed.h"
namespace ClFig{
using namespace std;
	using namespace System::Drawing;
public ref  class Line :public Unclosed
	{
	private:
		int x1, x2, y1,y2;
	public:
		
		void Draw(Graphics^ gr, Pen^ pen) override
		{
			gr->DrawLine(pen, x1, y1, x2, y2);
		}
		Line(Color PenColor,int x1, int y1, int x2, int y2)
		{
			this->PenColor = PenColor;
			this->x1 = x1;
			this->x2 = x2;
			this->y1 = y1;
			this->y2 = y2;
		}

	};
}