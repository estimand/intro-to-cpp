#include <iostream>

using namespace std;

class Rectangle {
    int width, height;
    public:
        Rectangle(int, int);
        int area(void);
}; // Mind the semicolon!

Rectangle::Rectangle(int width, int height)
{
    this->width = width;
    this->height = height;
}

int Rectangle::area()
{
    return width * height;
}

int main()
{
    Rectangle* r = new Rectangle(3, 5);

    cout << "The area is " << r->area() << endl;
    /* Equivalently:
    cout << "Area = " << (*r).area() << endl;
    */

    /* This won't work:
    cout << "Width = " << r->width << endl;
    cout << "Height = " << r->height << endl;
    */

    delete r;

    return 0;
}

