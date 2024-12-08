#include <iostream>

const int top = 1000000000;

int main(int argc, char* argv[])
{
    int i = 0;
    int j = 0;
    scanf_s("%d", &i);
    scanf_s("%d", &j);

    int a = i, b = j;
    while (b != 0) 
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    int gcd = a;

    int f0 = 0;
    int f1 = 1;
    if (gcd == 0)
    {
        std::cout << f0 << std::endl;
    }
    else if (gcd == 1)
    {
        std::cout << f1 << std::endl;
    }
    else 
    {
        for (int k = 2; k <= gcd; ++k) 
        {
            int temp = (f0 + f1) % top;
            f0 = f1;
            f1 = temp;
        }
        std::cout << f1 << std::endl;
    }


    EXIT_SUCCESS;
}
