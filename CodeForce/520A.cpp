#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    string str;
    unordered_map<char, int> hash;

    cin >> n >> str;


    for(int x = 0; x < str.length(); x++)
    {
        str[x] = tolower(str[x]);
        if(hash.find(str[x]) == hash.end())
        {
            hash[str[x]] = 1;
        }
    }
    
    if(hash.size() >= 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
}