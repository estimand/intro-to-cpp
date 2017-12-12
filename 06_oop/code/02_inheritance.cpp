#include <iostream>

using namespace std;

class Shape {
    public:
        Shape() {};
        virtual ~Shape() {}; // Virtual destructor
        virtual int area(void) = 0; // Pure virtual function
};

class Rectangle : public Shape {
    private:
        int width, height;
    public:
        Rectangle(int, int);
        int area(void);
};

class Square : public Rectangle {
    public:
        Square(int);
};

Rectangle::Rectangle(int width, int height)
{
    this->width = width;
    this->height = height;
}

int Rectangle::area()
{
    return width * height;
}

Square::Square(int l) : Rectangle(l, l)
{
}

int main()
{
    Square* s = new Square(5);

    cout << "The area is " << s->area() << endl;

    delete s;

    return 0;
}

