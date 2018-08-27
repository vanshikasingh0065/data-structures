#include <iostream>

using namespace std;

int main()
{
  int arr[10], i,j, pos,n, b[10];
    int flag=0;
    for (i=0; i<10; i++)
    {
        cin>>arr[i];
    }

    cin>>n;
    cin>>pos;
    for(i=0; i<10; i++)
    {

        if(i==pos)
        {
            cout<<n<<"\n";
        }
        cout<<arr[i]<<"\n";
    }
    return 0;
}
