#include <iostream>

using namespace std;

int* get_ptr_for_int(int value)
{
    return &value;  // Don't do this!
}

void print_int_ptr(const int* p)
{
    cout << "Value at " << p << " is " << *p << endl;
}

void set_int_ptr(int* p, int value)
{
    *p = value;
}

int main()
{
    cout << "Pointer to statically allocated memory" << endl;
    int x = 3;
    print_int_ptr(&x);
    set_int_ptr(&x, 5);
    print_int_ptr(&x);

    cout << endl << "Pointer to dynamically allocated memory" << endl;
    int* y = new int;
    *y = 3;
    print_int_ptr(y);
    set_int_ptr(y, 5);
    print_int_ptr(y);
    delete y;

    // Don't do this!
    cout << endl << "Pointer to statically allocated memory outside scope" << endl;
    int* z = get_ptr_for_int(3);
    print_int_ptr(z);
    set_int_ptr(z, 5);
    print_int_ptr(z);
    delete z;

    return 0;
}

