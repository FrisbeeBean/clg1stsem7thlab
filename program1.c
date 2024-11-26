#include<stdio.h>
float average(int *p2,int l)
{
	int i,s=0;
	for(i=0;i<l;i++)
	s= s+ p2[i];
	return (float)s/l;
}
int main()
{
	float avg;
	int n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	int i;
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("The average value is %f",average(a,n));
	return 0;
}
