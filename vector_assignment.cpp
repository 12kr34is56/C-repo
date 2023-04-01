//Purpose: Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the two arrays into a single sorted array of size m+n. 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){ 
//     int m , n;
//     cout<<"Enter the number of elements in 1st array and 2nd array: ";
//     cin>>m>>n;
//  vector <int> arr1(m), arr2(n);

//  cout<<"enter the elements of arr1: "<<endl;
//  for(int i=0; i<m; i++){
//     cin>>arr1[i];
//  }

//  cout<<"enter the elements of arr2: "<<endl;
//  for(int i=0; i<n; i++){
//     cin>>arr2[i];
//  }

// vector <int> arr(m+n);
//  for(int i=0; i<m+n; i++){
//     if(i<m){
//         arr[i]=arr1[i];
//     }
//     else {
//         arr[i]=arr2[i-m];
//     }
//  }
//  for(int element:arr){
//     cout<<element<<" ";
//  }
// return 0;
// }


// //Purpose: Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists a pair in the array whose sum is exactly x. AND x, find the number of unique pairs that exist in the array whose absolute sum is exactly x.
// #include<iostream>
// #include <vector>
// using namespace std;
// int main(){ 
//  int n,x;
//  cout<<"Enter the number of elements in array\n";
//  cin>>n;
//  vector <int> arr(n);
//  cout<<"Enter the elements of vector\n";
//  for(int i=0; i<n; i++){
//     cin>>arr[i];
//  }
//  cout<<"Enter the value of x\n";
//  cin>>x;

// // for(int i=0;i<n; i++){
// //    for(int j=n-1; j>i; j--){
// //       if(arr[i]+arr[j]==x){
// //          cout<< "yes\n";
// //          cout<<arr[i]<<"+"<<arr[j]<<"= "<<arr[i]+arr[j]<<endl;
// //          return 0;
// //       }
// //       else if(arr[i]+arr[j]<x){
// //          break;
// //       }
// //    }
// // }
// // cout<<"no";

// //More optimized logic
// int i=0, count=0;
// int j=n-1;
// while(i<j &&j<n)
// {
// if(arr[i]+arr[j]==x)
// {
// cout<<"Yes\n";
//     cout<<arr[i]<<"+"<<arr[j]<<"= "<<arr[i]+arr[j]<<endl;
//     count++;
//     i++;
//     j--;
// // return 0;
// }else if(arr[i]+arr[j]>x)
// {
// j--;
// }else{
// i++;
// }
// }
// cout<<"count: "<<count;
// return 0;
// }


// //Purpose: Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists a pair in the array whose absolute difference is exactly x. 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){ 
//    int n, x;
//    cout<<"Enter the elements of vector \n";
//    cin>>n;
//     cout<<"Enter the value of x\n";
//  cin>>x;
//  vector <int> arr(n);
// for(int i=0; i<n;i++){
//    cout<<"enter: ";
//    cin>>arr[i];
// }

// // for(int i=0; i<n;i++){
// //    for(int j=i+1; j<n; j++){
// //       if(arr[j]-arr[i]==x){
// //          cout<<"Yes";
// //          return 0;
// //       }
// //       else if(arr[j]-arr[i]>x){
// //       break;
// //       }
// //    }
// // }
// // cout<<"no";

// int i=0;
// int j=1;
// while(i<n&& j<n)
// {
// if((arr[j]-arr[i])==x)
// {
// cout<<"Yes";
// return 0;
// }else if((arr[j]-arr[i] )< (x))
// {
// j++;
// }else{
// i++;
// }
// }
// cout<<"No";

// return 0;
// }


// //Purpose: Given a vector arr[] sorted in increasing order. Return an array of squares of each number sorted in increasing order. 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){ 
//  int n;
//  cout<<"Enter the number of elements of vector\n";
//  cin>>n;
//  vector<int>arr(n);
//  for(int i=0;i<n; i++){
//    cin>>arr[i];
//  }

// //Logic for squaring each element after sorting 
// for(int i=0; i<n; i++){
//    arr[i]=arr[i]*arr[i];
// }
//  //Sorting the elements of the vector in ascending order
//  for(int i=0; i<n;i++){
//    for(int j=i+1; j<n; j++){
//       if(arr[i]>arr[j]){
//          int temp=arr[i];
//          arr[i]=arr[j];
//          arr[j]=temp;
//       }
//    }
//  }
//  for(int element: arr){
//    cout<< element<<" ";
//  }

// return 0;
// }


