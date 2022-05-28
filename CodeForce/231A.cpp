#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int problems;
    int solutions = 0;

    int Petya, Vasta, Tonya;   

    cin >> problems;

    while(problems > 0)
    {   
        cin >> Petya >> Vasta >> Tonya;
        
        if(Petya + Vasta + Tonya >= 2)
        {
            solutions++;
        }

        problems--;
    }

    cout << solutions;
}