#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int u = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		int x = 0;

		scanf_s("%d", &x);

		if (x <= 437)
		{
			printf("%s%d", "Crash ", i + 1);
			u = 1;
			break;
			
		}
	}
	if (u != 1) 
	{
		printf("%s", "No crash ");
	}
	

	EXIT_SUCCESS;
}