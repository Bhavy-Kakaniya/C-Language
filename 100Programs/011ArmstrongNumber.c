// armstrong number
#include<stdio.h>
#include<math.h>
void main(){
    int n, newN, anotherN;
    printf("Enter n: ");
    scanf("%d", &n);
    newN = n;
    anotherN = n;
    int digit = 0;
    while(n!=0){
        n = n / 10;
        digit++;
    }
    int sum = 0;
    for(int i=1; i<=digit; i++){
        sum = (int) (sum + pow(newN%10, digit));
        newN /= 10;
    }
    if(sum == anotherN) printf("armstrong");
    else printf("not armstrong");
}
