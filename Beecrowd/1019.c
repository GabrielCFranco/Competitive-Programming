#include <stdio.h>
int main() {
    int insert, secs, min, h;
    scanf("%d", &insert);
    h = insert / 3600;
    min = (insert%3600)/60;
    secs = (insert%3600)%60;

    printf("%d:%d:%d\n", h, min, secs);
    return 0;
}