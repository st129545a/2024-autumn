#include <iostream>
#include <cmath>

int main() 
{
    int n;
    scanf_s("%d", &n);

    int a[1000]; 
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &a[i]);
    }

    int x;
    scanf_s("%d", &x);

    int cV = a[0];
    int mD = abs(a[0] - x);

    for (int i = 1; i < n; ++i)
    {
        int cD = abs(a[i] - x); 
        if (cD < mD || (cD == mD && a[i] < cV)) 
        {
            cV = a[i]; 
            mD = cD; 
        }
    }

    printf("%d", cV);


    EXIT_SUCCESS;
}