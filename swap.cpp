//Purpose: A program to swap two numbers using third variable 
#include<iostream>
using namespace std;
int main(){ 
 int a,b,c;
 cout<<"Enter two numbers for swapping\n";
 cin>>a>>b;
 c=a;
 a=b;
 b=c;
 cout<<"a: "<<a<<endl<<"b: "<<b;
return 0;
}
