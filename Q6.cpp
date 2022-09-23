#include<stdio.h>           //N natural even number in reverse order using recursion
void even(int a)
{
    if(a<1)
        return;
         printf("%d ",2*a);
    even(a-1);
}
int main()
{
    int a;
    printf("Enter any number to get upto even number : ");
    scanf("%d",&a);
    even(a);
    return 0;
}
