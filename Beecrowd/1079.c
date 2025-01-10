#include <stdio.h>
int main() {
    int i=1,n;
    float p1,p2,p3;
    scanf("%d",&n);
    for(i;i<=n;i++){
        scanf("%f %f %f", &p1, &p2, &p3);
        p1=((p1*2)+(p2*3)+(p3*5))/10;
        printf("%.1f\n", p1);
}
    return 0;
}