#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n1;
	char *p1=malloc(80*sizeof(char));
	char *p2=malloc(40*sizeof(char));
	printf("Enter both the strings\n");
	gets(p1);
	gets(p2);
	n1=strlen(p1);
	for(i=0;p2[i]!='\0';i++)
	p1[n1+i]=p2[i];
	printf("The appended string is %s",p1);
	free(p1);
	free(p2);
	return 0;
}
