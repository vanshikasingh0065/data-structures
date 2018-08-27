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
    cin>>pos;
    for(i=0; i<10; i++)
    {

        arr[pos]=n;
    }
    for(i=0; i<10; i++)
    {


    cout<<arr[i]<<endl;
    }
    return 0;
}
