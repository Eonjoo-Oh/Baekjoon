#include <stdio.h>

#define M 1234567891

long long	hash_func(int n, char *str)
{
	long long	result;
	long long	r;

	result = 0;
	r = 1;
	for(int i = 0; i < n; i++)
	{
		result = result + ((str[i] - 96) * r) % M;
		r = (r * 31) % M;
	}
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

	result = hash_func(n, str);
	printf("%lld", result);
}