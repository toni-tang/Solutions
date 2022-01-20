#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int magnets;
    int a, b;
    int groups = 0;

    cin >> magnets;

    while(magnets--)
    {
        cin >> a;
        if(a != b) groups++;
        b = a;
    }

    cout << groups;
}