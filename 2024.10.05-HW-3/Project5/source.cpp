#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int s = 0;
	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int x = 0;
			scanf_s("%d", &x);
			if (i < j && x == 1)
			{
				++s;
			}
		}
	}
	printf("%d", s);


	EXIT_SUCCESS;
}