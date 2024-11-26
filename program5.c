#include<stdio.h>
int maths(int n,int a,int b,int c)
{
	if(n==3)
	return c;
	if(n==2)
	return b;
	if(n==1)
	return a;
	return maths(n-1,a,b,c)+maths(n-2,a,b,c)+maths(n-3,a,b,c);
}
int main()
{
	int a,b,c,n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Enter the first three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("The nth term is %d",maths(n,a,b,c));
	return 0;
}
