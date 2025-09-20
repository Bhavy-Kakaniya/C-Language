// WAP to find Max, Min, Average of n numbers, n should be taken from user and all n value should
// be taken from user (Note that you are not allowed to use an array for this)
#include<stdio.h>
void main(){
    int num, min ,max, sum = 0, count = 0;
    printf("Enter -1 to exit");
    while (1){
        printf("\nEnter number: ");
        scanf("%d", &num);
        if(num == -1) break;
        if(count == 0) max = min = num;
        else {
            if(num > max){
                max = num;
            }
            if(num < min){
                min = num;
            }
        }
        sum += num;
        count++;
    }
    if(count == 0){
        printf("no number entered");
    }
    else{
        float avg = sum/count;
        printf("\n%d total number entered", count);
        printf("\n%.2f average", avg);
        printf("\n%d max", max);
        printf("\n%d min", min);
    }
}
