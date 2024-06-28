#pragma once

#include "IShape.h"
#include <iostream>

class Rectangle : public IShape
{
public:
	void Size() override {
		reslt = width * height;
	}
	void Draw() override {
		Size();
		std::cout << "Rect : " << reslt << std::endl;
	}

private:
	float width = 4.5f;
	float height = 3.2f;
	float reslt;
};

