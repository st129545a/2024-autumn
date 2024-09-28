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

	double D = (b * b) - (4 * a * c);

	if (D < 0)
	{
		printf("%d\n", -1);
	}
	else if (D == 0)
	{
		printf("%d\n", 1);
		printf("%f\n", -b / 2 * a);
	}
	else
	{
		printf("%d\n", 2);
		printf("%f\n", (-b + sqrt(D)) / (2 * a));
		printf("%f\n", (-b - sqrt(D)) / (2 * a));
	}


	EXIT_SUCCESS;
}