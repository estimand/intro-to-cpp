#include <iostream>
#include <random>

using namespace std;

int main()
{
    random_device rd;
    mt19937 prng(rd());
    uniform_int_distribution<> uniform(1, 100);

    int secret_number = uniform(prng);
    int guess;

    int n = 0;
    while (true)
    {
        n++;
        cout << "Guess? ";
        cin >> guess;
        if (guess == secret_number)
        {
            cout << "You got it! "
                 << "It took you " << n << " guess(es)." << endl;
            break;
        }
        if (guess < secret_number)
        {
            cout << "Go higher!" << endl;
        }
        else
        {
            cout << "Go lower!" << endl;
        }
    }

    return 0;
}

