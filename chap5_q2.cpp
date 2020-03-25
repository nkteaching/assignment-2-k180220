#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	static int size;
	int data;
	node* ptrnext;
	node(): ptrnext(0)  //default constructor 
	{

	} 
	node(int d) : ptrnext(0)  //parameterized constructor
	{
		this->data=d;
	}
	node(int d, node* n)
	{
		this->data=d;
		this->ptrnext=n;
	}
};
class SLL
{
	public:
	node *head;
	node* tail;
	int size;
	SLL(): head(0), tail(0), size(0)   //default constructor
	{
		
	}
	~SLL()
	{
		if(this->head != 0)
		{
			deleteList();
		}
	}
	void deleteList()  //delete linked list
	{
		node* curr;
		node* temp;
		curr = head;
		if(head != 0)
		{
			while(curr != 0)
			{
				temp = curr;
				curr = curr->ptrnext;
			}
		}
	}
	bool InsertAtTail(node* nN)  //insertion at tail
	{
		if(head==0)
		{
			head=nN;
			tail=nN;
			return true;
		}
		else
		{
			tail->ptrnext=nN;
			tail=nN;
			return true;
		}
		size++;
	}
	void Show()  //printing list
	{
		node* curr;
		curr=head;
		if(head==0)
		{
			cout<<"list empty"<<endl;
		}
		else
		{
			curr=head;
			while(curr->ptrnext != 0) 
			{
				cout<<curr->data<< "  " <<endl;
				curr=curr->ptrnext;
			}
			cout<<curr->data;
			cout<< " " <<endl;
		}
	}
	int count(node* head)
	{
		if(head==0)
		{
			return 0;
		}
		return 1+count(head->ptrnext);
	}
};
int main()
{
	SLL s1;
	node n1(7);
	node n2(10);
	node n3(5);
	node n4(8);
	s1.InsertAtTail(&n1);
	s1.InsertAtTail(&n2);
	s1.InsertAtTail(&n3);
	s1.InsertAtTail(&n4);
	cout<<s1.count(&n1);
}
