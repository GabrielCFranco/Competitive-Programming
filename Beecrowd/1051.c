#include <stdio.h>

int main() {
float s;
    scanf("%f", &s);
    if(0 <= s && s <= 2000){
        printf("Isento\n");
    }
    else if(2000.01 <= s && s <= 3000){
        printf("R$ %.2f\n", (s-2000)*0.08); 
    }
    else if(3000.01 <= s && s <= 4500){
        printf("R$ %.2f\n", (1000*0.08)+(s-3000)*0.18);
    }
    else{
        printf("R$ %.2f\n", (1000*0.08)+(1500*0.18)+(s-4500)*0.28);
    }
    
    return 0;
}