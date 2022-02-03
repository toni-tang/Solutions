#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int len, unique, x;
    string abc = "abcdefghijklmnopqrstuvwxyz";

    cin >> len >> unique;

    for(x = 0; x < unique; x++)
    {   
        cout << abc[x];
    }

    len -= unique;

    x = 0;

    while(len--)
    {
        if(x == unique)
        {
            x = 0;
        }
        cout << abc[x];
        x++;
    }

}