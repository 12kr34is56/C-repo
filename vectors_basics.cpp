//Purpose: Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the two arrays into a single sorted array of size m+n. 
// #include<iostream>
// #include<vector>

// using namespace std;
// int main(){ 
// vector <int> vec(3);
// cout<< "Size: " <<vec.size()<<" Capacity: "<< vec.capacity()<<endl;

// vec.push_back(49);
// cout<< "Size: " <<vec.size()<<" Capacity: "<< vec.capacity()<<endl;
// for(int element:vec){
//     cout<<element<<endl;
// }

// vec.pop_back();
// cout<<"after pop_back: "<<endl;
// for(int element:vec){
//     cout<<element<<endl;
// }

// vec.insert(vec.begin(),30);
// cout<<"after inserting: "<<endl;
// for(int element:vec){
//     cout<<element<<endl;
// }

// vec.erase(vec.end()-2);
// cout<<"after deleting: "<<endl;
// for(int element:vec){
//     cout<<element<<endl;
// }

// vec.clear();
// cout<<"after clearing"<<endl;
// cout<< "Size: " <<vec.size()<<" Capacity: "<< vec.capacity()<<endl;
// for(int element:vec){
//     cout<<element<<endl;
// }

// return 0;
// }


//Purpose: For taking input and printing elements of vectors 
#include<iostream>
#include<vector>
using namespace std;
int main(){ 
 int num;
 cout<<"Enter the number of elements\n";
 cin>>num;
 vector <int> v(num);
 for(int i=0; i<num; i++){
    int element;
    cout<<"Enter element number "<<i<<": ";
    cin>>element;
    v[i]=element; //Remember this will not work when we dont declare the size of vector in our declaration
    // v.push_back(element);
 }

 cout<<endl<<"The entered vectors elements are: ";
//  for(int i=0; i<num or v.size(); i++){ // Use for loop to print element when you want to control how many elements you want to print
//     cout<<v[i]<<" ";
//  }

for(int ele: v){ //Use for each loop if you waant to print all the elements of vectors
    cout<<ele<<" ";
}
return 0;
}
