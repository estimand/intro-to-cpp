#include <iostream>
#include <random>
#include <string>

using namespace std;

const int N_WORDS = 15;
const string WORDS[N_WORDS] = {
    "black", "blue", "brown", "cyan", "gray", "green", "indigo", "magenta",
    "orange", "pink", "purple", "red", "violet", "white", "yellow"
};

int main()
{
    random_device rd;
    mt19937 prng(rd());
    uniform_int_distribution<> uniform(0, N_WORDS - 1);

    string target = WORDS[uniform(prng)];

    string guess(target.length(), '*');
    string used;
    int n = 0;
    char letter;
    while (guess != target)
    {
        cout << "Your current guess: " << guess << endl;
        cout << "Letter? ";
        cin >> letter;

        if (used.find(letter) != string::npos ||
            guess.find(letter) != string::npos)
        {
            cout << "You already used this letter. Try again!" << endl;
            continue;
        }

        n++;

        if (target.find(letter) == string::npos)
        {
            cout << "Sorry, this letter doesn't appear in the word." << endl;
            used += letter;
        }
        else
        {
            cout << "Good guess!" << endl;
            int position = -1;
            while (true)
            {
                position = target.find(letter, position + 1);
                if (position == string::npos) {
                    break;
                }
                guess[position] = letter;
            }
        }
    }
    cout << "You got it! "
         << "The word was \"" << target << "\". "
         << "It took you " << n << " guesses." << endl;

    return 0;
}

