
#include <iostream>
#include <stdlib.h>

using namespace std;

struct node{
    int data;
    struct node *next;
    struct node * prev;
}*start;

struct node *create_node(int val)
{
    struct node *t;
    t=new(struct node);
    t->prev = NULL;
    t->data = val;
    t->next= NULL;
    return t;
};
void traverse()
{
    struct node *t;
    t=start;
    while(t!=NULL)
    {
        cout<<t->data<<endl;
        t=t->next;
    }
}
void insert_beg()
{
    int val;
    cin>>val;
    struct node* p;

     p=create_node(val);

    if(start==NULL)
    {
        start=p;
        p->prev=NULL;
        p->next=NULL;
    }
    else{
        p->next =start;
        start=p;
                p->prev = NULL;

    }
}
void insert_last()
{
    int pal;
    cin>>pal;
    struct node *p,*t;
    p= create_node(pal);
    t=start;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next=p;
    p->next=NULL;
    p->prev=t;
}

void insert_before()
{
    int val, n;
    cout<<"enter a number before which you want to insert the value";
    cin>>n;
    cout<<"enter value";
    cin>>val;
    struct node *t, *p;
    p=create_node(val);
    t=start;
    while(t->data!=n && t!=NULL)
    {
        t=t->next;
    }
    if(t!=NULL)
    {
        if(t==start){
            p->next=start;
            start=p;
            p->prev=NULL;
    }
    else{
            t->prev->next=p;
            p->next=t;
            p->prev=t->prev;
            t->prev=p;
    }
    }
    else{
       cout<<"not there";
    }
}

void insert_after()
{
    int n, val;
    struct node *t,*p;
    cout<<"enter a number after which you want to insert the value";
    cin>>n;
    cout<<"enter value";
    cin>>val;
    p=create_node(val);
    t=start;
    while(t->data!=n && t!=NULL)
    {t=t->next;
    }
        if(t!=NULL)
        {
            if(t->next==NULL)
            {

                p->prev=t;
                p->next=t->next;
                t->next=p;
            }
            else{

                    p->next=t->next;
                    p->prev=t;
                 t->next->prev=p;
                    t->next=p;


            }
        }


        else{
            cout<<"not there";
        }
    }




void delete_beg()
{
    struct node *t,*ptr;
    if(start==NULL)
    {

        cout<<"there is no list";
    }
    else{
        if(start->next==NULL)
        {
            ptr=start;
            start=NULL;
            free(ptr);
        }
        else
        {

            ptr=start;
            start=ptr->next;
            start->prev=NULL;
            free(ptr);
        }
    }
}
void delete_last()
{
    struct node *t, *p;
    t=start;
    while(t->next!=NULL)
    {
            p=t;
        t=t->next;
    }
    t->prev->next=NULL;

    free(t);

}
int main()
{
    start=NULL;
    cout<<"enter the node value  ";
     insert_beg();
      cout<<"enter the node value  ";
     insert_beg();

      cout<<"enter the node value ";
     insert_beg();
      cout<<"enter the node value  "<<endl;
     insert_beg();
      traverse();
      cout<<"enter the node value at the last";
     insert_last();
     traverse();
      cout<<endl;
      insert_after();
     cout<<"after insertion after your num";
     traverse();
      cout<<endl;
     insert_before();
     cout<<"after insertion before your num";
     traverse();
     cout<<endl;

     delete_beg();
     cout<<"deleting the 1st element";
     traverse();
      cout<<endl;
     delete_last();
     cout<<"deleting the last element";
     traverse();
      cout<<endl;



}
