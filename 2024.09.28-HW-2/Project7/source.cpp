#include <iostream>
#include <cmath>

main()
{
    int a = 0;
    double c = 0;
    double m = 0;
    double n = 0;

    scanf_s("%d", &a);
    scanf_s("%f", &m);
    scanf_s("%f", &n);

    if (n <= a)
    {
        printf("%f", m * 2);
    }

    c = ceil((2 * n) / a);
    printf("%f", m * c);


    EXIT_SUCCESS;
}
