//Purpose: Binary to decimal equivalent 
#include<iostream>
#include<math.h>
using namespace std;
int main(){ 
 long long num;
 int decimal=0, count=0;
 cout<<"Enter the number\n";
 cin>>num;
 while(num!=0){
    decimal=decimal+(num%10)*pow(2,count);
    count++;
    num=num/10;
 }
 cout<<"The result is: "<<decimal ;
return 0;
}
