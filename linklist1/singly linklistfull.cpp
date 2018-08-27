#include<cstdlib>
#include<iostream>


using namespace std;

struct node{
    int info;
    struct node* next;
}*start;

struct node* create_node(int val)
{
    struct node* t;
    t =new(struct node);
    t->info= val;
    t->next=NULL;
    return t;
}

void insert_beg(){
    cout<<"enter the node number";
    int val;
    cin>>val;
    struct node* P;
    P= create_node(val);
    if(start==NULL)
    {
        start=P;
        P->next=NULL;
    }
    else{
        P->next=start;
        start=P;
    }
}

void insert_last(){
    int val;
cout<<"enter the element at last";
cin>>val;
struct node *p, *t;
p=create_node(val);
t=start;
while(t->next!=NULL)
{
    t=t->next;
}
p->next=NULL;
t->next=p;

}

void insert_before(){
int val, n;
cout<<"enter the number before which you want to insert the element";
cin>>n;
cout<<"enter the value";
cin>>val;
struct node *p, *t, *ptr;
p=create_node(val);
t=start;
while(t->info!=n && t!=NULL)
{
    ptr=t;
    t=t->next;
}
if(t!=NULL)
{
if(t==start)
{
    start=p;
}
else{
        ptr->next=p;
    p->next=t;

}
}
}

void insert_after()
{
    int n, val;
    cout<<"enter the number after which you want to insert the element";
cin>>n;
cout<<"enter the value";
cin>>val;
struct node *p, *t, *ptr;
p=create_node(val);
t=start;
while(t->info!=n && t!= NULL)
{


    t=t->next;
}
    if(t!=NULL)
{
    if(t->next==NULL)
    {
        p->next=NULL;
        t->next=p;
    }
    else{
    p->next=t->next;
    t->next=p;
}

}
}
void delete_beg()
{
    cout<<"deletion starts here";
    struct node *ptr;
    if(start==NULL)
    {
        cout<<"The is no linked list present"<<endl;
    }
    else if(start->next==NULL){
            start= NULL;
    }
    else{
        ptr= start;
        start= start->next;
        free(ptr);
    }
}
void delete_last()
{
    struct node *t,*p;
    t=start;
    while(t->next!=NULL)
    {
        p=t;
        t=t->next;
    }
    free(t);
    p->next=NULL;

}
void deletion_before()
{

int val, n;
struct node *p,*t,*ptr;
t=start;
while(t->info!=n && t!=NULL)
{
    ptr=t;
    t=t->next;

}
if(t==start)
{
    cout<<"not possible";

}
else{
    free(ptr);

}
}
void traverse()
{
    cout<<"traverse";
    struct node *t;
    t=start;
    while(t!=NULL)
    {
        cout<<t->info<<endl;
        t=t->next;
    }
}
int main()
{

start=NULL;
     insert_beg();
     insert_beg();
     insert_beg();
     insert_beg();
     cout<<"after insertion at beginning";
     traverse();
     cout<<endl;
     insert_last();
     cout<<"after insertion at last";
     traverse();
     cout<<endl;
     insert_before();
     cout<<"before";
     traverse();
     cout<<endl;
     insert_after();
     cout<<"after";
     traverse();
     cout<<endl;
    delete_beg();
    cout<<"after the deletion of beginning";
    traverse();
    delete_last();
    cout<<"after the deletion at last";
    traverse();
    return 0;
}
