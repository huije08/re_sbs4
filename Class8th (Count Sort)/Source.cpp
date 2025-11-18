#include <iostream>

using namespace std;

int main()
{
#pragma region 계수정렬

	int list[] = { 1,1,3,1,2,3,4,4,2,5 };

	int size = sizeof(list) / sizeof(list[0]);

	int count[5] = { 0, };

	for (int i = 0; i < size; i++)
	{
		count[list[i] - 1]++;
	}

	for (int i = 0; i < 5; i++)
	{
		if (list[i] != 0) {
			for (int j = 0; j < count[i]; j++)
			{
				cout << i + 1 << " ";
			}
		}
	}
#pragma endregion



	return 0;
}