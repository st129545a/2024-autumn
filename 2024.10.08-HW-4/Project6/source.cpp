#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);

    int incomes[100];
    int taxes[100];

    for (int i = 0; i < n; i++) 
    {
        std::cin >> incomes[i];
    }

    for (int i = 0; i < n; i++) 
    {
        std::cin >> taxes[i];
    }

    double maxTax = 0.0;
    int bestFirm = 1; 

    for (int i = 0; i < n; i++) 
    {
        double currentTax = incomes[i] * taxes[i] / 100.0;

        if (currentTax > maxTax) 
        {
            maxTax = currentTax;
            bestFirm = i + 1; 
        }
    }
    printf("%d\n", bestFirm);


    EXIT_SUCCESS;
}
