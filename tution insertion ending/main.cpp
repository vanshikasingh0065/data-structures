#include <iostream>

using namespace std;
struct node{
    int info;
    node *link;
}*start;

int main()
{
    node *start, *p, *q;
    char ch;
    start=NULL;
    do{
        p=new node();
        cin>>p->info;
        p->link=NULL;
        if(start==NULL)
        {
            start=p;
        }
        else{
                q=start;
            while(q->link!=NULL)
            {
                q=q->link;
            }
       // p->info=q->info;
        q->link=p;
        }
                cout<<"enter yes or no"<<endl;
                cin>>ch;

    }while(ch=='y');

p =start;
   while(p!=NULL)
   {
       cout<<p->info<<" ";
     p=p->link;
   }
    return 0;
}
