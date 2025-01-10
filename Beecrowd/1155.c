#include <stdio.h>
 
int main() {
float S=0;
    for(float i=1;i<=100;i++){
        S=S+(1/i);
    }
    printf("%.2f\n",S);
    return 0;
}