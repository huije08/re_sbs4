#include <iostream>

using namespace std;

int sieve(int n)
{
	for (int i = 0; i < n; i++)
	{

	}
}

int main()
{
#pragma region 에라토스테네스의 체

	int x = 17;

	for (int i = 2; i < x; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; j++)
		{
			if (i % j == 0) {
				flag = false;

				break;
			}
		}

		if (flag)
		{
			cout << i << " ";
		}
	}

#pragma endregion


	return 0;
}