#include <iostream>
#include <string>

using namespace std;

int FindThirdDot(const string& s)
{
    size_t first = s.find('.');
    if (first == string::npos) return -1;

    size_t second = s.find('.', first + 1);
    if (second == string::npos) return -1;

    size_t third = s.find('.', second + 1);
    if (third == string::npos) return -1;

    return (int)third;
}

string Change(string s)
{
    for (size_t i = 3; i < s.length(); i += 4)
    {
        s[i] = '.'; 
    }
    return s;
}

int main()
{
    string str;

    cout << "Enter string:" << endl;
    getline(cin, str);

    int index = FindThirdDot(str);
    if (index != -1)
        cout << "Index of the 3rd dot (i): " << index << endl;
    else
        cout << "The string contains less than 3 dots." << endl;

    string dest = Change(str);

    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    return 0;
}