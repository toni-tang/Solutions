#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int input, n;
    vector<int> arr;

    cin >> input;

    vector<int> res(input);

    while(input--)
    {
        cin >> n;
        arr.push_back(n);
    }

    for(int x = 0; x < arr.size(); x++)
    {
        res[arr[x]-1] = x+1;
    }

    for(auto x : res)
    {
        cout << x << " ";
    }

}