// prime range
#include<stdio.h>
void main(){
    int start, end;
    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter end: ");
    scanf("%d", &end);
    for(int i=start; i<=end; i++){
        if (i <= 1)
        continue;
        int prime = 1;
        for(int j=2; j*j<=i; j++){
            if(i%j == 0){
                prime = 0;
                break;
            }
        }
        if(prime){
            printf("%d, ", i);
        }
    }
}
