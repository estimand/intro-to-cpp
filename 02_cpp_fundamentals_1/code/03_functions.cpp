#include <iostream>

using namespace std;

int power(int x, int n);
double power(double x, int n);

int power(int x, int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= x;
    }
    return result;
}

double power(double x, int n)
{
    double result = 1.0;
    for (int i = 1; i <= n; i++)
    {
        result *= x;
    }
    return result;
}

int main()
{
    cout << power(2, 5) << endl;
    cout << power(2.5, 2) << endl;
    return 0;
}

