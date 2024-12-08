#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);

    int min_coins = 1e9, 
    b_result = 0, 
    a_result = 0;

    for (int b = 0; b * 5 <= n; ++b)
    {
        int remainder = n - b * 5;
        if (remainder % 3 == 0)
        {
            int a = remainder / 3;
            int total_coins = a + b;
            if (total_coins < min_coins)
            {
                min_coins = total_coins;
                b_result = b;
                a_result = a;
            }
        }
    }
    printf("%d %d", b_result, a_result);


    EXIT_SUCCESS;
}