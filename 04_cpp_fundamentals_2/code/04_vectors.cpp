#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int> & v)
{
    cout << "Elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";  // [] doesn't check bounds
    }
    cout << endl;
}

int main()
{
    vector<int> v(10);

    print(v);
    cout << "Size:     " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        v.at(i) = i * i; // .at() checks bounds
    }

    print(v);

    cout << "First:    " << v.front() << endl;
    cout << "Last:     " << v.back() << endl;

    for (int i = v.size(); i < 20; i++)
    {
        v.push_back(i * i); // Append element at the end
    }

    print(v);
    cout << "Size:     " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    v.pop_back(); // Remove the last element

    print(v);
    cout << "Size:     " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    v.clear(); // Remove all elements

    print(v);
    cout << "Size:     " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    return 0;
}

