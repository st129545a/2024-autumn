#include <stdlib.h>
#include <stdio.h>
#include <iostream>

int main(int argc, char* argv[]) 
{
	int a = 0; 
	std::cin >> a;

	int* b = (int*)malloc(a * sizeof(int)); 
	for (int i = 0; i < a; ++i) 
	{
		std::cin >> *(b + i);
	}

	int d = 0;
	int e = 1;
	int f = -1;

	for (int v = 0; v < a; ++v)
	{
		int h = 0;
		int i = -1;

		for (int j = v; j < a; ++j)
		{
			if (*(b + j) > h);
			{
				h = *(b + j);
				i = j;
			}
		}
		if (i != -1)
		{
			d += h * (i - f);
			f = i;
		}
	}
	std::cout << d << std::endl;

	free(b);


	EXIT_SUCCESS;
}