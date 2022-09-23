#include<stdio.h>           //N natural odd numbers using recursion
void odd(int a)
{
    if(a==0)
    return;
    odd(a-1);
    printf("%d ",2*a-1);
}
int main()
{
    int a;
    printf("Enter to get first odd numbers : ");
    scanf("%d",&a);
    odd(a);
    return 0;
}
