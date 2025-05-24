#include <stdio.h>
int main() {
    int h, m, rem, time;
    scanf("%d%d", &h, &m);
    scanf("%d", &rem);
    time = h * 60 + m + rem;
    if (time >= 1440)
    {
        time %= 1440;
    }
    h = time / 60;
    m = time % 60;
    printf("%d %d", h, m);
}