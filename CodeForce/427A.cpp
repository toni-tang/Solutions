#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int input;
    int c = 0, res = 0, num;

    cin >> input;

    while(input--)
    {
        cin >> num;
        c += num;
        res = min(c, res);
    }

    cout << -res;
}