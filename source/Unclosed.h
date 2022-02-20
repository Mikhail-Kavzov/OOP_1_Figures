#pragma once
#using <system.drawing.dll>
#include<iostream>
#include "Figure.h"
namespace ClFig{
using namespace std;
	using namespace System::Drawing;
public ref  class Unclosed :public Figure {
	protected:
		Unclosed() {

		}
	};
}