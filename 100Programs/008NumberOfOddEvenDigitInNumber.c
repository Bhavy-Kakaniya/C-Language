// total odd and total even digit of a given number.
#include<stdio.h>
void main(){
    int n,odd = 0, even = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    while (n != 0){
        int digit;
        digit = n % 10;
        if(digit % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
        n /= 10;
    }
    printf("%d even digits and %d odd digits", even, odd);
}
