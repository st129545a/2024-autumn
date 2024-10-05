#include <iostream>

int main(int argc, char* argv[])
{
	long long n = 0;
	long long m = 0;

	scanf_s("%d", &n);
	scanf_s("%d", &m);

	long long a = n;
	long long b = m;

	while (b != 0)
	{
		long long c = b;
		b = a % b;
		a = c;
	}

	long long u = n / a;
	printf("%d", u);


	EXIT_SUCCESS;
}