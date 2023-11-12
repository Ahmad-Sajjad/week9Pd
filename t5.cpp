#include <iostream>
using namespace std;
int commonLetters(string st1, string st2);
main()
{
    string st1, st2;
    cout << "Enter the first string: ";
    getline(cin, st1);
    cout << "Enter the second string: ";
    getline(cin, st2);
    cout << "Number of common characters: " << commonLetters(st1, st2);
}
int commonLetters(string st1, string st2)
{
    int count = 0;
    int L1 = st1.length();
    int L2 = st2.length();
    for (int i = 0; i < L1; i++)
    {
        for (int j = 0; j < L2; j++)
        {
            if (st1[i] == st2[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}