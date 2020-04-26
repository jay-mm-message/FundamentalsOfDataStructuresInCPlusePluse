#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

class Rectangle {

    public:
        Rectangle(int, int, int, int);
        ~Rectangle();
        int GetHeight() const;
        int GetWidth() const;
        
        bool operator==(const Rectangle& s);
        bool operator < (const Rectangle& s);
        friend std::ostream& operator<< (std::ostream& out, const Rectangle& rt);
    private:
        int x1, y1, h, w;
        
};

#endif