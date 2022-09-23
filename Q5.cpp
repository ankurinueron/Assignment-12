#include<stdio.h>           //N natural even number using recursion
void even(int a)
{
    if(a<1)
        return;
    even(a-1);
    printf("%d ",2*a);
}
int main()
{
    int a;
    printf("Enter any number to get upto even number : ");
    scanf("%d",&a);
    even(a);
    return 0;
}
