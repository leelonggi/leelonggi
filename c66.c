#include<stdio.h>
// #define PI 3.141592265
int main(){
    int radius=5;
    const double PI=3.14;
    double cir =2*radius*PI;
    printf("r:%d,circumference:%lf", radius,cir);
    return 0;
}