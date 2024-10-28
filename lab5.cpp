#include<iostream>
using namespace std;

class node
{
	public :
		node *pre;
		int data;
		node *next;
		
	node()
	{
		this->pre = NULL;
		this->data = 0;
		this->next = NULL;
	}	
};

class doubly
{
	public :
		node *head;
		
	doubly()
	{
		head = NULL;
	}
	
	void traverse()
	{
		node *k = head;
		
		while (k != NULL)
		{
			cout << k->data << " ";
			k = k->next;
		}
		
		cout << endl;
	}	

    void addstart(int data)
    {
		node *temp = new node;
		temp->data = data;
	
		if (head == NULL)
		{
			temp->next = NULL;
			head = temp;
		}
		else
		{
			temp->next = head;
			temp->pre = NULL;
			head->pre = temp;
			head = temp;
		}
	}
	
	void addmid(int data, int pos)
	{
		node *temp = new node;
		temp->data = data;
	
		if (head == NULL)
		{
			head = temp;
		}
		else
		{
			node *kkk = head;
			while (kkk != NULL && kkk->data != pos)
			{
				kkk = kkk->next;
			}
			if (kkk == NULL)
			{
				cout << "Position not found." << endl;
				return;
			}
			temp->pre = kkk;
			temp->next = kkk->next;
			if (kkk->next != NULL) kkk->next->pre = temp;
			kkk->next = temp;
		}
	}

	void addend(int data)
	{
		node *temp = new node;
		temp->data = data;
	
		if (head == NULL)
		{
			head = temp;
		}
		else
		{
			node *kk = head;
			while (kk->next != NULL)
			{
				kk = kk->next;
			}
			temp->pre = kk;
			kk->next = temp;
		}
	}
	
	void delstart()
	{
		if (head == NULL)
		{
			cout << "List is empty" << endl;
			return;
		}
		node *temp = head;
		head = head->next;
		if (head != NULL) head->pre = NULL;
		delete(temp);
	}
	
	void delmid(int data)
	{
		if (head == NULL)
		{
			cout << "List is empty" << endl;
			return;
		}
		node *temp = head;
		while (temp != NULL && temp->data != data)
		{
			temp = temp->next;
		}
		if (temp == NULL)
		{
			cout << "Element not found." << endl;
			return;
		}
		if (temp->pre != NULL) temp->pre->next = temp->next;
		if (temp->next != NULL) temp->next->pre = temp->pre;
		if (temp == head) head = temp->next;
		delete(temp);
	}
	
	void delend()
	{
		if (head == NULL)
		{
			cout << "List is empty" << endl;
			return;
		}
		node *temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		if (temp->pre != NULL) temp->pre->next = NULL;
		else head = NULL;
		delete(temp);
	}
};

int main()
{
	doubly D;
	int choice, data, pos;
	do {
		cout << "\nMenu:\n";
		cout << "1. Add at start\n";
		cout << "2. Add at position\n";
		cout << "3. Add at end\n";
		cout << "4. Delete from start\n";
		cout << "5. Delete by value\n";
		cout << "6. Delete from end\n";
		cout << "7. Traverse\n";
		cout << "8. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;
		
		switch (choice) {
			case 1:
				cout << "Enter data to add at start: ";
				cin >> data;
				D.addstart(data);
				break;
			case 2:
				cout << "Enter data to add: ";
				cin >> data;
				cout << "Enter position after which to insert: ";
				cin >> pos;
				D.addmid(data, pos);
				break;
			case 3:
				cout << "Enter data to add at end: ";
				cin >> data;
				D.addend(data);
				break;
			case 4:
				D.delstart();
				break;
			case 5:
				cout << "Enter data to delete: ";
				cin >> data;
				D.delmid(data);
				break;
			case 6:
				D.delend();
				break;
			case 7:
				cout << "List elements: ";
				D.traverse();
				break;
			case 8:
				cout << "Exiting..." << endl;
				break;
			default:
				cout << "Invalid choice! Please try again." << endl;
		}
	} while (choice != 8);

	return 0;
}

