#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<char, int> hash;
    string str;

    cin >> str;

    for(char c : str)
    {
        hash[c] = 1;
    }

    if(hash.size()%2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}