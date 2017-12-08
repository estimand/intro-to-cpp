#include <iostream>

using namespace std;

int main()
{
    const int n = 5;
    int x[n] = {0, 1, 2, 3, 5};
    x[0] = 1;

    cout << "x = " << x << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "x[" << i << "] = " << x[i] << endl;
    }

    return 0;
}

