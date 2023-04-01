//Purpose: a program to calculate the sum of the first and the second last digit of a 5 digit number. 
#include<iostream>
using namespace std;
int main(){ 
 int num, last_2nd=0, first_digit=0;
 cout<<"Enter a five digit number\n";
 cin>>num;
num /=10;
last_2nd=num%10;
num/=1000;
first_digit=num%10;
cout<<"The sum of the last second digit and the first digit of a five digit number is : "<<last_2nd+first_digit<<endl;

return 0;
}
