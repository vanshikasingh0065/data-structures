#include <iostream>

using namespace std;
struct node
{
    int data;
    struct node*next;
}*start;

void traverse()
{
    struct node*t;
    t=start;
    while(t!=NULL)
    {
        cout<<t->data;
        t=t->next;
    }
}
struct node* create_node(int val)
{
    struct node*t;
    t=new(struct node);
    t->data = val;
    t->next= NULL;
    return t;
};
void insert_beg(){
int val;
cin>>val;
struct node*P;
P= create_node(val);
if(start=NULL)
{
    start=P;
    P->next=NULL;

}
else{
    P->next= start;
    start=P;
}
}
void insert_last()
{
    struct node*P, *t;
        int val;
        cin>>val;
        P=create_node(val);
        t=start;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=P;
        P->next=NULL;
}

int main()
{

    start=NULL;
    insert_beg();
    insert_beg();
    insert_beg();
    insert_last();
    traverse();
}




