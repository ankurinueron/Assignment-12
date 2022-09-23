#include<stdio.h>           //square of N natural numbers using recursion
void square(int a)
{
    if(a<1)
    return;
    square(a-1);
    printf("%d ",a*a);
}
void square(int);
int main()
{
    int a;
    printf("Enter to get square of natural numbers upto : ");
    scanf("%d",&a);
    square(a);
    return 0;
}
