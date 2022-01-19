#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int friends, fence, height;

	cin >> friends >> fence;

	while(friends > 0)
	{
		cin >> height;
		if(height > fence)
		{
			sum += 2;
		}
		else
		{
			sum++;
		}
		friends--;
	}

	cout << sum;
}