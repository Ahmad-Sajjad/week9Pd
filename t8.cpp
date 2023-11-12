#include <iostream>
#include <string>
using namespace std;
string broken(string correct, string actual);
main()
{
    string correct, actual;
    cout << "Enter the correct phrase: ";
    getline(cin, correct);
    cout << "Enter what you actually typed: ";
    getline(cin, actual);
    cout << "Broken keys: " << broken(correct, actual);
}
string broken(string correct, string actual)
{
    string st = "";
    string st1 = "";
    for (int i = 0; i < correct.length(); i++)
    {
        if (actual[i] != correct[i] && st1.find(correct[i]) == string::npos)
        {
            st += correct[i];
            st1 += correct[i];
        }
    }
    return st;
}