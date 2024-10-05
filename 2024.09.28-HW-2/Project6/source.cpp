#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	const long long D = (b * b) - (4 * a * c);

	if (a == 0 && b == 0 && c == 0)
	{
		printf("-1");
	}
	else if (a == 0)
	{
		if (b == 0 && c != 0)
		{
			printf("%d", -1);
		}
		else
		{
			printf("%d\n", 1);
			const double t = -c / static_cast <double>(b);
			printf("%1f", t);
		}
	}
	else if (c == 0)
	{
		printf("%d", 2);
		printf("%d", 0);
		printf("%d", -b / a);
	}
	else if (b == 0)
	{
		if (-c / a < 0)
		{
			printf("%d", 0);
		}
		else
		{
			printf("%d", 2);
			printf("%f", sqrt(-c / a));
			printf("%f", -sqrt(-c / a));
		}
	}
	else
	{
		if (D < 0)
		{
			printf("%d", 0);
		}
		else if (D == 0)
		{
			printf("%d\n", 1);
			const double y = -b / 2 * static_cast <double>(a);
			printf("%f\n", y);
		}
		else
		{
			printf("%d\n", 2);
			printf("%f\n", (-b + sqrt(D)) / (2 * a));
			printf("%f\n", (-b - sqrt(D)) / (2 * a));
		}
	}


	EXIT_SUCCESS;
}