#include <iostream>

using namespace std;
int a[30];
int top=-1;
void push(int element)
{
    a[++top]=element;
}
int pop()
{
    return a[top--];
}
int main()
{
    char *e, exp[50];
    int n1, n2, n3, num;
    cin>>exp;
    e=exp;
    while(*e!='\0')
    {

        if(isdigit(*e))
        {
            num=*e-'0';
            push(num);
        }
        else
        {
        n1=pop();
        n2=pop();
        switch (*e)
        {
        case '+':
            n1+n2;
            break;
        case '*':
            n1*n2;
            break;
        case '-':
            n1-n2;
            break;
        case '/':
            n1/n2;
            break;
        }
        push(n3);
    }
    e++;
    }
    cout<<exp<<endl<<pop();



    return 0;
}
