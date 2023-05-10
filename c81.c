#include<stdio.h>
int main(){
    char text;
    text=getchar();
    printf("input1:%c\n" ,text);
    // fflush(stdin);
        while(getchar() !='\n');
    text=getchar();
    printf("input2:%c\n" ,text);
    return 0;
}