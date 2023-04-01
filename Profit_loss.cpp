//Purpose: a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and calculate Profit or Loss. 
#include<iostream>
using namespace std;
int main(){ 
 int C_p, S_p,profit, loss;
 cout<<"Enter the cost price and selling price\n";
 cin>>C_p>>S_p;
 
 if(S_p>C_p)
 cout<<"Profit: "<<S_p-C_p;
 else if(S_p<C_p)
 cout<<"Loss: "<<C_p-S_p;
 else
 cout<<"There is no profit and loss";
return 0;
}
