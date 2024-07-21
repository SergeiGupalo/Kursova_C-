#pragma once
#include <iostream>

using namespace std;

class Circle{
protected:
    int c;
    int r;

public:
    Circle();
    Circle(int c, int r);
    string ToString();
    Circle operator % (Circle& circle);
};
