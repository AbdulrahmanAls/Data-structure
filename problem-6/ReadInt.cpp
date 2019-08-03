#include "global.h"

int ReadInt()
{
    int input;
    bool valid = false;

    while(! valid)
    {
        cin >> input;

        if(cin.fail())
        {
            cout << "Wrong input" << endl;

            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout<<"Try again :";

        }
        else
        {
            valid = true;
        }
    }
    return input;
}