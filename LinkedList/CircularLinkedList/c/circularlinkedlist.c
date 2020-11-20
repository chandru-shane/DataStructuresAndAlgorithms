#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    Node *next;
}*head;

void create(int A[], int n)
{
    struct Node *last, *temp;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next=head;
    last = head;
    for(int i=1; i<n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data= A[i];
        temp->next = head;
        last->next=temp;
        last = temp;
        
    }
}

void Display(struct Node *p){
    int flag = 1;
    while(head!= p || flag)
    {
        if(head==p)
        {
            flag=0;
        }
        printf("%d ", p->data);
        p = p->next;
    }
}

void DOdisplay(struct Node *p)
{   
    printf("Running DOdisplay function\n");
    do{
        printf("%d ", p->data);
        p = p->next;
    }while(p!=head);
}

void Rdisplay(struct Node *h)
{
    static int flag = 1;
    if(h!=head || flag)
    {
        flag = 0;
        printf("%d ", h->data);
        Rdisplay(h->next);
    }
    flag=0;
}

int main()
{
    int A[] = {1,2,3,4,5};
    create(A, 5);
    Rdisplay(head);

    return  0;
}