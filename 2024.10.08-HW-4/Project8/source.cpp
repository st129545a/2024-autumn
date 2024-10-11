#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);

    int a[1000];
    for (int i = 0; i < n; ++i) 
    {
        scanf_s("%d", &a[i]);
    }

    int m;
    scanf_s("%d", &m);

    for (int k = 0; k < m; ++k) 
    {
        int ik = 0;
        int jk = 0;
        scanf_s("%d", &ik);
        scanf_s("%d", &jk);

        for (int i = ik - 1; i <= jk - 1; ++i) 
        { 
            printf("%d", a[i]);
            if (i != jk - 1) 
            {
                printf("%s", " ");
            }
        }
        printf("\n");
    }


    EXIT_SUCCESS;
}