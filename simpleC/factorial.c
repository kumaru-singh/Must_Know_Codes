#include<stdio.h>

int main(){

    int x, sum = 0;
    printf("Give an integer: ");
    scanf("%d",&x);
    while(x!=0){
        sum += (x%10);
        x = (x/10);
    }
    printf("The sum of the digits of given number is %d", sum);
}