#include <stdio.h>
 
int main() {
    int num, h;
    float salary;
    scanf("%d %d %f", &num, &h, &salary);
    printf("NUMBER = %d\n", num);
    salary *= h;
    printf("SALARY = U$ %.2f\n", salary);   
    
    return 0;
}