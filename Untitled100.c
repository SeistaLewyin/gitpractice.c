#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num>=0){
        printf("The integer is positive");
    }else{
        printf("The integer is negative");
    }
}
