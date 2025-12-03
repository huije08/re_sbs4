#include <iostream>

using namespace std;

void combine(int list[], int start, int middle, int end)
{
	int count = 0;

	int left = start;
	int right = middle + 1;

	int* container = new int[end - start + 1];

	while (left <= middle && right <= end)
	{
		if (list[left] <= list[right])
		{
			container[count++] = list[left++];
		}
		else
		{
			container[count++] = list[right++];
		}



	}
}

void merge_sort(int list[], int start, int end)
{
	if (start < end)
	{
		int middle = (start + end) / 2;

		merge_sort(list, start, middle);
		merge_sort(list, middle + 1, end);

	}
}

int main()
{
#pragma region 합병정렬
	// 하나의 리스트를 두 개의 균일한 크기로 분활하고 분활된
	// 부분리스트를 정렬한 다음, 두 개의 정렬된 부분 리스트를
	// 합하여 전체가 정렬된 리스트가 되게 하는 방법입니다.

	// 1. 리스트의 길이가 1또는 0이면 이미 정렬된것으로봄
	// 
	// 2. 그렇지 않은경우
	// 2-1. 정렬되지않은 리스트를 절반으로 잘라 비슷한 크기의 두 부분 리스트로 나눕니다.
	// 2-2. 각 부분 리스트를 재귀저긍로 합병 정렬을 이용하여 정렬합니다.
	// 2-3. 두 부분 리스트를 다시 하나의 정렬된 리스트로 병합합니다.
#pragma endregion


	int list[] = { 2, 3, 5, 7, 4, 1, 8, 6 };

	int size = sizeof(list) / sizeof(list[0]);



	return 0;
}