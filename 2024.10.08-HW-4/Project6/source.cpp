#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);

    if (n <= 0) 
    {
        printf("%d", 0);
        return 0;
    }

    int v[100]; 
    int p[100]; 

    for (int i = 0; i < n; ++i) 
    {
        scanf_s("%d", &v[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &p[i]);
    }

    int maxN = 0;
    int firmN = -1;

    for (int i = 0; i < n; ++i) 
    {
        int nalogR = (v[i] * p[i]) / 100; 

        if (nalogR > maxN || (nalogR == maxN && firmN == -1)) 
        {
            maxN = nalogR; 
            firmN = i; 
        }
    }

    printf("%d", firmN + 1);


    EXIT_SUCCESS;
}