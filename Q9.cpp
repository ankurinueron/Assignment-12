#include<stdio.h>           //decimal to octal using recursion
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
    binary(x/8);
    printf("%d",x%8);
}
