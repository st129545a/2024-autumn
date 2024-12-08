#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int* costs = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
    {
        std::cin >> costs[i];
    }

    int totalMoney = 0;
    int lastDay = -1;

    while (lastDay < n - 1)
    {
        int maxCost = 0;
        int maxDay = -1;

        for (int i = lastDay + 1; i < n; ++i)
        {
            if (costs[i] > maxCost)
            {
                maxCost = costs[i];
                maxDay = i;
            }
        }

        if (maxDay != -1)
        {
            totalMoney += maxCost * (maxDay - lastDay);
            lastDay = maxDay;
        }
    }

    std::cout << totalMoney << std::endl;

    free(costs);


    EXIT_SUCCESS;
}
