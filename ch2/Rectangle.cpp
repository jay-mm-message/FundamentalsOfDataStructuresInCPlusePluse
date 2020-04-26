#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(int x = 0, int y = 0, int height = 0, int width = 0) 
    : x1(x), y1(y), h(height), w(width) 
{}

Rectangle::~Rectangle() {}

int Rectangle::GetHeight() const {
    return h;
}

int Rectangle::GetWidth() const {
    return w;
}

bool Rectangle::operator==(const Rectangle& s) {

    if (this == &s) {
        return true;
    }
    
    if ((this->x1 == s.x1) && (this->y1 == s.y1) && (this->h == s.h) && (this->w == s.w)) {
            return true;
    }

    return false;
}

std::ostream& operator<< (std::ostream& out, const Rectangle& rt) {

    cout << "Rectangle is: " << rt.x1 << " " << rt.y1 << endl;
    cout << "Height is: " << rt.GetHeight() << endl;
    cout << "width is: " << rt.GetWidth() << endl;

    return out;
}