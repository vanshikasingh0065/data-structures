#include <iostream>

using namespace std;

int main()
{
    int queue[50];
    int front=-1;
    int rear=-1;
    int i=0, n, val, size;
    cin>>n;
    size=n;
    int j=0;
    while(size--)
    {
        cin>>val;
    if(front==-1 && rear==-1)
    {
        rear=rear+1;
        front=front+1;
        queue[rear]=val;
    }
    else if(rear==(n-1))
    {
        cout<<"overflow";
        //cout<<n;
    }
    else{
        rear=rear+1;
        queue[rear]=val;
    }
    //i=i+1;
    }
    for(i=0; i<n; i++)
    {
        cout<<queue[i]<<endl;
    }

    return 0;
}
