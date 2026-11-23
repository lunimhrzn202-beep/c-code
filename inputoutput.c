#include<stdio.h>

int main()
{
    int a=10;
    char letter='Z';
    float balance=10.22;
    // for output operator
    printf("The value of a is %d", a);
    printf("\n The value of letter is %c", letter);
    printf("\n The value of balance is %f", balance);

    //formatted input operator

    int age;
    printf("\n Enter your age: ");
    scanf("%d", &age);
    printf("Your age is %d", age);

    char l;
    printf("\n Enter any character:");
    scanf(" %c", &l);
    printf("\n Your given character is %c", l);

}
