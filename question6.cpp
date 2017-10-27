# Lab-6-pointers
//ques 6
#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
    cout<<"\nEnter about 10 character of string : ";
    cin.getline(str,30);
    cout<<"\noutput : ";
    for(int i=strlen(str);i>=0;i--)
    {
     for(int j=i;j<strlen(str);j++)
      cout<<*(str+j);
     cout<<"\n";
    }
    return 0;
}
