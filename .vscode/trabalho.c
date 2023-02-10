#include<stdio.h>
int main(){
    int num1, num2;
    int res1;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    res1 = num1 + num2;
    printf("O resultado da soma é %d\n", res1);
    return 0;
}
