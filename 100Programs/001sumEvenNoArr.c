// sum of even number in 1d array
#include<stdio.h>
void main(){
    int a[] = { 10, 11, 12, 13, 14, 15 }, sum = 0;
    for (int i = 0; i < 6; i++) {
        if(i%2 == 0){
            sum = sum + a[i];
        }
    }
    printf("sum %d",sum);
}
