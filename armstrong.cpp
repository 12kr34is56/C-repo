//Purpose: a program to print all Armstrong numbers between 100 to 500. Armstrong numbers are numbers whose sum of cube of its inividual digits is equal to the numebr itself. 
#include<iostream>
using namespace std;
int main(){ 
 int num, numcopy, k, sum=0;
 cout<<"Enter a number\n";
 cin>>num;
 numcopy=num;
 while(num!=0){
 k=num%10;
 sum= sum+(k*k*k);
 num/=10;
 }
 cout<<"sum: "<<sum<<"\nnum: "<<numcopy<<endl;
 if(sum==numcopy){
    cout<<"The entered number is an armstrong number"<<endl;
 }
 else
 cout<<"THe entered number is not an armstrong numeber\n";
return 0;
}
