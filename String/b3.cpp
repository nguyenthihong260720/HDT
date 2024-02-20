#include <iostream>

using namespace std;

bool kt(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;
    else
    {
        for (int i = 0; i < s1.length(); i++)
        {
            if (s2.find(s1[i]) == -1 || s1.find(s2[i]) == -1)
                return false;
        }
    }
    return true;
}

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    if (kt(s1, s2))
        cout << "true";
    else
        cout << "false";
    return 0;
}