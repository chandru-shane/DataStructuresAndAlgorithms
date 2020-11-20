#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    Node *next;
}*first;

void create(int A[], int n)
{
    struct Node *last, *temp;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next=first;
    last = first;
    for(int i=1; i<n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data= A[i];
        temp->next = first;
        last->next=temp;
        last = temp;
        
    }
}

void Display(struct Node *p){
    int flag = 1;
    while(first!= p || flag)
    {
        if(first==p)
        {
            flag=0;
        }
        printf("%d ", p->data);
        p = p->next;
    }
}

int main()
{
    int A[] = {1,2,3,4,5};
    create(A, 5);
    Display(first);

    return  0;
}