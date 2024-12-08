#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int l1 = 0;
	int w1 = 0;
	int h1 = 0;
	int l2 = 0;
	int w2 = 0;
	int h2 = 0;
	int lc = 0;
	int wc = 0;
	int hc = 0;

	scanf_s("%d", &l1);
	scanf_s("%d", &w1);
	scanf_s("%d", &h1);
	scanf_s("%d", &l2);
	scanf_s("%d", &w2);
	scanf_s("%d", &h2);
	scanf_s("%d", &lc);
	scanf_s("%d", &wc);
	scanf_s("%d", &hc);


    if ((l1 + l2 <= lc && max(w1, w2) <= wc && max(h1, h2) <= hc) ||
        (l1 + l2 <= lc && max(w1, w2) <= hc && max(h1, h2) <= wc) ||
        (l1 + l2 <= wc && max(w1, w2) <= lc && max(h1, h2) <= hc) ||
        (l1 + l2 <= wc && max(w1, w2) <= hc && max(h1, h2) <= lc) ||
        (l1 + l2 <= hc && max(w1, w2) <= wc && max(h1, h2) <= lc) ||
        (l1 + l2 <= hc && max(w1, w2) <= lc && max(h1, h2) <= wc)) 
    {
        printf("YES\n");
        return 0;
    }

    if ((max(l1, l2) <= lc && max(w1, w2) <= wc && h1 + h2 <= hc) ||
        (max(l1, l2) <= lc && max(w1, w2) <= hc && h1 + h2 <= wc) ||
        (max(l1, l2) <= wc && max(w1, w2) <= lc && h1 + h2 <= hc) ||
        (max(l1, l2) <= wc && max(w1, w2) <= hc && h1 + h2 <= lc) ||
        (max(l1, l2) <= hc && max(w1, w2) <= wc && h1 + h2 <= lc) ||
        (max(l1, l2) <= hc && max(w1, w2) <= lc && h1 + h2 <= wc))
    {
        printf("YES\n");
        return 0;
    }

    printf("NO\n");


	EXIT_SUCCESS;
}