#include "Rectangle.h"
#include <iostream>

int
main(void) {

    using namespace std;

    Rectangle r1(1, 3, 5, 5);
    Rectangle r2(1, 3, 5, 5);

    if (r1 == r2) {
        cout << "r1 == r2" << endl;
    } else {
        cout << "r1 != r2" << endl;
    }

    cout << r1;
    
    return 0;
}