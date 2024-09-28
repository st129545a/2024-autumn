#include <iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;

    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
    scanf_s("%d", &a1);
    scanf_s("%d", &b1);
    scanf_s("%d", &c1);

    if (((a == a1) && (b == b1) && (c == c1))
        || ((a == a1) && (b == c1) && (c == b1))
        || ((a == b1) && (b == c1) && (c == a1))
        || ((a == b1) && (b == a1) && (c == c1))
        || ((a == c1) && (b == a1) && (c == b1))
        || ((a == c1) && (b == b1) && (c == a1))) 
    {
        printf("Boxes are equal");
    }
    else if (((a >= a1) && (b >= b1) && (c >= c1))
        || ((a >= a1) && (b >= c1) && (c >= b1))
        || ((a >= b1) && (b >= c1) && (c >= a1))
        || ((a >= b1) && (b >= a1) && (c >= c1))
        || ((a >= c1) && (b >= a1) && (c >= b1))
        || ((a >= c1) && (b >= b1) && (c >= a1))) 
    {
        printf("The first box is larger than the second one");
    }
    else if (((a <= a1) && (b <= b1) && (c <= c1))
        || ((a <= a1) && (b <= c1) && (c <= b1))
        || ((a <= b1) && (b <= c1) && (c <= a1))
        || ((a <= b1) && (b <= a1) && (c <= c1))
        || ((a <= c1) && (b <= a1) && (c <= b1))
        || ((a <= c1) && (b <= b1) && (c <= a1))) 
    {
        printf("The first box is smaller than the second one");
    }
    else 
    {
        printf("Boxes are incomparable");
    }


    EXIT_SUCCESS;
}