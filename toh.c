#include<stdio.h>
#include<conio.h>
void toh(int,char,char,char);
int main()
{
	int n=0,s,a,d;
	printf("Enter the no of disK: ");
	scanf("%d",&n);
	toh(n,'O','D','I');
	return 0;
}
void toh(int n,char a,char b, char c)
{
	if(n==1)
	{
		printf("\nmovie %d disk from %c to %c",n,a,b);
	}
	else if(n>0)
	{
		toh(n-1,a,c,b);
		printf("\nmove %d disk from %c to %c: \n",n,a,b);
		toh(n-1,c,b,a);
	}
}
