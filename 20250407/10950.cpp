#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    for(int a, b; t > 0; t--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
}