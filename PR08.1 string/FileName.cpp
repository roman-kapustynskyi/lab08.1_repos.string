#include <iostream>
#include <string>

using namespace std;

int Count(string s)
{
    int k = 0;
    size_t pos = 0;

    while ((pos = s.find("OGO", pos)) != string::npos)
    {
        k++;
        pos += 3;
    }

    pos = 0;
    while ((pos = s.find("AGA", pos)) != string::npos)
    {
        k++;
        pos += 3;
    }

    return k;
}

string Change(string s)
{
    size_t pos = 0;

    while ((pos = s.find("OGO", pos)) != string::npos)
    {
        s.replace(pos, 3, "**");
        pos += 2;
    }

    pos = 0;
    while ((pos = s.find("AGA", pos)) != string::npos)
    {
        s.replace(pos, 3, "**");
        pos += 2;
    }

    return s;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "String contained " << Count(str) << " groups of 'OGO' and 'AGA'" << endl;

    string dest = Change(str);

    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    return 0;
}