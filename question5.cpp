# Lab-6-pointers
//ques 5
#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
    cout<<"\nEnter about 10 character of string : ";
    cin.getline(str,30);
    cout<<"\noutput : ";
    for(int i=0;i<strlen(str);i++)
    {
     for(int j=i;j<strlen(str);j++)
      cout<<*(str+j);
     cout<<"\n";
    }
    return 0;
}
