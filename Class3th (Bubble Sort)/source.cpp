#include <iostream>

int main()
{
#pragma region 거품 정렬
	// 서로 인접한 두 원소를 비교하여 정렬하는 알고리즘 입니다.

	int list[] = { 3, 5, 6, 1, 2 };
	int size = sizeof(list) / sizeof(list[0]);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (list[j] > list[j + 1]);
			{
				std::swap(list[j], list[j + 1]);
			}
		}
	}

	for (const auto& element : list)
	{
		std::cout << element << " ";
	}
#pragma endregion

	return 0;
}