#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> a, b;
    int input;
    int x, y;
    int res = 0;

    cin >> input;
    while(input--)
    {
        cin >> x >> y;
        a.push_back(x);
        b.push_back(y);
    }

    for(int i = 0; i < a.size(); i++)
    {
        for(int j = 0; j < b.size(); j++)
        {
            if(a[i] == b[j])
            {
                res++;
            }
        }
    }

    cout << res;
}