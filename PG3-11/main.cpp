#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <vector>
#include <memory>
#include <iostream>

int main() {


    using namespace std;

    Circle* circle = new Circle();
    Rectangle* rect = new Rectangle();
   
    circle->Draw();
    rect->Draw();

    delete circle;
    delete rect;

	return 0;
}