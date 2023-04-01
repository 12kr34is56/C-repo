//Purpose: Sort an array consisting of 0s and 1s 
#include<iostream>
using namespace std;
int main(){ 
 int arr[]={0,1,0,0,1,0,1};
 int size=sizeof(arr)/sizeof(arr[0]);
 int count_1=0, count_0=0;
 for(int i=0; i<size; i++){
    if(arr[i]==1){
        count_1++;
    }
    else{
        count_0++;
    }
 }
 int arr2[size];
 for(int i=0; i<size; i++){
    if(i<count_0){
        arr2[i]=0;
    }
    else{
        arr2[i]=1;
    }
 }
 for(int ele: arr2){
    cout<<ele<<" ";
 }
return 0;
}
