// factorial
#include <stdio.h>
int fact(int n){
    if(n == 0 || n == 1){
        return n;
    }
    else{
        return n * fact(n-1);
    }
}
int main(){
    int product = 1, n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        product *= i;
    }
    printf("%d by for loop", product);
    printf("\n%d by recursion", fact(n));
    return 0;
}
