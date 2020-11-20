#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
};

class LinkedList
{
    private:
        Node *head;
    public:
        LinkedList(){head = NULL;}
        LinkedList(int A[], int n);
        ~LinkedList();

        void Display();
        void Create(int A[], int n);
        void Insert(int index, int x);
        int Delete(int x);
};

LinkedList::LinkedList(int A[], int n)
{
    Node *last, *temp;
    head = new Node;
    head->data=A[0];
    head->next = NULL;
    last = head;
    for(int i=1; i<n; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next=NULL;
        last->next=temp;
        last = temp;
    }
}

LinkedList::~LinkedList()
{
    Node *p = head;
    while(head)
    {
        head = head->next;
        delete p;
        p = head;
    }
}

void LinkedList::Display()
{
    Node *p = head;
    while(p)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

void LinkedList::Insert(int index, int x)
{   
    Node *t;
    t = head;
    int count;
    count = 0;

    while (count < index && t)
    {   
        count++;
        t = t->next;
        if(t==NULL)
        {   
            cout<<"given index is out of range"<<endl;
            return;
        }
    }
    if(count==index)
    {
        Node *temp;
        temp = new Node;
        temp->data=x;
        temp->next=t->next;
        t->next=temp;
    }
}

int LinkedList::Delete(int x)
{
    Node *p;
    p = head;
    Node *q;
    int data;
    q = NULL;

		if(p->data==x)
		{
			data = p->data;
            head=p->next;
			delete p;
            return data;
		}
		p = p->next;	

    while (p)
    {
        if(p->data==x)
        {
            q->next = p->next;
            data = p->data;
            delete p;
            return data;
        }
        q = p;
        p = p->next;
    }
    return -1;
    
}

int main()
{
    int A[] = {1,2,3,4};
    LinkedList l(A, 4);
    l.Insert(2,5);
    l.Display();
    l.Delete(3);
    l.Display();
    return 0;
}