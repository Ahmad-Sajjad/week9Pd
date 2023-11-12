#include <iostream>
using namespace std;
string longest7LettersSegment(string words[], int num);
bool checkEligibility(string word);
main()
{
    int num;
    cout << "Enter the number of words: ";
    cin >> num;
    cout << "Enter the words, one by one: " << endl;
    string words[num];
    for (int i = 0; i < num; i++)
    {
        cin >> words[i];
    }
    cout << "Longest 7-segment word: " << longest7LettersSegment(words, num);
}
string longest7LettersSegment(string words[], int num)
{
    string st = "";
    for (int j = 0; j < num; j++)
    {
        if (words[j].length() >= num && checkEligibility(words[j]) && words[j].length() > st.length())
            st = words[j];
    }
    return st;
}

bool checkEligibility(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == 'k' || word[i] == 'm' || word[i] == 'v' || word[i] == 'w' || word[i] == 'x')
            return false;

    }
    return true;
}