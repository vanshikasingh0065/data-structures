#include <iostream>

using namespace std;
struct node
    int info;
    node *next;
    }*start, *newptr, *save, *ptr;
    node *create_ptr(int);
    void display(node *);
    void insert_beg(node *);
    void delete_beg();
    void delete_end();
    void delete_position(int);
    void delete_pos_after(int);
    void delete_pos_beg(int);
    int main(){
        start=NULL;
        int inf;
        char ch='Y';
        int pos;
        while(ch=='Y'||ch='y')
        {
            cout<<"Enter info for new NODE \n";
            cin>>inf;
            newptr = create_ptr(inf);
            if(newptr!=NULL)
            {
                cout<<"Enable node in the beginning \n";
                insert_beg(newptr);

                cout<<"Now the list is :\n";
                display(start);
                cout<<"Press Y to enter more nodes \n";
                cin>>ch;//user enter if yes or no
            }
            cin>>pos;
            delete_pos_beg(pos);
            display(start);
            cin>>pos;
            delete_pos_after(pos);
            display(start);
            return 0;
        }
        void delete_pos_beg(int pos){
            node *t = start;
            node *ptr;
            int count=1;
            ptr=t;
            t=t->next;
            count ++;
        }
        ptr->next = t->next;
        delete t;
    }

    void delete_pos_after





int main()
{

    return 0;
}
