#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long

int main()
{
    int count = 0, high = 0;
    string input;
    cin >> input;

    char temp = input[0];
    for(char c : input)
    {
        if(c == temp)
        {
            count++;
        }
        else
        {
            count = 1;
            temp = c;
        }
        high = max(count,high);
    }
    cout << high;
}
