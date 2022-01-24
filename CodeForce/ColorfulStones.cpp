#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string a, b;
    int x, y;

    cin >> a >> b;

    for(x = 0, y = 0; y < b.size(); y++)
    {
        if(a[x] == b[y])
        {
            x++;
        }
    }

    cout << x+1;
}