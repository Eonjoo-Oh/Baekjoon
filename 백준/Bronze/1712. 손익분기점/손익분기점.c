#include <stdio.h>

int main()
{
	int a, b, c;
	int bep;

	scanf("%d %d %d", &a, &b, &c);
	if (c - b <= 0)
	{
		printf("-1");
		return (0);
	}
	bep = (a / (c - b)) + 1;
	printf("%d", bep);
	return (0);
}