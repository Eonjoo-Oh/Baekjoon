#include <stdio.h>
#include <stdlib.h>

int static compare (const void* first, const void* second)
{
	if (*(int*)first > *(int*)second)
		return (1);
	else if (*(int*)first < *(int*)second)
		return (-1);
	else
		return (0);
}

int	binary_search(int *arr, int len, int target)
{
	int	start;
	int	mid;
	int	end;

	start = 0;
	end = len - 1;

	while (start <= end)
	{
		mid = (start + end) / 2;
		if (arr[mid] == target)
			return (1);
		else if (arr[mid] > target)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (0);
}

int main()
{
	int	n;
	int	m;
	int	res;

	scanf("%d", &n);
	int A[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
	scanf("%d", &m);
	int B[m];
	for(int i = 0; i < m; i++)
	{
		scanf("%d", &B[i]);
	}

	qsort(A, n, sizeof(int), compare);
	for(int i = 0; i < m; i++)
	{
		res = binary_search(A, n, B[i]);
		printf("%d\n", res);
	}
}