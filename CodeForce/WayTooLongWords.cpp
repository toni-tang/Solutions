#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    string str;

    cin >> n;

    while(n--)
    {
        cin >> str;
        if(str.length() <= 10)
        {
            cout << str << endl;
        }
        else
        {
            string newStr = "";

            newStr += str[0];
            newStr += to_string(str.length()-2);
            newStr += str[str.length()-1];

            cout << newStr << endl;
        }
    }
}