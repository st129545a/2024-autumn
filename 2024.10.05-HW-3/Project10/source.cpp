#include <iostream>

int main() {
    int n = 0;
    scanf_s("%d", &n);

    int k = 0;
    int j = 0;

    for (int i = 0; i < n; ++i) {
        int a;
        scanf_s("%d", &a);

        if (a > 0) {
            j++;
        }
        else {
            j = 0;
        }

        if (j > k) {
            k = j;
        }
    }
    printf("%d", k);


    EXIT_SUCCESS;
}