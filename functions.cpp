//Purpose: C++ FUnctions assignments
#include<iostream>
using namespace std;
#define pi 3.14
void squareOfNatural(int num); //Function to print the square of entered natural number 
void area_circumference(int radius); //Function to print the area and circumference of the entered radius
void odd_numbers(int initial, int final); //Function to print al the odd numebrs between betwween two numebrs
void prime_numbers(int initial, int final); //a program to print all the prime numbers present between a and b.

int main(){ 
 int num, radius, a, b;
//  cout<<"Enter the number of terms\n";
//  cin>>num;
// squareOfNatural(num);
// cout<<"Enter the radius of the circle\n";
// cin>>radius;
// area_circumference(radius);
cout<<"Enter the value of a and b\n";
cin>>a>>b;
// odd_numbers(a,b);
prime_numbers(a,b);
return 0;
}
void squareOfNatural(int num){
 for(int i=1;i<=num; i++){
    cout<<i*i<<" ";
 }}
 void area_circumference(int radius){
   cout<<"Area of the circle: "<<pi*radius*radius<< endl;
   cout<<"Circumference of the circle: "<< 2*pi*radius<< endl;
 }
void odd_numbers(int initial, int final){
for(int i=initial; i<=final; i++){
   if(i%2==1){
      cout<<i<<" ";
   }
}
} 
void prime_numbers(int initial, int final){
for(int i=initial; i<final; i++){
   bool flag=true; //It is a prime number
      if(i==1){
      continue;
   }
   
   for(int j=2; j<i; j++){
      if(i%j==0){
         flag=false; //It is not a prime number
      }
   }
   if(flag){
      cout<<i<<" ";
   }
}
}

