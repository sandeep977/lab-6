# Lab-6-pointers
//ques 7
#include <iostream>
#include<string.h>
using namespace std;
int length(char*x1)
{
  char le;int de=0,i=0;
  for(i =0; *(x1+i)!='\0';i++)
  {
    de++;
  }
  return de;
}
char *copy(char *x1,char *x2)
{
  x2=x1;
  return x2;
}
int compare(char*x1,char*x2)
{
    if(x1==x2)
     return 1;
    else
     return 0;
}
char*chr(char*x1,char ch)
{
  int d;
  char*cp;
  for(int x=0;x<length(x1);x++)
  {
    if(*(x1+x)==ch)
    {
        d=x;
        break;
    }

  }
  for(int i=d;i<length(x1);i++)
    cout<<*(x1+i);
  return 0;
}
char*addstring(char*x1,char*x2)
{
    char*x3;
    x3=x1+x2;
    return x3;
}
int main()
{
    char str1[10]="hello";
    char str2[10]=" Akash";
    char str3[10];
    char *a1;
    a1=str1;
    char *a2=str2;
    char *a3;
    cout<<"length of the string a1 : "<< length(a1);
    char *d=copy(a1,a3);
    cout<<endl<<"Copy of a1 in a3 : ";
    for(int i=0;i<length(d);i++)
    cout<<*(d+i);
    cout<<endl<<"Compare the string a1 and a2 : "<<compare(a1,a2)<<endl;
    cout<<" strchr(a1,'l') : " ;
    chr(a1,'l');
    char*a4=addstring(a1,a2);
    for(int i=0;i<length(a4);i++)
     cout<<*(a4+i);
    return 0;
}
