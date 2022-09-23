#include<stdio.h>       //reverse of a number using recursion
int sum=0,rem;
int reverse(int a)
{

    if(a!=0)
    {
        rem=a%10;
        sum=sum*10+rem;
        reverse(a/10);
    }
    else
    {
        return sum;
    }
    return sum;
}
int main()
{
    int a,k;
    printf("Enter any number : ");
    scanf("%d",&a);
    k=reverse(a);
    printf("The reverse of the entered number is : %d",k);
    return 0;
}
