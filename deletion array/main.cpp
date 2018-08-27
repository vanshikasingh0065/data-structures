#include <iostream>

using namespace std;

int main()
{
     int arr[10], i,j, pos,n, size;
    int count=0;
    cin>>size;
    for (i=0; i<10; i++)
    {
        cin>>arr[i];
    }

    cin>>n;

    for(i=0;i<size; i++)
    {
    if(arr[i]==n)
    {
        for(j=i;j<(size-1); j++)
        {
            arr[j]=arr[j+1];
        }
        count ++;

    }
    }
    if(count==0)
    {
        cout<<"no not found";
    }
    else
    {

    for(i=0; i<(size-1); i++)
    {
        cout<<arr[i]<<endl;
    }

    }


    return 0;
}
