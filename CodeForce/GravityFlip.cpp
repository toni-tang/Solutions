#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int columns;
    int n;

    cin >> columns;

    vector<int> arr;
    
    while(columns > 0)
    {
        cin >> n;
        arr.push_back(n);
        columns--;
    }
    
    sort(arr.begin(), arr.end());

    for(int x : arr)
    {
        cout << x << ' ';
    }
}