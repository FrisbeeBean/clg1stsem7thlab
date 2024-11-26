#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int main()
{
    int n1,n2,x;
    printf("Enter the value of the two numbers\n");
    scanf("%d %d",&n1,&n2);
    x=gcd(n1,n2);
    printf("The GCD of %d and %d is %d\n",n1,n2,x);
    return 0;
}