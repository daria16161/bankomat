#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Witaj w naszym banku!" << endl;
    cout << "Prosze, podaj numer PIN:";
    cin >> PIN;

    if(PIN=="1729")
    {
        cout<<"Poprawny PIN";


    }
    else
    {
        cout<<"Niepoprawny Pin";
    }

    return 0;
}
