#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    string str;
    int res = 0;
    char start = 'a';

    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        int clock = abs(str[i] - start);
        int counter_clock = 26 - clock;
        res += min(clock, counter_clock);
        start = str[i];
    }

    cout << res << endl;
}