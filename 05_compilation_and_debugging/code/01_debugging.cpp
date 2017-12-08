#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "How many values? ";
    cin >> n;

    int* x = new int[n]{0};

    for (int i = 0; i < n; i++)
    {
        if (i == 1)
        {
            x[i] = 1;
        }
        else
        {
            x[i] = x[i-1] + x[i-2];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << x[i] << endl;
    }

    delete[] x;

    return 0;
}

