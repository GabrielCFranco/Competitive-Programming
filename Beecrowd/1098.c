#include <stdio.h>
#include <math.h>
int main() {
    float I = 0, J;
    for (I; I<=2.2; I+=0.2){
        if (fabs(I - 0.0)<0.0001 || fabs(I - 1.0)<0.00011 || fabs(I - 2.0)<0.0001){
            printf("I=%.0f J=%.0f\n", I, J=1+I);
            printf("I=%.0f J=%.0f\n", I, J=2+I);
            printf("I=%.0f J=%.0f\n", I, J=3+I);
        }
        else {
            printf("I=%.1f J=%.1f\n", I, J=1+I);
            printf("I=%.1f J=%.1f\n", I, J=2+I);
            printf("I=%.1f J=%.1f\n", I, J=3+I);
        }
    }
    return 0;
}