#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the dimension of the matrix it must be greater than 2 and it must be odd\n");
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	a[i][j]=0;
	if (n <= 2 || n % 2 == 0)
	{
        printf("Dimension must be greater than 2 and also odd\n");
        return 0; 
    }
	int k=2;
	a[n/2][n-1]=1;
	i=(n/2)-1;
	j=n;
	while(k<=n*n)
	{
		if(a[i][j]==0 && i<n && i>=0 && j<n && j>=0)
		{
			a[i][j]=k++;
			i--;
			j++;		
		}
		else if(i==-1 && j<n)
		{
			i=n-1;
		}
		else if(j==n && i>=0)
		{
			j=0;
		}
		else if(a[i][j]!=0)
		{
			i=i+1;
			j=j-2;
		}
		else if(i==-1 && j==n)
		{
			i=0;
			j=n-2;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
	return 0;
}
