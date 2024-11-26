#include<stdio.h>
struct student 
{
    char name[20];
    struct marks
    {
        int mark1;
        int mark2;
    }s1;
}s2[2];
int main()
{
    int i,j;
    for(i=0;i<2;i++)
    {
        printf("Enter the name of student %d\n",i+1);
        scanf("%s",s2[i].name);
        printf("Enter marks in subject 1 and 2 of student %d\n",i+1);
        scanf("%d %d",&s2[i].s1.mark1,&s2[i].s1.mark2);
    }
    printf("NAME\tMARK1\tMARK2\n");
    for(i=0;i<2;i++)
    {
        printf("%s\t%d\t%d\n",s2[i].name,s2[i].s1.mark1,s2[i].s1.mark2);
    }
    return 0;
}
