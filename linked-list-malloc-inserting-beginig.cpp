

#include <iostream>
#include<malloc.h>
void insertB();
using namespace std;
struct node
{
	int data;
	struct node *next;
};
int choise,choise2,item=77;
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
cout<<"After insert begning";
insertB();
	return 0;
}

void insertB()
{
        if(start==NULL)
        {
                cout<<"The node is overflow";
        }
        else
        {
                newnode=(node *)malloc(sizeof(node));
        }
        newnode->data=item;
        newnode->next=start;
        start=newnode;
        cout<<"\n\nyou want to print list with insert element prees 2."<<endl;
        cin>>choise2;
       if(choise2==1)
       {
       while(choise2==1);
{
	temp=start;
	cout<<"\nPrint a list"<<endl;
}
	while(temp != NULL)
	{
	cout<<temp->data;	
	temp=temp->next;
	}
       }
       else
       {
             cout<<"Done inserting beginig" ; 
       }
       
}
