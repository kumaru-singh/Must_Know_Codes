#include<stdio.h>

int main(){
    int x;
    printf("Enter an integer:");
    scanf("%d", &x);
    if(  x%2 == 0){
        printf("Given int is Even.");
    } else (
        printf("Given int is Odd.")
    );

    return 0;
}