/*We have a beetle whom we have to find its final location
  beetle jumps to a location in a matrix ,we are asking
  from user to give some locations to fill in the
  matrix elements ,the beetle jumps to the location
  which is written on the matrix element that it is
  standing on and also we ask for how many jumps it is 
  to make*/
#include<stdio.h>
struct table 
{
int a;
char b;
int c;
};
int main()
{
	int x,y,N,m;
	printf("what is the number of rows of the square matrix\n");
	scanf("%d",&m);
	printf("Enter the initial position of the beetle\n");
	scanf("%d %d",&x,&y);
	printf("Enter the number of jumps the beetle will be making\n");
	scanf("%d",&N);
	struct table s[m][m];
	int i,j;
	printf("Enter the matrix values\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d %c %d",&s[i][j].a,&s[i][j].b,&s[i][j].c);
			printf(";");
		}
		printf("\n");
	}
	for(i=0;i<N;i++)
	{
		x=s[x-1][y-1].a;
		y=s[x-1][y-1].c;
	}
	printf("The final position of the beetle is (%d,%d)",x,y);
	return 0;
}

