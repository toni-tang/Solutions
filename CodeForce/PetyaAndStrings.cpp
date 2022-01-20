#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string a, b;
    int ans;
    
    cin >> a;
    cin >> b;

    for(int x = 0; x < a.length(); x++)
    {
        a[x] = tolower(a[x]);
    }
    for(int x = 0; x < b.length(); x++)
    {
        b[x] = tolower(b[x]);
    }

    if(a.compare(b) > 0) ans = 1;
    else if(a.compare(b) == 0) ans = 0;
    else ans = -1;

    cout << ans;
}