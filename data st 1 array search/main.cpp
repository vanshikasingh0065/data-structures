#include <iostream>

using namespace std;

int main()
{
    int arr[10], i, pos,n;
    int flag=0;
    for (i=0; i<10; i++)
    {
        cin>>arr[i];
    }

    cin>>n;

    for(i=0; i<100; i++)
    {
    if(arr[i]==n)
    {
        flag=1;
        pos=i;
        break;
    }
    }

    if(flag==1)
    {
        cout<<pos<<endl;
    }

    return 0;
}
