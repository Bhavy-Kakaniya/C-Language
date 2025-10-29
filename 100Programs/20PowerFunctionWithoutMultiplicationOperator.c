// power function without *
#include <stdio.h>
void main() {
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);//5
    printf("Enter y: ");
    scanf("%d", &y);//4
    if (y == 0) {
        printf("sum = 1\n");
        return 0;
    }
    int sum = x;
    for (int i = 1; i < y; i++) {
        int ans = 0;
        for (int j = 0; j < x; j++) {
            ans += sum;
        }
        sum = ans;
    }
    printf("sum = %d\n", sum);
}
