#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
	int a1 = 0;
	int b1 = 0;
	int r1 = 0;
	int a2 = 0;
	int b2 = 0;
	int r2 = 0;

	scanf_s("%d", &a1);
	scanf_s("%d", &b1);
	scanf_s("%d", &r1);
	scanf_s("%d", &a2);
	scanf_s("%d", &b2);
	scanf_s("%d", &r2);

	double d = 0;
	d = sqrt((a1 - a2)  *(a1 - a2) + (b1 - b2) * (b1 - b2));

	if (r1 + r2 >= d && r1 + d >= r2 && d + r2 >= r1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}


	EXIT_SUCCESS;
}