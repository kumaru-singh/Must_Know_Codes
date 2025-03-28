#include<stdio.h>

int main(){
    int x, y = 0;
    scanf("%d", &x);
    while(x!=0){
        y = (y*10) + (x%10);
        x = x/10;
    }
printf("The reversed no. is  %d", y);

}