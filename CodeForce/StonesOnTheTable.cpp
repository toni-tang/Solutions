#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int num, res = 0;
    string str;

    cin >> num >> str;

    for(int x = 1; x < num; x++)
    {
        if(str[x-1] == str[x]) res++;
    }

    cout << res;
}