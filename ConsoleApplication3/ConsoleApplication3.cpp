#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int number;
int guess;
int tries = 0;

int main()
{
    cout << "Welcome! I'm thinking about a number 1..100" << endl;
   
    srand(time(NULL));
    number = rand() % 100 + 1;
    
    while (guess!=number)
    {
        tries++;
        
        cout << "Which number am I thinking about? (It's your " << tries << " try): ";
        cin >> guess;

        if (guess == number)
            cout << "Congrats, you win! It took you " << tries << " tries!" << endl;

        else if (guess > number)
            cout << "Too much!" << endl;

        else if (guess < number)
            cout << "Too little!" << endl;

    }

    system("pause");

    return 0;

}
