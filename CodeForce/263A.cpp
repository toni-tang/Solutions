#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    vector<vector<int> > matrix;
    int n;

    for(int x = 0; x < 5; x++)
    {
        vector<int> temp;
        for(int y = 0; y < 5; y++)
        {
            cin >> n;
            temp.push_back(n);
        }
        matrix.push_back(temp);
        temp.clear();
    }

    for(int y = 0; y < 5; y++)
    {
        for(int x = 0; x < 5; x++)
        {
            if(matrix[x][y] == 1)
            {
                cout << abs(2-x) + abs(2-y);   
                break;
            }
        }
    }

}