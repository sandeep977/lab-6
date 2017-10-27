# Lab-6-pointers
//ques 3
#include<iostream>
using namespace std;
int main()
 {
 int i,a[10];
 cout<<"\nenter array elements:";
 for(i=0;i<10;i++)
 cin>>a[i];
 cout<<"\nnormal method:";
 for(i=0;i<10;i++)
 cout<<"\n"<<a[i];
 cout<<"\npointer method";
 for(i=0;i<10;i++)
 cout<<"\n"<<*(a+i);
 return 0;
 }
