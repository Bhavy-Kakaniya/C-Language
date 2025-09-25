// Converting Decimal to BCD
#include<stdio.h>
void decimalToBCD(int num){
    int digits[10], i=0;
    while(num > 0){
        digits[i++] = num % 10;
        num /= 10;
    }
    printf("\n");
    for (int j = i - 1; j >= 0; j--) {
        int d = digits[j];
        for (int k = 3; k >= 0; k--) {
            printf("%d", (d >> k) & 1);
        }
        printf(" ");
    }
}
void main(){
    int decimal;
    printf("Enter a decimal: ");
    scanf("%d", &decimal);
    if(decimal < 0) printf("not allowed");
    decimalToBCD(decimal);
}
