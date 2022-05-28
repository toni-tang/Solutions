#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {};
    int input;
    int a = 0, b = 0, c = 0, min;
    int n;
    bool one, two, three;
    
    cin >> input;

    while(input--)
    {
        cin >> n;
        arr.push_back(n);

        if(n == 1)
        {
            a++;
        }
        else if(n == 2)
        {
            b++;
        }
        else
        {
            c++;
        }
    }

    if(a < b && a < c)
    {
        min = a;
    }
    else if(b < a && b < c)
    {
        min = b;
    }
    else if (c <= a && c <= b)
    {
        min = c;
    }

    cout << min << endl;
    while(min--)
    {
        one = false;
        two = false;
        three = false;
        for(int x = 0; x < arr.size(); x++)
        {
            if(arr[x] == 1 && !one)
            {
                cout << x+1;
                arr[x] = 0;
                one = true;
                cout << " ";
            }
            else if(arr[x] == 2 && !two)
            {
                cout << x+1;
                arr[x] = 0;
                two = true;
                cout << " ";
            }
            else if(arr[x] == 3 && !three)
            {
                cout << x+1;
                arr[x] = 0;
                three = true;
                cout << " ";
            }
        }
        cout << endl;
    }

}