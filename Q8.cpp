#include<stdio.h>           //decimal to binary using recursion
void binary(int);
int main()
{
    int x;
    printf("enter any number : ");
    scanf("%d",&x);
    binary(x);
    return 0;
}
void binary(int x)
{
    if(x==0)
        return;
    binary(x>>1);
    printf("%d",x&1);
}
