#include <iostream>

using namespace std;
struct node{

int info;
node*link;
};
int main()
{
    int item;

    node *start, *p, *t, *q, *m;
    start=NULL;
    do{
        p= new node();
        cin>>item;
        p->info= item;
    }
    if(start=NULL)
    {
        start=p;
    }
    else{
        t=start;
        while(t!=NULL&&t->info<p->info)
        {
            t=t->link;
        }
        if(t==start)
        {
            p->link=t;
            start=p;
        }
        else if(t==NULL){
                q=start;
        while(q->link!=NULL)
        {
            q=q->link;
            q->link=p;
        }
        }
        else{
            m=start;
            while (m->link!=t)
            {

                m=m->link;
            }
            m->link=p;
            p->link=t;
        }

        }
    return 0;
}
