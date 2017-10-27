# Lab-6-pointers
//ques 2
#include<iostream>
using namespace std;
int main()
 {
 int a,b,*p;
 p=&a;
 b=*p;
 cout<<"\na="<<a;
 cout<<"\nb="<<b;
 cout<<"\np="<<*p;

 cout<<"\n\n";

 a=2;
 b=3;
 cout<<"\na="<<a;
 cout<<"\nb="<<b;
 cout<<"\np="<<*p;

cout<<"\n\n";

 p=&b;
 cout<<"\na="<<a;
 cout<<"\nb="<<b;
 cout<<"\np="<<*p;
 return 0;
 }
