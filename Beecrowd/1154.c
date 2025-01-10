#include <stdio.h>
int main(){
    int age=1;
    float total = 0, ammount = 0;
    while (age > 0){
        scanf("%d", &age);
        if (age > 0){
            total += age;
            ammount++;
        }
        do{
            if (age == 0)
                scanf("%d", &age);
        }while (age == 0);
    }
    printf("%.2f\n", total/ammount);

    return 0;
}