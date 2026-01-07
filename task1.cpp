#include <iostream>
using namespace std;

int main(){
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "************************************************************" << endl;
    cout << "                   NUMBER GUESSING GAME                      " << endl;
    cout << "************************************************************" << endl;

    do{
        cout << "Enter a number between 1 - 100: ";
        cin >> guess;
        tries++;

        if(guess > num){
            cout << "Guess is too high!" << endl;
        }else if(guess < num){
            cout << "Guess is too low!" << endl;
        }
        else{
            cout << "Correct! You got it right!" << endl;
            cout << "You tried " << tries << " number of times!" << endl;
        }
    }while(guess != num);

    cout << "************************************************************" << endl;

}

