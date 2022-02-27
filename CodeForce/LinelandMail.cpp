#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int input;
    int n;
    vector<int> arr;

    cin >> input;
    while(input--)
    {   
        cin >> n;
        arr.push_back(n);
    }

    cout << abs(arr[0] - arr[1]) << " " << abs(arr[0] - arr[arr.size()-1]) << endl;

    for(int x = 1; x < arr.size()-1; x++)
    {
        if(abs(arr[x] - arr[x-1]) < abs(arr[x] - arr[x+1]))
        {
            cout << abs(arr[x] - arr[x-1]) << " ";
        }
        else
        {
            cout << abs(arr[x] - arr[x+1]) << " ";
        }
        
        if(abs(arr[x] - arr[0]) > abs(arr[x] - arr[arr.size()-1]))
        {
            cout << abs(arr[x]- arr[0]) << endl;
        }
        else
        {
            cout << abs(arr[x] - arr[arr.size()-1]) << endl;
        }
    }
    
    cout << abs(arr[arr.size()-1] - arr[arr.size()-2]) << " " << abs(arr[0] - arr[arr.size()-1]) << endl;
}