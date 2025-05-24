#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int space = n - i; space > 0; space--)
        {
            printf(" ");
        }
        for (int repeat_star = 1; repeat_star <= i; repeat_star++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
