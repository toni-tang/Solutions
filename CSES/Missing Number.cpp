#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ll n, s = 0; // initalize varibles
    cin >> n; // take in first line of input
    for(int i = 1; i < n; ++i){ //loops through n-1 times to take input of 2nd line;
        int a; // initalize varible to hold i
        cin >> a; // take in input
        s += a; // adds up sum of the input numbers with missing number
    }
    cout << s << endl;
    cout << n*(n+1)/2-s; // formula to find the missing number by taking the sum of 1-n and substracting the sum with the missing number to find the missing number
    return 0;

}
