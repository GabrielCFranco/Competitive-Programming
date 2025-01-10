#include <stdio.h>
 
int main() {
    float h, kmh, total;
    scanf("%f %f", &h, &kmh);
    total = (kmh * h)/12;
    printf("%.3f\n", total);

    return 0;
}