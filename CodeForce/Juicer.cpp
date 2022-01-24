#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int numOranges, maxSize, empty;
    int waste = 0, sum = 0, n;

    cin >> numOranges >> maxSize >> empty;

    while(numOranges--)
    {
        cin >> n;
        if(n <= maxSize)
        {
            sum += n;
        }
        
        if(sum > empty)
        {
            waste++;
            sum = 0;
        }
    }

    cout << waste; 
}