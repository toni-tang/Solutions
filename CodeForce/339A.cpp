#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string s, res;
    char x;
    cin >> s;

    stringstream ss(s);

    while(ss >> x)
    {
        if(x != '+')
        {
            res += x;
        }
    }

    sort(res.begin(), res.end());

    stringstream sts(res);

    sts >> x;
    cout << x;
    
    while(sts >> x)
    {
        cout << "+" << x;
    }

}