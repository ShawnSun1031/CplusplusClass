#include <iostream>
using namespace std;

class solution
{
public:
    int reverse(int x);
};
int solution::reverse(int x)
{
	int ans = 0;
	while (x)
	{
		int change;
		change = ans * 10 + x % 10;
		if (change / 10 != ans)
			return 0;
		ans = change;
		x = x / 10;
	}
	return ans;
}


int main()
{
	int ans = 0;
	solution rev;

	cout << "Enter some integers and it will reverse.\n";
	while (1)
	{
		cin >> ans;
		cout << rev.reverse(ans) << endl;
	}
}
