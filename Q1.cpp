#include<stdio.h>       //N natural numbers using recursion
void Natural(int a)
{
    if(a==0)
    return;
    Natural(a-1);
    printf("%d ",a);
}
//void natural(int);
int main()
{
    int a;
    printf("Enter any natural number : ");
    scanf("%d",&a);
    Natural(a);
    return 0;
}
