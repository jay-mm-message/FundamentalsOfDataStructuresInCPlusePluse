#include "Rectangle.h"
#include <iostream>

int
main(void) {

    using namespace std;

    Rectangle r1(1, 3, 5, 7);
    Rectangle r2(1, 3, 5, 5);

    if (r1 == r2) {
        cout << "r1 == r2" << endl;
    } else {
        cout << "r1 != r2" << endl;
    }

    cout << r1;

    cout << "r1 area is : " << r1.GetHeight() * r1.GetWidth() << endl;
    cout << "r2 area is : " << r2.GetHeight() * r2.GetWidth() << endl;

    if (r1 < r2) {
        cout << "r1 < r2, r1 area is " << r1.GetHeight() * r1.GetWidth() << endl;
    } else {
        cout << "r2 < r1, r2 area is " << r2.GetHeight() * r2.GetWidth() << endl;
    }
    return 0;
}