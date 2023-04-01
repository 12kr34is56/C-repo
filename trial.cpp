//Purpose:  
#include<iostream>
using namespace std;
int isPrime(int n){
for(int i=2; i<n; i++){
    if(n%i==0){
        return 0;
    }
}
return 1;
}
int nextPrime(int n){
 do{
 n++;
 cout<<"The number is : "<< n<< endl;
 } while (!isPrime(n));
return n;
}
int main(){ 
 int num, next;
 cout<<"Enter a number\n";
 cin>>num;
if(isPrime(num-2)){
    cout<<"WOrking";
}
// cout<<next;
return 0;
}
