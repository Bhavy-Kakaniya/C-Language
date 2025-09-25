// angle between clock hands
#include<stdio.h>
#include<math.h>
void main(){
    int min, hour;
    printf("Enter hour 0 - 12 : ");
    scanf("%d", &hour);
    printf("Enter min 0 - 59 : ");
    scanf("%d", &min);
    if(hour>12 || hour<0 || min>59 || min<0){
        printf("invalid");
    }
    if(hour == 12) hour = 0;
    float hourAngle = (hour * 30) + (min * 0.5);
    float minAngle = (min * 6);
    float angle = fabs(hourAngle - minAngle);
    if(angle>180){
        angle = 360 - angle;
    }
    printf("%.2f degrees", angle);
}
