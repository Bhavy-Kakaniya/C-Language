// fibbo
#include<stdio.h>
int fibbo(int n){
    if(n == 1 || n == 2) return n-1;
    else return fibbo(n-1) + fibbo(n-2);
}

void printFibbo(int current, int total){
    if(current>total) return;
    printf("%d ", fibbo(current));
    printFibbo(current + 1, total);
}

void main(){
    int n, a=0, b=1, sum = 0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("by for loop:\t");
    for(int i = 0; i<n; i++ ){
        printf("%d ", a);
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("\nby recursion: ");
    printFibbo(1, n);
}
