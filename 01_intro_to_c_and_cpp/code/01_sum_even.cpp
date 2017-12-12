#include <iostream>

using namespace std;

int main()
{
    const int n = 10;
    int x[n] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] % 2 == 0)
        {
            result += x[i];
        }
    }

    cout << result << endl;

    return 0;
}

