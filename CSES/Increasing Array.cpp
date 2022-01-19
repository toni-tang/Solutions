#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long

int main()
{
    ll l, moves = 0, n, mx = 0;
    vector<int> vec;
    
    cin >> l;
    
    for(int i = 0; i < l; i++){
        cin >> n;
        vec.push_back(n);

        mx = max(n, mx);

        moves += mx - n;
    }


    cout << moves;
}
