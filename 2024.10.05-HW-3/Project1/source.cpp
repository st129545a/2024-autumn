#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int r = 0;
	int x = 0;
	int i = 0;

	scanf_s("%d", &n);

	while (i != n)
	{
		scanf_s("%d", &x);

		if (x == 1)
		{
			++r;
		}
		else
		{
			++a;
		}
		i++;
	}

	if (a > r)
	{
		printf("%d", r);
	}
	else
	{
		printf("%d", a);
	}


	EXIT_SUCCESS;
}