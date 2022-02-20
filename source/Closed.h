#pragma once
#using <system.drawing.dll>
#include<iostream>
#include "Figure.h"
namespace ClFig{
using namespace std;
	using namespace System::Drawing;
 public ref class Closed : public Figure {
	protected:
		Color BrColor;
		Closed() {

			this->BrColor = Color::White;
		}

	};
}