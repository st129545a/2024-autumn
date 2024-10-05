#include <iostream>

int main(int argc, char* argv[])
{
	int k = 0;
	int n = 0;
	int m = 0;

	scanf_s("%d", &k);
	
	for (int i = 0; i < k; ++i)
	{
		scanf_s("%d", &n);
		scanf_s("%d", &m);

		const double d = 19 * m + (n + 239) * (n + 366) / 2.0;

		if (d == static_cast<int>(d))
		{
			printf("%d\n", static_cast<int>(d));
		}
		else
		{
			printf("%f\n", d);
		}
	}


	EXIT_SUCCESS;
}