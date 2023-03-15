#include <stdio.h>

int main()
{
	int	n, j, i;
	int tmp, tmp_n;

	i = 0;

	scanf("%d", &n);
	int arr[n];
	tmp_n = n;

	while (i < n)
	{
		scanf("%d", &arr[i]);
		i++;
	}

	while (tmp_n > 0)
	{
		i = 0;
		j = i + 1;
		while (j < tmp_n)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			i++;
			j++;
		}
		tmp_n--;
	}

	for (int x = 0; x < n; x++)
	{
		printf("%d\n", arr[x]);
	}

	return (0);
}
