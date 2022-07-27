#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
int arr_size = 0;
int numbers[0];
void miniPeaks();
// START OF MAIN
main()
{
    int count;
    cout << "How many Elements you want to Enter :- ";
    cin >> arr_size;
    numbers[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        cout << "Enter a Number :- ";
        cin >> numbers[i];
    }

    miniPeaks();
}
// FUNCTIONS
void miniPeaks()
{
    int numbersNew[100] = {};
    int count = 0;
    for (int i = 1; i < arr_size - 1; i++)
    {
        if (numbers[i] > numbers[i + 1] && numbers[i] > numbers[i - 1])
        {
            numbersNew[count] = numbers[i];
            count++;
        }
    }
    cout << "[";
    for (int j = 0; j < count; j++)
    {
        cout << numbersNew[j] << ",";
    }
    cout << "]";
}