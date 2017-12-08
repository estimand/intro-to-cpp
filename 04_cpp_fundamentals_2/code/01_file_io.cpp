#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream input("01_input.txt"); // Default mode: ios::in
    if (!input) {
        cerr << "Unable to open input file" << endl;
        return 1;
    }

    ofstream output("01_output.txt"); // Default mode: ios::out | ios::trunc

    int n;
    while (input >> n)
    {
        output << n * n << endl;
    }

    input.close();
    output.close();

    return 0;
}

