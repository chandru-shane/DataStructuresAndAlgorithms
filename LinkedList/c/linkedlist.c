#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*first=NULL;


void create(int A[], int n)
{
    struct Node *t, *last;
    int i;
    first = (struct Node *)malloc(sizeof(struct Node ));
    last = (struct Node *)malloc(sizeof(struct Node ));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1; i<n;i++)
    {
        t= (struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last =t ;
    }
}

struct Node *createnew(int A[], int n)
{
    struct Node *t, *last, *head;
    head = (struct Node *)malloc(sizeof(struct Node ));
    last = (struct Node *)malloc(sizeof(struct Node));
    head->data=A[0];
    head->next=NULL;
    last = head;
    
    for(int i=1; i<n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last = t;
    }
    return head;
}

void display(struct Node *p)
{
    while(p!=NULL){
        printf("%d \n", p->data);
        p=p->next;
    }
}


int Rdisplay(struct Node *p)
{

printf("%d ", p->data);
 if (p->next==NULL)
    return 0;
p=p->next;
return Rdisplay(p);
}

void RDisplay(struct Node *p)
{
    if(p!=NULL)
    {

        RDisplay(p->next);
        
        printf("%d \n", p->data);
    }
}

int count(struct Node *p)
{
    int s=0;
    while(p!=NULL)
    {
        s=s+1;
        p=p->next;
    }
    return s;
}


int Rcount(struct Node *p)
{
    if(p==NULL)
        return 0;
    else
        return Rcount(p->next)+1;
}

int sum(struct Node *p)
{
    int sum=0;
    while(p)
    {
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}

int Rsum(struct Node *p)
{
    if(p)
        return Rsum(p->next)+p->data;
    else
    {
        return 0;
    }
    
}
int max(struct Node *p)
{
    int max = -2147483648;
    while(p)
    {
        if(p->data>max){
            max=p->data;
        }
        p=p->next;
    }
    return max;
}

int Rmax(struct Node *p)
{   
    int x;
    if(p->next==NULL)
        return -2147483648;
    x = Rmax(p->next);
    return x>p->data ? x : p->data;
    
}

// struct Node * LSearch(struct Node *p,int key)
// {struct Node *q;while(p!=NULL)    
//             {
//                 if(key==p->data)
//         {            q->next=p->next; 
//                         p->next=first;first=p;
//                         return p;}
//                         q=p;
//                         p=p->next;    }
//         return NULL;
// }

struct Node * Lsearch(struct Node *p, int key){
    struct Node *q=NULL;
    while(p!=NULL)
    {   
       

        if(p->data==key){
            printf("you found %d" , key);
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        
        }

         q=p;         
        p=p->next;
    }
    return NULL;
}

struct Node * Rsearch(struct Node *p, int key)
{
    if(p==NULL)
        return NULL;
    else if (p->data==key)
    {
        return p;
    }
    return Rsearch(p->next, key);
    
}

void insert (struct Node *p,int x, int pos)
{   
    struct Node *t;
    if(pos<0||pos>count(p)){
        return;
    }
    if(pos==0)
    {   
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data=x;
        t->next=first;
        first=t;
    }
    else if (pos>0)
    {
        for(int i=1; i<pos&&p; i++)
        {
            p=p->next;
        }
       if(p)
       {
       t = (struct Node *)malloc(sizeof(struct Node));
        t->data=x;
        t->next=p->next;
        p->next=t;
        
    }
    }
    
}
struct Node * findLast(struct Node *p){
    // time complexity is o(n)
    // space complexity is o(1)
    while(p->next!=NULL)
    {
        p=p->next;
    }
    return p;
    
}

void insertLast(struct Node *p, int x)
{
    struct Node *t, *last;
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        first=last=t;
        // return;
        return;
    }
    else{
        last=findLast(first);
        
        last->next=t;
        last=t;
        // printf("%d",last->data);
        return;
    }

}


void sortedInsert(struct Node *p, int x)
{

    struct Node *t, *q;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    if(p==NULL)
    {  
        
        first=t;
        printf("trying to display the t \n");
        display(p);
        printf("\n\n");
    }
    else{
        while(p && p->data<x)
    {
       
        q=p;
        p=p->next;
    }
    if(p==first)
    {
        t->next=p;
        first=t;
    }
    else{
        t->next=q->next;
        q->next=t;
    }
    }
}

int delete(struct Node *p, int index)
{   
    int x;
    
    if(index<0 || index>count(p))
        {
            return -1;
        }
    if(index==0)
    {
    struct Node *temp;
    temp=first;
    x = first->data;
    first = first->next;
    free(temp);
    }
    else
    {
        struct Node *q;
        for(int i=0; i<index-1 && p; i++)
        {
            q=p;
            p = p->next;
        }
        q->next=p->next;
        x=p->data;
        free(p);
    }
}

int isSorted(struct Node *p)
{
    int x = -65536;
    while(p!=NULL)
    {
        if(p->data<x)
            return 0;
        x=  p->data;
        p=p->next;
    }
    return 1;
}

void removeDuplicates(struct Node *p)
{
    struct Node *q;
    q=first->next;
    while(q!=NULL)
    {
        if(q->data!=p->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
            free(q);
            q = p->next;
        }
                
    }
}

void reversingArr(struct Node *p)
{
    struct Node *q;
    q = p ;
    int len,index=0;
    len = count(p);
    int A[len];
    while (p!=NULL)
    {   
        A[index]=p->data;
        index++;
        p=p->next;
    }
    index = index-1;
    while (index>=0&& q)
    {
     q->data=A[index];
     index--;
     q=q->next;
    }
    
}

void reversingSliding(struct Node *p)
{
    struct Node *q ,*t ;
    q = NULL;
    t = NULL;
    while(p!= NULL)
    {
        t = q;
        q = p;
        p = p->next;
        q->next=t;
    }
    first = q;
}

void reversingRec(struct Node *q, struct Node *p)
{
    if(p)
    {
        reversingRec(p, p->next);
        p->next=q;
    }
    else
    {
        first=q;
    }
    
}

void con(struct Node *p, struct Node *q)
{
    struct Node *temp;
    while(p->next)
    {
        p = p->next;
    }
    p->next=q;
}

struct Node * merge(struct Node *p, struct Node *q)
{   
    struct Node *third, *last;
    if(p->data < q->data)
    {   
        third = last = p;
        p = p->next;
        last->next=NULL;
    }
    else
    {
        third = last = q;
        q = q->next;
        last->next = NULL;
    }

    while (p && q)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p = p->next;
            last->next=NULL;
        }
        else
        {
            last->next=q;
            last=q;
            q = q->next;
            last->next=NULL;
        }
    }
    if(p)
    {
        last->next=p;
    }
    else
    {
        last->next=q;
    }
    return third;
}



int isLoop(struct Node *p)
{
    struct Node *q;
    q = p;
    while(p && q)
    {
        p = p->next->next;
        q = q->next;
        printf("%d %d \n", p->data, q->data);
        if(p==q){
            printf("hello world");
            return 1;}
        
    }
    return 0;
}

int main()
{   
    int A[] = {10, 10, 20, 20, 30, 40, 50, 70};
    create(A,8);
    struct Node *t1, *t2;
    t1 = first->next->next->next;
    t2 = findLast(first);
    t2->next=t1;
    printf("\n %d ", t2->data);
    if(isLoop(first))
    {
        printf("hello world");
    }
    // removeDuplicates(first);
    // display(first);
    // sortedInsert(first,33);
    // printf("\n");
    // display(first);
    
    // int B[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    // struct Node *second;
    // second = createnew(B, 9 );
    // struct Node *third;
    // third = merge(first, second);
    // display(third);
    // delete(first, 0);
    // display(first);
    return 0;
}