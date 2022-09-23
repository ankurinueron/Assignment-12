#include<stdio.h>       //N natural numbers in reverse using recursion
void Natural(int a)
{
    if(a==0)
    return;
    printf("%d ",a);
    Natural(a-1);

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
