#include <iostream>
#include <string>
using namespace std;

bool areAllElementsIdentical(string array[], int size);

main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    string array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> array[i];
    }
    if (areAllElementsIdentical(array, size))
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
}

bool areAllElementsIdentical(string array[], int size)
{
    for (int j = 1; j < size; j++)
    {
        if (array[j] == array[0])
        {
            return true;
        }
    }
    return false;
}
