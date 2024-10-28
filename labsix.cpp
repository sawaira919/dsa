#include<iostream>
using namespace std;
   struct node{
	int data;
	node*next;
	
};
    node*head =NULL;
    void display()
    {
    	node*temp=head;
    	if(head==NULL)
    	{
    		temp=head;
    		cout<<"empty";
    		return;
		}
		else{
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			
			}
			
		}
		cout<<endl;
	}
	void start(int data)
	{
		node *nnode= new node();
		nnode->data=data;
		nnode->next=head;
		head=nnode;
	}
	
	void mid(int data,int p)
	{
	node*ptr;
    ptr=head;
    
    while(ptr->data!=p)
    {
    	ptr=ptr->next;
	}
	node*m=new node;
	m->data=data;
	m->next=ptr->next;
	ptr->next=m;
	}
	void end(int data)
	{
		node*temp=head;
		node *nnode= new node();
		nnode->data=data;
		if(head==NULL)
    	{
    		temp=head;
    		cout<<"empty";
    		return;
		}
		else{
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=nnode;
			nnode->next=NULL;
		}
		
	}
	void delstart()
	{
		node*temp=head;
		while(temp!=head)
		{
			temp=temp->next;
		}
		head=head->next;
		delete(temp);
	}
	void delend()
	{
		node*temp=head;
		node*pre=NULL;
		while(temp->next!=NULL)
			{
				pre=temp;
				temp=temp->next;
			}
			pre->next=NULL;
			delete(temp);
		
	}
	void delmid(int p)
	{
		
	node*cc=head;
	node*pree=NULL;
	while(cc->data!=p)
	{
		pree=cc;
		cc=cc->next;
	}
	pree->next=cc->next;
	delete(cc);
	}
	
   int main()
{
        
		while(true)
		{
			
		int ch;
		int v;
		
		cout<<"1 start"<<endl;
		cout<<"**********"<<endl;
		cout<<"2 mid"<<endl;
		cout<<"**********"<<endl;
		cout<<"3 end"<<endl;
	    cout<<"**********"<<endl;
		cout<<"4 display"<<endl;
		cout<<"**********"<<endl;
		cout<<"5 deletion start"<<endl;
		cout<<"**********"<<endl;
		cout<<"7 deletion mid"<<endl;
		cout<<"enter choice"<<endl;
		
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"enter value"<<endl;
			    cin>>v;
			    start(v);
			    
			    break;
			    case 3:
				cout<<"enter value"<<endl;
			    cin>>v;
			    end(v);
			    break;
			    case 2:
			    int pos;
                cout<<"enter position ";
                cin>>pos;
                cout<<"enter value"<<endl;
			    cin>>v;
			    mid(v,pos);
			    break;
			    case 4:
			    display();
			    break;
			    case 5:
				
			    delstart();
			    break;
			    case 7:
			    int ps;
	            cout<<"enter position";
	            cin>>ps;
	           
	            delmid(ps);
	            break;
			    
			    
			    default:
			    	cout<<"invalid";
			    	break;
			    
		}
	    }	
    
	return 0;
}
