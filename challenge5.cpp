#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
int arr_size = 0;
int numbers[100];
int getMaxIdx(int idx);
bool cons();
// START OF MAIN
main()
{
    int temp, idx;
    bool res;
    cout << "Enter Length of the Array :-";
    cin >> arr_size;
    numbers[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        cout << "Enter a Number :- ";
        cin >> numbers[i];
    }
    for (int i = 0; i < arr_size; i++)
    {
        idx = getMaxIdx(i);
        temp = numbers[i];
        numbers[i] = numbers[idx];
        numbers[idx] = temp;
        cout << numbers[i] << endl;
    }
    res = cons();
    cout << res;
}
// FUNCTIONS
int getMaxIdx(int idx)
{
    int small = numbers[idx];
    for (int i = idx; i < arr_size; i++)
    {

        if (numbers[i] < small)
        {
            small = numbers[i];
            idx = i;
        }
    }
    return idx;
}
bool cons()
{
    bool flag = false;
    for (int i = 0; i < arr_size - 1; i++)
    {
        if (numbers[i] == numbers[i + 1] - 1)
        {
            flag = true;
        }
        else
        {
            flag = false;
        }
    }
    return flag;
}