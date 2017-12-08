#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s("Test");

    cout << "The string \"" << s << "\" has length " << s.length() << endl;

    // Alternatively:
    cout << s.size() << endl;

    s += " and more test";

    cout << "The string \"" << s << "\" has length " << s.length() << endl;

    return 0;
}

