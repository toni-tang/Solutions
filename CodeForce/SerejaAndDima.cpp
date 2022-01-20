#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int input;
    int s = 0, d = 0, nums;
    bool turn = true;
    vector<int> cards;

    cin >> input;

    int L  = 0, R = input-1;

    while(input--)
    {
        cin >> nums;
        cards.push_back(nums);
    }

    while(L != R)
    {
        if(cards[L] > cards[R])
        {
            if(turn)
            {
                s += cards[L++];
            }
            else
            {
                d += cards[L++];
            }
        }
        else
        {
            if(turn)
            {
                s += cards[R--];
            }
            else
            {
                d += cards[R--];
            }
        }
        turn = !turn;
    }

    if(turn)
    {
        s += cards[R];
    }
    else
    {
        d += cards[R];
    }

    cout << s << ' ' << d;
}