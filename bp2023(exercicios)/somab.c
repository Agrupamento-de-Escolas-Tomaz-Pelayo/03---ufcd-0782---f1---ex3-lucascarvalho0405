#include<stdio.h>
int main()
{
    int num1, num2;
    int resl;
    printf("Digite dois números: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    resl = num1 + num2;
    printf("O resultado é %d\n", resl);
    return(0);

}