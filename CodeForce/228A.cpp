#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int l = 4, n;
    set<int> arr;

    while(l--)
    {
        cin >> n;
        arr.insert(n);
    }
    
    cout <<  4 - arr.size();
}