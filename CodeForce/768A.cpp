#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    int n, total;
    vector<int> arr;
    
    cin >> total;
    while(total--)
    {
        cin >> n;
        arr.push_back(n);
    }

    sort(arr.begin(), arr.end());
    
    int count = 0;

    for(int x = 1; x < arr.size()-1; x++)
    {
        if(arr[0] < arr[x] && arr[arr.size()-1] > arr[x])
        {
            count++;
        }
    }

    cout << count;

    return 0;
}