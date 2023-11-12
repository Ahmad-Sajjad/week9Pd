#include <iostream>
using namespace std;
bool print(int array[], int size);
main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> array[i];
    }
    if (print(array, size))
    {
        cout << "Boom!";
    }
    else
    {
        cout << "there is no 7 in the array";
    }
}
bool print(int array[], int size)
{
    int j = 0;
    int mod = 0;
    int div = 0;
    while (array[j] != 0)
    {
        mod = array[j] % 10;
        array[j] = array[j] / 10;
        if (mod == 7 || array[j] == 7)
        {
            return true;
            break;
        }
        j++;
    }
}
