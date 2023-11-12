#include <iostream>
using namespace std;
bool check(string statement);
main()
{
    string statement;
    cout << "Enter a String: ";
    getline(cin, statement);
    cout << check(statement);
}
bool check(string statement)
{
    int count = 0;
    int i = 0;
    while (statement[i] != '\0')
    {
        count++;
        i++;
    }
    if (count % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}