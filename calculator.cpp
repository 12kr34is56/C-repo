//Purpose: Design a calculator to perform basic arithmetic operations (+,-,/,*,%) 
#include<iostream>
using namespace std;
int main(){ 
 int choice, result,a, b;
 cout<<"Enter two operands\n";
 cin>>a>>b;
 cout<<"1)addition\n2) Subtraction\n3) Multiplication\n4) Division\n5) Modulus\n\n";
 cout<<"Enter you choice\n";
 cin>>choice;

 switch (choice)
 {
 case 1:
    result=a+b;
    cout<<"THe output is: "<<result;
    break;
 case 2:
    result=a-b;
    cout<<"THe output is: "<<result;
    break;
 case 3:
    result=a*b;
    cout<<"THe output is: "<<result;
    break;
 case 4:
    result=a/b;
    cout<<"THe output is: "<<result;
    break;
 case 5:
    result=a%b;
    cout<<"THe output is: "<<result;
    break;
 
 default:
 cout<<"THe entered input is invalid\n";
    break;
 }
return 0;
}
