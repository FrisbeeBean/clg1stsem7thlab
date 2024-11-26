/*This program is to make transactions of withdrawing 
  money or depositing money, it creates a bank with 
  5 customers inside it and reads the details of the
  customer from user as input.I have hard coded it for
  only 5 customers that can be easily resolved by making
  another variable
  thank you for reading this
  I am rishabh jain */

#include<stdio.h>
#include<stdlib.h>
struct bank
{
	int acc;
	char name[50];
	int bal;
};
struct bank s[10];
int transaction(int accno,int req,int amount)
{
	int i;
	if(req==0)
	{
		for(i=0;i<5;i++)
		{
			if(accno==s[i].acc)
			s[i].bal+=amount;
		}
		return 1;
	}
	if(req==1)
	{
		for(i=0;i<5;i++)
		{
			if(accno==s[i].acc)
			if(s[i].bal>amount)
			{
				s[i].bal-=amount;
				return 1;
			}
			else
			return 0;
		}
	}
}
int main()
{
	int i,j,accno,req,amount;
	printf("Enter the account numbers,names and balance of the customers\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&s[i].acc);
		fflush(stdin);
		gets(s[i].name);
		fflush(stdin);
		scanf("%d",&s[i].bal);
		fflush(stdin);
	}
	int n;
	printf("Tell how many transactions you wish to make\n");
	scanf("%d",&n);
	printf("Enter your account number,1 for withdrawal and 0 for depositing ,amount\n");
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&accno,&req,&amount);
		if(transaction(accno,req,amount)==0)
		printf("Transaction failed\n");
		else
		{
			for (j = 0; j < 5; j++) 
			{
                if (accno == s[j].acc) 
				{
                    printf("Transaction is valid\n");
                    printf("The balance of %s is %d\n", s[j].name, s[j].bal);
                    break;
                }
			}
		}
	}
	return 0;
}
