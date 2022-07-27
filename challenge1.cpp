#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
int arr_size = 0;
char letters[0];
int letterCounter(char check);
// START OF MAIN
main()
{
    char check;
    int count;
    cout << "Enter Size of the Array :-";
    cin >> arr_size;
    letters[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        cout << "Enter a Character :- ";
        cin >> letters[i];
    }
    cout << "Enter a Character To Count:- ";
    cin >> check;
    count = letterCounter(check);
    cout << count;
}
// FUNCTIONS
int letterCounter(char check)
{
    int count = 0;
    for (int i = 0; i < arr_size; i++)
    {
        if (letters[i] == check)
        {
            count++;
        }
    }
    return count;
}