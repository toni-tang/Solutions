#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int shovel, coin, h;
    int res = 0;
    bool b = true;

    cin >> shovel >> coin;
    
    while(b)
    {
        res++;
        h = shovel * res;
        if( h % 10 == 0 || h % 10 == coin)
        {
            b = false;
        }
    }

    cout << res;
}