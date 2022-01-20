#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int up = 0, low = 0;
    string str;

    cin >> str;
    
    for(int x = 0; x < str.length(); x++)
    {
        if(str[x] == tolower(str[x])) low++;
        else up++;
    }
    
    if(low < up)
    {
        for(int x = 0; x < str.length(); x++)
        {
            str[x] = toupper(str[x]);
        }
    }
    else
    {
        for(int x = 0; x < str.length(); x++)
        {
            str[x] = tolower(str[x]);
        }
    }

    cout << str;
}