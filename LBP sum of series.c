#include<stdio.h>
int sod(int);
void main()
{
	int n1,n2,sum=0,i;
	printf("enter n1:");
	scanf("%d",&n1);
	printf("enter n2:");
	scanf("%d",&n2);
	for(i=n1;i<=n2;i++)
	{
		sum=sum+sod(i);
	}
	printf("result=%d",sum);
}
int sod(int n)
{
	int s=0;
	while(n!=0)
	{
		s=s+(n%10);
		n=n/10;
	}
	return s;
}
