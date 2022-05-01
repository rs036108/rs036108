#include <iostream>
#include<malloc.h>
void insertE();
void deletS();
void deletP();
using namespace std;
struct node
{
	int data;
	struct node *next;
};
int choise,choise2=0,item=77,pos,i;
node *start=NULL,*newnode,*temp,*tempv;
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
//cout<<"After insert Ending";
//insertE();
//cout<<"\nDelet Element\n";
//deletS();
deletP();
	return 0;
}

/*void insertE()
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
        newnode->next=NULL;
       if(start==NULL)
       {
               start=newnode;
       }
       else
       {
               temp=start;
               while(temp->next!=NULL)
               {
                       temp=temp->next;
               }
               temp->next=newnode;
       }
        cout<<"\n\nyou want to print list with insert element prees any key."<<endl;
        cin>>choise2;
       if(choise2==239141)
       {
       cout<<"Done inserting Endinig" ; 
       }
       else
       {
                while(choise2==2);
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
       
}*/
/*void deletS()
{
      
        if(start==NULL)
        {
                cout<<"List is underflow";
                
        }
        else
        {
                temp=start;
                start=start->next;
                
               temp->next=NULL;
               cout<<temp->data;
                
                
        }
       
        free(temp);
        
      
        
}*/
void deletP()
{
	cout<<"\nEnter the possition :\n";
	cin>>pos;
        if(start==NULL)
        {
                cout<<"List is underflow";
                
        }
        else
        {
               temp=start;
                for(i=0;i<pos;i++)
                {
                        temp=temp->next;
                        tempv=temp;
                }
                tempv=tempv->next;
                temp=tempv->next;
                temp->next=NULL;
                cout<<tempv->data;
                free(tempv);
        }
        
	
	
        
}
