#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long input, iceCream;
    char str;
    long long num;
    int distressedKids = 0;

    cin >> input >> iceCream;

    while(input--)
    {
        cin >> str >> num;

        if(str == '+')
        {
            iceCream += num;
        }
        else
        {
            if(iceCream < num)
            {
                distressedKids++;
            }
            else
            {
                iceCream -= num;
            }
        }
    }

    cout << iceCream << " " << distressedKids;
}