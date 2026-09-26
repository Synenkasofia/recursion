#include <iostream>
#include <string>

using namespace std;

void reverseString(string text, int index)
{
    if (index < 0)
        return;

    cout << text[index];

    reverseString(text, index - 1);
}

int main()
{
    string text;

    cout << "Enter string: ";
    cin >> text;

    reverseString(text, text.length() - 1);

    cout << endl;

    return 0;
}
