// summation of a digit of a given number.
#include<stdio.h>
void main(){
    int n, sum = 0, digit;
    printf("Enter number:");
    scanf("%d", &n);
    while (n!=0) {
        digit = n % 10;
        n = n / 10;
        sum += digit;
    }
    printf("%d is sum", sum);
}
