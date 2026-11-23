#include<stdio.h>

int main()
{
    int a, b, sum, diff, multiply; 
    float divide;
    printf("Enter any two numbers:");
    scanf("%d %d", &a, &b);
    sum=a+b;
    diff=a-b;
    multiply=a*b;
    divide=a/b;
    printf("The sum is %d", sum);
    printf("\n The difference is %d", diff);
    printf("\n The multiplication is %d", multiply);
    printf("\n The divide is %d", divide);

    return 0;
}

