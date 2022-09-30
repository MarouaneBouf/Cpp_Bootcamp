#include <iostream>

using namespace std;


int main(void)
{
    cout << "Guess the number: " << " ";
    int guess;
    int tries = 0;
    cin >> guess;
    while (guess != 10 and tries++ < 50)
    {
        cout << "Wrong guess!" << "\n" << "Guess again: ";
        cin >> guess;
    }

    cout << "OHHHH! You got it!" << "\n";
    return 0;
}