#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n, t, k, d;

    cin >> n >> t >> k >> d;

    int x = ceil((double) d/t);

    n = n - (x * k);

    if(n > 0)
    {
        if(d%t != 0)
        {
            cout << "YES";
        }
        else
        {
            if(n > k) cout << "YES";
            else cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }

}