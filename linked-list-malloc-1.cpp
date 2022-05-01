

#include <iostream>
#include<malloc.h>
void insertB();
using namespace std;
struct node
{
	int data;
	struct node *next;
};
int choise;
node *start=NULL,*newnode,*temp;
int main()
{

do
{
	newnode=(node *)malloc(sizeof(node));
	cout<<"Enter the data";
	cin>>newnode->data;
	newnode->next=NULL;
	if(start==NULL)
	{
		start=temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}
	cout<<"Doyou want to continue press 1.";
	cin>>choise;
	
}while(choise==1);
{
	temp=start;
	cout<<"Print a list";
}
	while(temp != NULL)
	{
	cout<<temp->data;	
	temp=temp->next;
	}

	return 0;
}

