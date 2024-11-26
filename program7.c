/*One tricky thing here is that we cannot take input
  direcly into bit-field variable as it doesnt have
  any address thats why need a temporary variable to 
  take input and store in bit-field*/
#include<stdio.h>
struct student
{
    char name[20];
    int status : 1;
}s[5];
int main()
{
    int i,t;
    for(i=0;i<5;i++)
    {
    printf("Enter the name of student %d and status\n",i+1);
    scanf("%s %d",s[i].name,&t);
    s[i].status=t;
    }
    printf("Student\tStatus\n");
    for(i=0;i<5;i++)
    {
        if(s[i].status==0)
        printf("%s\tFAIL\n",s[i].name);
        else
        printf("%s\tPASS\n",s[i].name);
    }
    return 0;
}
