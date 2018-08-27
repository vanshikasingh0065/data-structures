#include <iostream>
#include <stdlib.h>

using namespace std;

struct node
{

    int data;
    struct node *prev;
    struct node *next;
}*start;

struct node* create_node(int val)
{

struct node *t;
t= new(struct node);
t->data=val;
t->next=NULL;
t->prev=NULL;
return t;
};

void insert_beg()
{

    int val;
    cout<<"Enter the value for the node  ";
    cin>>val;
    struct node *p;
    p=create_node(val);
    if(start==NULL)
{
    start=p;
    p->next=NULL;
    p->prev=NULL;
}
else
    {
    p->next=start;
    start->prev=p;
    start=p;
    p->prev=NULL;
}
}

void traverse(){

struct node *t;
t = start;
while(t!=NULL)
{
    cout<<t->data<<endl;
    t=t->next;
}
}

void insert_before()
{
    int n, val;
    cout<<"enter the node before which you wish to enter the value"<<endl;
    cin>>n;
    cout<<"enter the value";
    cin>>val;
    struct node *p, *t;
    p=create_node(val);
    if(start==NULL)
    {
        start=p;
        p->next=NULL;
        p->next=NULL;
    }
    else{
        t=start;
        while(t->data!=n && t!=NULL)
        {

            t=t->next;
        }
        if(t!=NULL)
        {
            if(t==start)
            {
                p->next=start;
                start=p;
                p->prev=NULL;
            }
            else{
                t->prev->next=p;
                p->prev=t->prev;
                p->next=t;
                t->prev=p;
            }
        }
        else{
            cout<<"Not there";
        }
    }
}
void deletion_beg()
{
    struct node *p;
    if(start==NULL)
    {

        cout<<"empty list";
    }
    else{
        if(start->next==NULL)
        {
            p=start;
            start=NULL;
            free(p);
        }
        else{
            p=start;
            start=p->next;
            p->prev=NULL;
            free(p);
        }
    }
}

void deletion_end()
{

    struct node *t;
    t=start;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->prev->next=NULL;

    free(t);


}
void deletion_before()
{
    int val;
    struct node *p, *t, *m;
    cout<<"enter the value before which u wanna delete"<<endl;
    cin>>val;
    if(start==NULL)
    {

        cout<<"no such node";
    }
    else{
            t=start;
        while(t!=NULL&&t->data!=val)
        {
            p=t;
            t=t->next;
        }
        if(t==start)
        {
            cout<<"deletion beg not possible for 1st value"<<endl;
        }
        else if(start->next==t)
        {
            p=start;
            start=t;
            p->next=NULL;
            p->prev=NULL;
            free(p);
        }
        else{
             m=p->prev;
        m->next=p->next;
        p->next->prev=m;
        p->next=NULL;
        p->prev=NULL;
        free(p);

        }
    }

}
void deletion_after()
{
    int val;
    struct node *p,*t;
    cout<<"Number after which you wanna delete"<<endl;
    cin>>val;
    if(start==NULL)
    {
        cout<<"empty list"<<endl;
    }
    else{
        t=start;
        while(t->data!=val && t!=NULL)
        {
            t=t->next;
        }

        if(t->next==NULL)
        {

            cout<<"deletion not possible"<<endl;

        }
        else{
          //      cout<<"t: "<<t->data<<endl;
       // cout<<"t->next: "<<t->next->data;
                p=t->next;
                t->next=p->next;//t->next=p->next or m=p->next
                p->next->prev=t;
                //cout<<p->data<<endl;
                //cout<<t->data<<endl;

                p->prev=NULL;
                p->next=NULL;
                //free(p);
        }

    }
}

int main()
{
    start=NULL;
    insert_beg();
    insert_beg();
    insert_beg();
    insert_beg();
    insert_beg();
    insert_beg();
    insert_beg();
    insert_beg();
    cout<<"After insertion at beg"<<endl;
    traverse();
    cout<<endl;
    insert_before();
    cout<<"After insertion before your number"<<endl;
    traverse();
    cout<<endl;
    deletion_beg();
    cout<<"after deletion beginning"<<endl;
    traverse();
    cout<<endl;
    deletion_end();
    cout<<"after deletion ending"<<endl;
    traverse();
    cout<<endl;
    deletion_before();
    cout<<"After deletion before your number"<<endl;
    traverse();
    cout<<endl;
    deletion_after();
    cout<<"After deletion after your number"<<endl;
    traverse();
    cout<<endl;
    return 0;
}
