#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int limak, bob;
    int years = 0;
    
    cin >> limak >> bob;

    while(limak <= bob)
    {
        limak *= 3;
        bob *= 2;
        years++;
    }

    cout << years;
}