#include <stdio.h>

int find_circle(int x)
{
	int i = 2;
	int a = 6;
	int circle_num;

	while (1)
	{
		if (i <= x && x < i + a)
			break;
		i += a;
		a += 6;
	}
	circle_num = (a / 6) + 1;
	return (circle_num);
}

int main(void)
{
	int x;
	int circle_num;

	scanf("%d", &x);
	if (x == 1)
		circle_num = 1;
	else
		circle_num = find_circle(x);
	printf("%d", circle_num);
}