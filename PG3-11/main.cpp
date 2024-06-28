#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <vector>
#include <memory>
#include <iostream>

int main() {


    using namespace std;

	vector<unique_ptr<IShape>> shapes;
   
	shapes.push_back(make_unique<Circle>());
	shapes.push_back(make_unique<Rectangle>());

	for (const auto& shape : shapes) {
		shape->Draw();
	}

	return 0;
}