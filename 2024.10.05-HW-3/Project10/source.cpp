#include <iostream>

int main(int argc, char* argv[])
{
    long long a = 0;
    long long b = 0;
    long long c = 0;
    long long d = 0;

    scanf_s("%lld", &a);
    scanf_s("%lld", &b);
    scanf_s("%lld", &c);
    scanf_s("%lld", &d);

    long long lastRoot = -101;  
    bool foundAnyRoot = false;  

    for (long long x = -100; x <= 100; ++x) 
    {
        if (a * x * x * x + b * x * x + c * x + d == 0)
        {
            if (x != lastRoot)
            { 
                if (foundAnyRoot)
                {
                    printf(" ");
                }
                printf("%lld", x);
                lastRoot = x; 
                foundAnyRoot = true; 
            }
        }
    }


    EXIT_SUCCESS;
}
