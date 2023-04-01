//Purpose: a program to take the values of two variables a and b from the keyboard and then check if both the conditions 'a < 50' and 'a < b' are true. 
#include<iostream>
using namespace std;
int main(){ 
 int a,b;
 cout<<"Enter two numebrs\n";
 cin>>a>>b;
 if(a<b && a<50)
 cout<<"Both the conditions are satisfied\n";
 else
 cout<<"The conditions are not satisfied\n";
 
return 0;
}
