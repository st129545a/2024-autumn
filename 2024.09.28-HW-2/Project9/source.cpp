#include <iostream>

int main(int argc, char* argv[]) 
{
    int k = 0;
    int w = 0;
    scanf_s("%d", &k);
    scanf_s("%d", &w);
 
    int a1 = 0;
    int b1 = 0;
    int a2 = 0;
    int b2 = 0;
    int a3 = 0;
    int b3 = 0;
    
    scanf_s("%d", &a1);
    scanf_s("%d", &b1);
    scanf_s("%d", &a2);
    scanf_s("%d", &b2);
    scanf_s("%d", &a3);
    scanf_s("%d", &b3);


    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j) 
        {
            for (int n = 0; n < 2; ++n)
            {
                if (i == 0 && j == 0 && n == 0)
                {
                    continue;
                }
                int total_weight = (i * a1) + (j * a2) + (n * a3);
                int total_capacity = (i * b1) + (j * b2) + (n * b3);

                if (total_weight <= w && total_capacity >= k)
                {
                    printf("YES");
                    return 0;
                }
            }
        }
    }
    printf("NO");


    EXIT_SUCCESS;
}
