#include <stdlib.h>
#include <stdio.h>
#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0; 
	std::cin >> n;

	if (n <= 0)
	{
		EXIT_SUCCESS;
	}

	int* p = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		std::cin >> *(p + i);
	}

	int* dob = (int*)malloc(2 * n * sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		*(dob + i) = *(p + i);
		*(dob + i + n) = *(p + i);
	}

	int* l = (int*)malloc(2 * n * sizeof(int));
	for (int i = 0; i < 2 * n; ++i)
	{
		*(l + i) = -1;
	}
	int h = 0;
	for (int i = 1; i < 2 * n; ++i)
	{
		int a = *(dob + i);
		int k = *(l + i - h - 1);
		while (k != -1 && a != *(dob + h + k + 1))
		{
			if (a < *(dob + h + k + 1))
			{
				h = i - k - 1;
			}
			k = *(l + k);
		}
		if (a != *(dob + h + k + 1))
		{
			if (a < *(dob + h))
			{
				h = i;
			}
			*(l + i - h) = -1;
		}
		else
		{
			*(l + i - h) = k + 1;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << *(p + ((h + i) % n)) << " ";
	}

	std::cout << std::endl;
	free(p);
	free(dob);
	free(l);


	EXIT_SUCCESS;
}