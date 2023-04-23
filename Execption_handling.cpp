1

#include<iostream>
using namespace std;
void test_try(int num)
{
    try{
        if(num>=0 && num<=9)
        throw  num;
        else
        cout<<"not a single number"<<endl;
        throw;
    }
    catch(int a)
    {
        cout<<"\n it is single nos:-"<<endl;
    }
    catch (char b[100])
    {
        cout<<b;
    }
}
int main()
{
    int num;
    cout<<"enter a number:-";
    cin>>num;
    test_try(num);
}
2


#include<iostream>
using namespace std;
int main()
{
    try
    {
        {
            throw 'e';
        }
    }
    catch(char e)
    {
        cout<<"Exeception caught"<<e<<endl;
    }
    
}
3

#include<iostream>
using namespace std;
int main()
{
    float num1,num2,ans;
    char Operator;
    cout<<"Enter the performance arthmatic operator:-"<<endl;
    cout<<"\n......................";
    try{
        cout<<"enter a first number"<<endl;
        cin>>num1;
        if(num1==0)
        throw 0;
        cout<<"Enter operator ";
        cin>>Operator;
        if(Operator!='+' && Operator!='-' &&
        Operator!='*' &&Operator!='/' )
        throw Operator;
        cout<<"Enter second operator"<<endl;
        cin>>num2;
        switch(Operator)
        {
            case '+':
            ans=num1+num2;
            break;
             case '-':
            ans=num1-num2;
            break;
             case '*':
            ans=num1*num2;
            break;
            if(num2==0)
            throw 0;
            ans=num1/num2;
            break;
        }
        cout<<"\nAnswerd "<<num1<<" "<<num2<<" "<<Operator <<" "<<num2<<" =="<<ans<<endl;
    }
    catch (const char c)
    {
        cout<<"\nExecpyion cath..\n bad operator "<<" "<<"not valid "<<endl;
    }
    catch (const int n)
    {
        cout<<"\n error:EXcption bad"<<endl;
    }
}


4

#include<iostream>
#include<string.h>
using namespace std;
bool isvalidemailid(char *);
int main()
{
    char email[100];
    cout<<"Enter email id";
    gets(email);
    try{
        if(isvalidemailid(email))
        cout<<"\nemailid valid:";
        else
        throw 'c';
    }
    catch (char c)
    {
        cout<<"\nExecption catch:"<<endl;
    }
    catch(...)
    {
        cout<<"\ndefacul Execption:"<<endl;
        return 0;
    }
    bool isvalidemailid(char *email);
    {
        int Atoffset=-1;
        int Dotoffset=-1;
        int lenth=0;
        for(int i=0;email[i]!='\0';i++)
        {
            if(email[i]=='@')
            Atoffset=i;
            else if(email[i]=='.')
            Dotoffset=i;
            lenth++;
        }
        if( Atoffset==-1 || Dotoffset==-1)
        return 0;
        if(Atoffset>Dotoffset)
        return 0;
        return!(Dotoffset>=(lenth-1));
    }
}

5

8

#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
    char uname[100];
    char pass[50];
    cout<<"enter user name:";
    gets(uname);
    cout<<"\nEnter password:";
    gets(pass);
    try{
        if(strlen(pass)<6)
        {
            cout<<"password most be at least 6 character:-";
            throw 'c';
        }
      bool digit_yes=false;
      bool valid;
      int len=strlen(pass);
      for(int count=0;count<len;count++)
      {
        if(isdigit(pass[count]))
        digit_yes=true;
      }
      if(!digit_yes)
      {
        valid=false;
        cout<<"charchar at least most be at least one digit (0-9)"<<endl;
        throw 'c';
      }
      else {
        valid = true;
        cout<<"\npassword is correct......";
      }
    }
    catch(char c)
    {
        cout<<"\ninvalid password ";
    }
    catch(...)
    {
        cout<<"\ndefacult ececption ";
    }
    return 0;
}