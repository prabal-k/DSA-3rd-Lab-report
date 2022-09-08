#include<stdio.h>
#include<conio.h>
int main()
{
	
	int n,l, h, i,mid;
	int a[100];
	int flag=0;
	int key;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter %d sorted data\n",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter item to be searched\n");
	scanf("%d",&key);
	l=0;
	h=n-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(a[mid]<key){
			l=mid+1;
		}
		else if(a[mid]>key)
		{
			h=mid-1;
		}
		else{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("search successsful\n");
		printf("pos=%d",mid+1);
	}
	else
	printf("search unsuccessful\n");
return 0;
}
