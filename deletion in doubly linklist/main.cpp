#include <iostream>
#include<cstdlib>

using namespace std;

struct node{
int data;
struct node* next;
struct node* prev;
}*start;

struct node* create_node(int val)
{
    struct node*t;
    t=new(struct node);
    t->data=val;
    t->next=NULL;
    t->prev=NULL;
    return t;
} ;

 void traverse(){
 struct node*t;
 t=start;
 while(t!=NULL)
    {
        cout<<t->data;
        t=t->next;
    }
 }


 insert_beg()
 {
     int val;
     cin>>val;
    struct node *p,*t;
    p=create_node(val);
    if(start==NULL)
    {
        start=p;
        p->prev=NULL;
        p->next=NULL;
    }
    else{
        p->next=start;
        p->prev=NULL;
        start->prev=p;
        start=p;
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
            free(p);
            start->prev=NULL;
        }
     }
 }
 void deletion_end()
 {
     struct node *t;
     t=start;
     while(t!=NULL)
     {

         t=t->next;
     }

 }
main()
{
    start=NULL;
     insert_beg();
     insert_beg();
     insert_beg();
     insert_beg();
     deletion_beg();
     traverse();

}
