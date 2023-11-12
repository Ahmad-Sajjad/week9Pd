#include <iostream>
using namespace std;
void transform(int array[], int size, int t);
main()
{
    int size, t;
    cout << "Enter the size of Array: ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> array[i];
    }
    cout << "Enter number of times even-odd tranformation need to be done: ";
    cin >> t;
    transform(array, size, t);
}
void transform(int array[], int size, int t)
{
    cout << "[";
    while (t != 0)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[j] % 2 == 0)
            {
                array[j] -= 2;
            }
            else
            {
                array[j] += 2;
            }
        }
        t--;
    }
    for (int j = 0; j < size; j++)
    {
        cout << array[j];
        if (j != size - 1)
        {
            cout << ", ";
        }
    }
    cout << "]";
}