#include <bits/stdc++.h>
using namespace std;

string reverseAlphabets(const string &sentence)
{

    string reversedSentence;
    string word;

    for (char c : sentence)
    {
        if (c == ' ')
        {
            reversedSentence += word;
            reversedSentence += ' ';
            word = "";
        }
        else
        {
            word = c + word;
        }
    }

    reversedSentence += word;

    return reversedSentence;
}

int main()
{
    string sentence = "My name is Ritik";
    string reversed = reverseAlphabets(sentence);
    cout << "Reversed sentence: " << reversed << endl;

    return 0;
}
