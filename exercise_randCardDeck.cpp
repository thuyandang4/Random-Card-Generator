#include <iostream>
#include <cstdlib>  //for ran and srand
#include <ctime>    // time
using namespace std;

int main()
{
    int rank;
    unsigned seed = time(NULL);
    srand(seed);
    const int numcards = 52;

    char flip;
    cout << "Would you like to pick a card? (Y/N): ";
    cin >> flip;

    if (flip != 'Y' && flip != 'N' && flip != 'y' && flip != 'n')
    {
        cout << "Enter (Y/N): ";
        cin >> flip;
    }

    while (flip == 'Y' || flip == 'y')
    {
        int number = rand() % numcards;
        cout << "The card you picked is ";
        if(number % 13 == 0)
            cout << "Ace of ";
        if(number % 13 == 10)
            cout << "Jack of ";
        if(number % 13 == 11)
            cout << "Queen of ";
        if(number % 13 == 12)
            cout << "King of ";
        else
            cout << (number % 13) + 1 << " of ";

        // to assign a suit
        if (number / 13 == 0)
            cout << "Clubs";
        else if (number / 13 == 1)
            cout << "Diamonds";
        else if (number / 13 == 2)
            cout << "Hearts";
        else if (number / 13 == 3)
            cout << "Spades";
        cout << " " << endl;
        cout << endl;

        cout << "Would you like to pick again? (Y/N): ";
        cin >> flip;

        if (flip != 'Y' && flip != 'N' && flip != 'y' && flip != 'n')
        {
            cout << "Enter (Y/N): ";
            cin >> flip;
        }
    }

    return 0;

}
