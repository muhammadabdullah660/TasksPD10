#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
int arr_size = 0;
int numbers[100];
int findOdd();
// START OF MAIN
main()
{
    int count;
    cout << "Enter Length of the Array :-";
    cin >> arr_size;
    numbers[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        cout << "Enter a Number :- ";
        cin >> numbers[i];
    }
    count = findOdd();
    cout << count;
}
// FUNCTIONS
int findOdd()
{
    int count = 0;
    for (int i = 0; i < arr_size; i++)
    {
        for (int j = 0; j < arr_size; j++)
        {
            if (numbers[i] == numbers[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            return numbers[i];
        }
    }
    return 0;
}