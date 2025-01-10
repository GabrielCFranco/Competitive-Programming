#include <stdio.h>/
 
int main() {
    int a, b, c, total;
    scanf("%d %d %d", &a, &b, &c);
    total = (a + b + abs(a-b))/2;
    total = (total+c+abs(total-c))/2;
    printf("%d eh o maior\n", total);
    return 0;
}