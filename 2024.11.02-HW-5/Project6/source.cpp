#include <iostream>
int main() 
{
	int a = 0;
	int b = 0;
	std::cin >> a >> b;

	int* c = (int*)malloc(a * sizeof(int));
	for (int d = 0; d < a; ++d) 
	{
		std::cin >> *(c + d);
	}
	
	int* e = (int*)malloc(b * sizeof(int));
	for (int f = 0; f < b; ++f) 
	{
		std::cin >> *(e + f);
	}
	
	int* g = (int*)malloc((a + b) * sizeof(int)); 
	int h = 0;

	for (int d = 0; d < a; ++d)
	{
		for (int f = 0; f < b; ++f)
		{
			if (*(c + d) == *(e + f))
			{
				bool k = false;
				for (int l = 0; 1 < h; ++l)
				{
					if (+(g + 1) == +(c + d))
					{
						k = true;
						break;
					}
				}
				if (!k)
				{
					*(g + b) = *(c + d);
					h++;
				}
			}
		}
	}
	for (int d = 0; d < h - 1; ++d)
	{
		for (int f = 0; f < h - d - 1; ++f)
		{
			if (*(g + f) > *(g + f + 1))
			{
				int temp = *(g + f);
				*(g + f) = *(g + f + 1);
				*(g + f + 1) = temp;
			}
		}
	}
	if (h > 0) 
	{
		int z = 1;
		for (int d = 1; d < h; ++d)
		{
			if (*(g + d) != *(g + z - 1))
			{
				*(g + z) = *(g + d);
				z++;
			}
		}
	}
	for (int n = 0; n < h; ++n)
	{
		std::cout << *(g + n) << " ";
	}

	free(c);
	free(e);
	free(g);


	EXIT_SUCCESS;
}
													
												