#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <math.h>

using namespace std;

int main()
{
    unordered_map<char,int> hash;
    string str;
    int i = 1;
    int res = 0;

    cin >> str;

    for(int x = 'a'; x < (int)'z'+1; x++)
    {
        hash[x] = i++;
    }

    int clock = abs(hash.at((int)str[0]) - hash.at((int)'a'));
    int counter_clock = abs(26 - (hash.at((int)str[0]) - hash.at((int)'a')));
    if(clock <= counter_clock)
    {
        res += clock;
    }
    else
    {
        res += counter_clock;
    }

    for(int x = 0; x < str.length()-1; x++)
    {
        clock = abs(hash.at((int)str[x+1])-hash.at((int)str[x]));
        counter_clock = (26 - abs(hash.at((int)str[x])-hash.at((int)str[x+1])));
        if(clock < counter_clock)
        {
            res += clock;
        }
        else
        {
            res += counter_clock;
        }
    }

    cout << res << endl;
}