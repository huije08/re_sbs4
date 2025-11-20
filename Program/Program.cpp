#include <iostream>

using namespace std;

void sort(int list[], int start, int end)
{
	int pivot = start;

	int left = start + 1;

	int right = end;

	while (left <= right)
	{
		// left가 end보다 작거나 같고 list[left]가\
		/// list[pivot]보다 작거나 같을떄까지 반복
		while (left <= end && list[pivot] >= list[left])
		{
			left++;
		}

		while (right > start && list[pivot] <= list[right])
		{
			right--;
		}

		if (left > right)
		{
			std::swap(list[pivot], list[right]);
		}
		else
		{
			std::swap(list[left], list[right]);
		}
	}
	sort(list, start, right - 1);
	sort(list, right - 1, end);

}

int main()
{
#pragma region 퀵정렬
	// 기준점을 획득한 다음 기준점을 기준으로 배열을 나누고 한 쪽에는
	// 기준점보다 작은 값들이 위치하게 한 다음 다른 한 쪽에는 기준점보다
	// 큰 값들이 위치하도록 합니다.

	int list[] = { 5, 3, 8, 4, 1, 6, 2, 7 };
	int size = sizeof(list) / sizeof(list[0]);

	sort(list, 0, size - 1);

	

#pragma endregion


	return 0;
}