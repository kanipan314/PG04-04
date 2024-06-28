#pragma once
#include "IShape.h"
#include <iostream>
#include <cmath>
#include <math.h>

class Circle : public IShape
{
public:
	void Size() override {
		reslt = 3.14f * radius * radius;
	}
	void Draw() override {
		Size();
		std::cout << "Circle : " << reslt << std::endl;
	}

private:
	float radius = 14.5f;
	float reslt;
};

