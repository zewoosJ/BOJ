#include <stdio.h>
int main() {
    int h, m, time;
    scanf("%d%d", &h, &m);
    time = h * 60 + m - 45;
    if(time < 0) time += 1440;
    h = time/60;
    m = time%60;
    printf("%d %d", h, m);
    return 0;
}