#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int games;
    int a = 0, d = 0;
    string winner;

    cin >> games;
    cin >> winner;

    for(int x = 0; x < games; x++)
    {
        if(winner[x] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }

    if(a == d)
    {
        cout << "Friendship";
    }
    else if(a > d)
    {
        cout << "Anton";
    }
    else
    {
        cout << "Danik";
    }
}