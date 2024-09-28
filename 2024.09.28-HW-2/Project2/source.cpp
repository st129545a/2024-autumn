#include <iostream>


int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	scanf_s("%d", &a);
	scanf_s("%d", &b);

	if (a == 1 && b == 1)
	{
		printf("%d", 0);
	}
	else if (a == b)
	{
		printf("%d", 2);
	}
	else
	{
		printf("%d", 1);
	}


	EXIT_SUCCESS;
}