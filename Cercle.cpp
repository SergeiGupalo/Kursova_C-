#include "Cercle.h"
#include <string>

Circle::Circle(){
    c = 0;
    r = 0;
}

Circle::Circle(int c, int r){
    this->c = c;
    this->r = r;
}

string Circle::ToString(){
    char buffer[256];
    snprintf(buffer, sizeof(buffer), "Центер = %d, Радиус = %d", c, r);

    return string(buffer);
}

Circle Circle::operator% (Circle& circle){
    return Circle(this->c, this->r + circle.r);
}
