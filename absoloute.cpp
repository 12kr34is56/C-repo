//Purpose: a program to print absolute value of a number entered by the user. 
#include<iostream>
using namespace std;
int main(){ 
 int num;
 cout<<"Enter the number\n";
 cin>>num;
 if(num>=0)
 cout<<"Absolute: "<<num;
 else
 cout<<"absolute: "<<-(num);

return 0;
}
