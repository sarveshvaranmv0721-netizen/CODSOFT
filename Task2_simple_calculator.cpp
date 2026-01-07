#include <iostream>
using namespace std;

int main(){
    cout << "************************************************************" << endl;
    cout << "                   SIMPLE CALCULATOR                     " << endl;
    cout << "************************************************************" << endl;
    double n1, n2;
    char op;

    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Enter the operation to be performed(+, -, *, /): ";
    cin >> op;
    switch(op){
        case '+':
        cout << "The result is: " << n1+n2 << endl;
        cout << "************************************************************" << endl;
        break;

        case '-':
        cout << "The result is: " << n1-n2 << endl;
        cout << "************************************************************" << endl;
        break;

        case '*':
        cout << "The result is: " << n1*n2 << endl;
        cout << "************************************************************" << endl;
        break;

        case '/':
        if(n2 == 0){
            cout << "Division by zero is not possible!" << endl;
            cout << "************************************************************" << endl;
        }else{
            cout << "The result is: " << n1/n2 << endl;
            cout << "************************************************************" << endl;
        }
        break;

        default:
        cout << "Invalid input!!" << endl;
        cout << "************************************************************" << endl;
        break;

    }
}
