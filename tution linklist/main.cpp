#include <iostream>
//wap of insertion beginning
using namespace std;
//this is
    struct node{
    int info;
    node *link;
    };

int main()
{
    node *start, *p;
    char ch;

    start= NULL;
   do{ p=new node();
    cin>>p->info;
    p->link=NULL;

    if(start==NULL)
    {
        start=p;
    }
    else{
     p->link= start;
     start=p;
    }
    cin>>ch;
   }while(ch=='y');
   p=start;
   while(p!=NULL)
   {
       cout<<p->info<<" ";
     p=p->link;
   }
    return 0;
}
