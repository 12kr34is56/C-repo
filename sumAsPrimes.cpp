// Purpose: a c++ program to check whether a number can be expressed as a sum of two prime numbers 
#include<iostream>
using namespace std;
int isPrime(int n){
for(int i=2; i<n; i++){
    if(n%i==0)
        return 0;
}
return 1;
}
int nextPrime(int n){
 do{
 n++;
 } while (!isPrime(n));
return n;
}
int main(){ 
 int num;
 cout<<"Enter a number\n";
 cin>>num;
for(int i=2;i<=num-i; i=nextPrime(i)){
    if(isPrime(num-i))
    cout<<i<<"+"<<num-i<<"="<<num<< endl;
}
return 0;
}
