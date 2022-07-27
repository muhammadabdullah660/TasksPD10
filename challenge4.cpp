#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
int arr_size = 0;
int numbers[100];
bool isRepeatingCycle(int length);
// START OF MAIN
main()
{
    bool res;
    int length;
    cout << "Enter Length of the Array :-";
    cin >> arr_size;
    cout << "Enter Length of the Cycle :-";
    cin >> length;
    numbers[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        cout << "Enter a Number :- ";
        cin >> numbers[i];
    }

    res = isRepeatingCycle(length);
    cout << res;
}
// FUNCTIONS

bool isRepeatingCycle(int length)
{
    bool flag = true;
    if (length > arr_size)
    {
        flag = true;
    }
    else
    {
        for (int i = 0; i <= length; i++)
        {
            if (i + length < arr_size)
            {
                if (numbers[i] == numbers[length + i])
                {
                    flag = true;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
    }

    return flag;
}