//Purpose: a program to calculate the sum of digits of a 3 digit number. 
#include<iostream>
using namespace std;
int main(){ 
 int num, sum=0, k=0;
 cout<<"Enter a three digit number\n";
 cin>>num;
 while(num!=0){
    k=num%10;
    sum=sum+k;
    num/=10;
 }
 cout<<"The sum is : "<<sum;
return 0;
}
