#include <iostream>
using namespace std;

int main()
{
    char character[8];

    for(int i = 0; i < 8; i++)
    {
        cout << "Enter any character: ";
        cin >> character[i];
    }

    cout << "\nYou entered characters:\n";

    for(int i = 0; i < 8; i++)
    {
        cout << character[i] << endl;
    }

    return 0;
}

