#include <iostream>

using namespace std;
int logic(char ch)
{
    if(ch=='+'||ch=='-')
    {

        return 3;
    }
    else if(ch=='/'||ch=='%'||ch=='*')
    {
        return 2;
    }
    else{
        return 1;
    }
    }
}

int main()
{
    char infix[50];
    char postfix[50];
    char stack[50];
    int p=0;
    int z=strlen(infix);
    infix[z]=")";
    infix[z+1]="\0";
    int top=0;
    while(infix[i]!='\0')
    {
        if(infix[i]>=0 && infix[i]<=9)
        {
            postfix[p]=infix[i];
            p=p+1;
        }
        else if(infix[i]=='(')
        {
           char ch=stack[top];
            stack(++top)=infix[i];

        }
        else if(infix[i]==')')
        {
            while(stack(top)!=')')
            {
                top--;

            }
        }
        else{
                if(logic(infix[i])>=logic(ch))
                {
                    stack[++top]=infix[i];
                }

        }
    }
    }
    return 0;
}
