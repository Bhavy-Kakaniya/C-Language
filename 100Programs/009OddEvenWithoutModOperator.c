// odd even without %
#include<stdio.h>
void main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n & 1){
        printf("%d is odd number", n);
    }
    else{
        printf("%d is even number", n);
    }
}
