#include <iostream>

using namespace std;

int main()
{
#pragma region 유클리드 호제법
	// 2개의 자연수 또는 정식의 최대 공약수를 구하시는 방식으로
	
	int x=24;
	int y=36;
	
	int result = 0;

	for (int i = 1; i <= x && i <= y; i++)
	{
		if (x % i == 0&& y % i == 0)
		{
			result = i;
		}

	}

	
#pragma endregion


	return 0;
}