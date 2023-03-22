#include<stdio.h>
int main(){
    int a,b,c,A;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    A = a- b - 2*c;
    printf("%d",A);
    return 0;
}