#include <iostream>
#include<bits/stdc++.h>

/*using namespace std;

balanced(string m)
{

    stack<char> s;
    char x;
     for(int i=0; i<m.length(); i++)
    {
    if(m[i]=='('|| m[i]=='{'|| m[i]=='[')
        {
            s.push(m[i]);
            continue;
        }
        if(s.empty())
        {
            return false;
        }
        switch (m[i])
        {
            case ')':
            {
                x=s.top();
                s.pop();
                if(x=='{'|| x=='[')
                    {
                        return false;
                        break;
                    }
            }
            case '}':
            {
                x=s.top();
                s.pop();
                if(x=='('|| x=='[')
                    {
                        return false;
                        break;
                    }
            }
            case ']':
            {
                x=s.top();
                s.pop();
                if(x=='('|| x=='{')
                    {
                        return false;
                        break;
                    }
            }
            }
            return (s.empty());
        }


}

int main()
{
   // stack st;
    string stringinput;
    cin>>stringinput;

    /*int n= stringinput.length();
    char char_array[n+1];
    strcpy(char_array, stringinput.c_str());
    for(i=0; i<stringinput.length; i++)
    {
    if(char_array[i]='('|| char_array[i]='{'|| char_array[i]='[')
        {
            char_array.push()
        }
    if (balanced(stringinput))
        cout << "Balanced";
    else
        cout << "Not Balanced";


    return 0;*/
    using namespace std;
int top=-1;
char arr[20]={'\0'};
class stack1
{
    public:
void push(char p,int len)
{
	if(top==len-1)
	{
    cout<<"overflow"<<endl;
	}
	else
	{
		top=top+1;
		arr[top]=p;

	}


}
void pop()
{
	if(top!=-1)
	{

		top=top-1;
	}
}
};
int main()
{
    int flag=0;
stack1 s;
string p;
cin>>p;
int k=p.length();
for(int i=0;i<p.length();i++)
{
if(p[i]=='{'||p[i]=='['||p[i]=='(')
{
s.push(p[i],k);
}
if(p[i]=='}'||p[i]==']'||p[i]==')')
{
if((arr[top]=='{' && p[i]=='}')||(arr[top]=='[' && p[i]==']')||(arr[top]=='(' && p[i]==')'))
{
s.pop();
flag=1;
}
else
{
flag=0;
break;
}
}
}
if(flag==0)
{
cout<<"invalid"<<endl;
}
else
{
cout<<"valid"<<endl;
}
}


