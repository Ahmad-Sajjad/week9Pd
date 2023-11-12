#include <iostream>
using namespace std;
void convertPinToDance(string pin);
main()
{
    string pin;
    cout << "Enter your PIN (4 digits): ";
    cin >> pin;
    if (pin.length() != 4 || !isdigit(pin[0]) || !isdigit(pin[1]) || !isdigit(pin[2]) || !isdigit(pin[3]))
    {
        cout << "Invalid input.";
        return 0;
    }
    convertPinToDance(pin);
}

void convertPinToDance(string pin)
{
    string moves[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    for (int i = 0; i < 4; i++)
    {

        int toAscii = pin[i] - '0';
        int index = (toAscii + i) % 10;
        cout << moves[index];
        if (i != 3)
        {
            cout << ", ";
        }
    }
}