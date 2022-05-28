#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string s1;
    string s2;

    cin >> s1 >> s2;

    int it = 0;
    int mn = min(s1.length(), s2.length());

    while(it < mn)
    {
        if(s1[it] == s2[it])
        {
            it++;
        }
        else
        {
            break;
        }
    }

    while(it < mn)
    {
        if(s1[it] != s2[it])
        {
            it++;
        }
        else
        {
            break;
        }
    }

    int mx = max(s1.length(), s2.length());
    it = max(mx, it);

    if(s1 == s2)
    {
        cout << -1 << endl;
    }
    else if(mx - it == 0)
    {
        cout << it << endl;
    }


}