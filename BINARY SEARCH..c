//bineary search
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,mid,key;
	int l=0,flag=0,h,i=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d sorted elements in array: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[n]);
	}
	h=n-1;
	printf("Enter the element to search: ");
	scanf("%d",&key);
	
	while(l<=h)
	{
		mid=(l+h)/2;
		if(a[mid]<key)	
		{
			l=mid+1;
		}
		else if(a[mid]>key)
		{
			h=mid-1;
		}
		else
		{
		
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Print search successful");
		
	}
	else
	{
		printf("Print search unsuccessful");
	}
	return 0;
}
