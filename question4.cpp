# Lab-6-pointers
//ques 4
#include<iostream>
#include<cstring>
using namespace std;
int main()
 {
 int i=0;
 char a[100];
 cout<<"\nenter string:";
 cin.getline(a,100);
 cout<<"\nnormal method:\n";
 for(i=0;i<strlen(a);i++)
 cout<<a[i];
 cout<<"\npointer method\n";
 for(i=0;i<strlen(a);i++)
 cout<<*(a+i);
 return 0;
 }
