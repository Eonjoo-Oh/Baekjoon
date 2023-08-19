#include <stdio.h>

long long	hash_func(int n, char c)
{
	long long	result;
	long long	r;
	long long	new_c;

	r = 1;
	for(int i = 0; i < n; i++)
	{
		r *= 31;
	}
	new_c = c - 96;
	result = new_c * r;
	return (result);
}

int main()
{
	int			n;
	long long	result;

	result  = 0;
	scanf("%d\n", &n);
	char		str[n];
	scanf("%s", str);

	for(int i = 0; i < n; i++)
	{
		result += hash_func(i, str[i]);
	}
	printf("%lld", result);
}