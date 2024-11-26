#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i;
	char t;
	char *p=malloc(80*sizeof(char));
	printf("Enter the string\n");
	fgets(p,100,stdin);
	int n=strlen(p);
	for(i=0;i<n/2;i++)
	{
		t=p[n-i-1];
		p[n-i-1]=p[i];
		p[i]=t;
	}
	printf("The reversed string is %s",p);
	free(p);
	return 0;
}
