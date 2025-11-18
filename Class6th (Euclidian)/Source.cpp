#include <iostream>

using namespace std;

int function(int x, int y)
{
	// 1. 두 개의 자연수 x, y가 있을때
	//    x와 y를 나눈 나머지를 r이라고 합니다

	// 2. r이 0이 아니라면 x와 y의 최대고양ㄱ수가 y가 됩니다.

	// 3. r이 -이 아니라면 
	if (y == 0)
	{
		return x;
	}
	else
	{
		return function(y, x % y);
	}
}
int main()
{
#pragma region 유클리드 호제법
	// 2개의 자연수 또는 정식의 최대 공약수를 구하시는 방식으로

	//int x=2204;
	//int y=3610;
	//
	//int result = 0;
	//
	//for (int i = 1; i <= x && i <= y; i++)
	//{
	//	if (x % i == 0&& y % i == 0)
	//	{
	//		result = i;
	//	}
	//
	//}
	//cout << "Greatest Common Divisor : " << result << endl;

	cout << function(2304, 1440);



#pragma endregion


	return 0;
}