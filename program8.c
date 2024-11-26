#include<stdio.h>
union student
{
    char name[20];
    int marks[5];
    int rno;
}s;
int main()
{
    int i,sum=0;
    printf("Enter the name and roll number of student\n");
    scanf("%s %d",s.name,&s.rno);
    for(i=0;i<5;i++)
    {
        printf("Enter the marks of subject %d\n",i+1);
        scanf("%d",&s.marks[i]);
        sum+=s.marks[i];
    }
    printf("The percentage of student is %5.2f%%",(float)sum/5);
    return 0;
}