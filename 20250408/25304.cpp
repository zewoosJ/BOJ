#include <stdio.h>
int main() {
    int price, n;
    scanf("%d %d", &price, &n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        price -= a * b;
    }
    if (price==0)
    {
        printf("Yes\n");
    } else 
    {
        printf("No\n");
    }

    return 0;
}