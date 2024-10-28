#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node*next;
		node*prev;
		node()
		{
			data=0;
			this->next=NULL;
			this->prev=NULL;
		}
};
class doubly{
	public:
	node *head;
	doubly()
	{
		head=0;
	}
	void traverse(){
		node*temp;
		temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data;
			temp=temp->next;
		}
		cout<<endl;
	}

void addstart(int data)
{
	node*temp;
	temp->prev=NULL;
	if(head==NULL)
	{
		temp->next=NULL;
		head=temp;
	}
	else{
		temp->next=head;
		temp->prev=NULL;
		head->prev=temp;
		head=temp;
	}
}
void addend(int data)
{
	node*temp;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else{
		temp->data=data;
		while(temp->next!=NULL)
		{
			
			temp=temp->next;
		}
		head->next=temp;
		temp->prev=head;
		temp->next=NULL;
		
	}
}
};
int main()
{
	doubly d;
	int ch;
	while(true)
	{
		cout<<"enter choice";
		cin>>ch;
		switch(ch)
		{
			
			case 1:
				d.addstart(4);
	     d.traverse();
	    break;
	case 2:
		d.addend(3);
	    d.traverse();
	    break;
	default:
		cout<<"invalid";
		break;
		}
	}
	
	
	
	return 0;
}
















