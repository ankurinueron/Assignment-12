#include<stdio.h>           //N natural odd numbers in reverse order
void odd(int a)
{
    if(a==0)
    return;
    printf("%d ",2*a-1);
    odd(a-1);
}
int main()
{
    int a;
    printf("Enter to get first odd numbers in reverse order : ");
    scanf("%d",&a);
    odd(a);
    return 0;
}
