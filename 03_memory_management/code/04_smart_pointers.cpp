#include <iostream>
#include <memory>

using namespace std;

int main()
{
    int n;
    cout << "How many values? ";
    cin >> n;

    // Let C++ take care of everything!
    auto x = std::make_unique<int[]>(n);

    for (int i = 0; i < n; i++)
    {
        cout << "x[" << i << "] = " << x[i] << endl;
    }

    return 0;
}

