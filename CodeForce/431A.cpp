#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<int, int> hash;
    int n, sum = 0;
    string str;

    for(int x = 1; x <= 4; x++)
    {   
        cin >> n;
        hash[x] = n; 
    } 

    cin >> str;

    for(int x = 0; x < str.length(); x++)
    {
        sum += hash.at(((int)str[x])-48);
    }

    cout << sum;
}