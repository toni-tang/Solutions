#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int numLines, birds, numShots, line, shoot;
    vector<int> wires;

    cin >> numLines;

    while(numLines--)
    {
        cin >> birds;
        wires.push_back(birds); 
    }

    cin >> numShots;

    while(numShots--)
    {
        cin >> line >> shoot;

        line--;

        if(line != 0)
        {
            wires[line-1] += shoot-1;

        }
        if(line != wires.size()-1)
        {
            wires[line+1] += abs(wires[line] - shoot);
        }

        wires[line] = 0;
    }
    
    for(int x : wires)
    {
        cout << x << endl;
    }

}