#include<stdio.h>

int main()
{
    int p, t, r;

    printf("Enter the principle:");
    scanf("%d", &p);
    printf("\n Enter the time:");
    scanf("%d", &t);
    printf("\n Enter the rate:");
    scanf("%d", &r);

    float si=(p*t*r)/100;
    printf("The simple interest is %f", si);

    return 0;

}