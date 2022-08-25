#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int choice,temp;
	int rear=-1,front =0;
	const int max=5;
	int queue[max];
	//system("cls");
	flag2:
	printf("\n\t\t*****MENU*****\n");
	printf("\t\t1.Enqueue element : \n");
	printf("\t\t2.Dequeue element : \n");
	printf("\t\t3.Display element : \n");
	printf("\t\t4.Exit\n");
	flag:
	printf("\nEnter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			if(rear==max-1)
			{
				printf("queue is overflow: ");
				//goto flag2;
			}
			else
			{
				
					printf("Enter the element to insert: ");
					scanf("%d",&temp);
					rear=rear++;
					queue[rear]=temp;
					printf("Item inserted successfully: ");
					system("cls");
					goto flag2;
				
				break;
			}
		case 3:
			if (front ==-1)
			{
				printf("QUEUE is empty: ");
				break;
			}
			else
			{
				printf("QUEUE IS : ");
				for(int i=front;i<=rear;i++)
				{
					printf(" %d ",queue[i]);
				}
			}
		default:
			printf("\n\t\tInvalid choice: ");
			goto flag;
			break;
	}
	
}
