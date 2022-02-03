#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    string str;
    unordered_map<char, int> hash;
    int res = 0;

    getline(cin >> ws, str);

    for(int x = 0; x < str.length() ; x++)
    {
        if(str[x] != ' ' && str[x] != '{' && str[x] != ',' && str[x] != '}' && hash.find(str[x]) == hash.end())
        {
            hash[str[x]] = 1;
            res++;
        }
    }

    cout << res << endl;
}