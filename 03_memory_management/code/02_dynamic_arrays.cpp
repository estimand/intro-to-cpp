#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "How many values? ";
    cin >> n;

    int* x = new int[n]; // Or use new int[n]() to initialize at the same time

    cout << "x = " << x << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "x[" << i << "] = " << x[i] << endl;
    }

    // Don't forget to free the memory!
    delete[] x;

    return 0;
}

