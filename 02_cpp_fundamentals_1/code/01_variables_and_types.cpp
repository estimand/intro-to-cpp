#include <iostream>

using namespace std;

const double PI = 3.1415926536;

int main()
{
    double radius;

    cout << "Radius? ";
    cin >> radius;

    auto area = radius * radius * PI; // C++11 can do type inference

    cout << "Area = " << area << endl;

    return 0;
}

