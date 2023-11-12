#include <iostream>
using namespace std;
void calculateTime(string array[], int size);
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
    calculateTime(array, size);
}
void calculateTime(string array[], int size)
{
    int time1 = size * 2;
    int count = 0;
    for (int i = 1; i < size; i++)
    {
        if (array[i] != array[i - 1])
        {
            count++;
        }
    }
    int totalTime = time1 + count;
    cout << "Time to color: " << totalTime << " seconds";
}