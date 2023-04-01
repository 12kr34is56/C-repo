// //Purpose: Find the total number of pairs in the ARRAY NOT VECTOR Mwhose sum is equal to x 
// #include<iostream>
// using namespace std;
// int main(){ 
//  int arr[]={1,2,3,4,5, 0, 3}, count=0;
//  int size=sizeof(arr)/sizeof(arr[0]), x=3;
//  for(int i=0; i<size;i++){
//     for(int j=i+1; j<size; j++){
//         if(arr[i]+arr[j]==x){
//             cout<<arr[i]<<"+"<<arr[j]<<"="<<arr[i]+arr[j]<<endl;
//             count++;
//         }
//     }
//  }
//  cout<<"count: " <<count;
 
// return 0;
// }


// //Purpose: Find the triplets of numbers in an array whose sum is equal to x 
// #include<iostream>
// using namespace std;
// int main(){ 
//   int arr[]={1,2,3,4,5, 0, 3}, count=0;
//  int size=sizeof(arr)/sizeof(arr[0]), x=6;
//  for(int i=0; i<size; i ++){
//     for(int j=i+1; j<size; j++){
//         for(int k=j+1; k<size; k++){
//             if(arr[j]+arr[k]==(x-arr[i])){
//             cout<<arr[i]<<"+"<<arr[j]<<"+"<<arr[k]<<"="<<arr[i]+arr[j]+arr[k]<<endl;
//             count++;
//             }
//         }
//     }
//  }
//  cout<<"count: "<<count;
// return 0;
// }


// //Purpose: FInding a unique number in a given array 
// #include<iostream>
// using namespace std;
// int main(){ 
//  int arr[]={1,2,3,4,5, 0, 3}, count=0;
//  int size=sizeof(arr)/sizeof(arr[0]);
//  for(int i=0; i<size; i++){
//     for(int j=i+1; j<size; j++){
//         if(arr[i]==arr[j]){
//             arr[i]=-1;
//             arr[j]=-1;
//         }
//     }
//  }

//  cout<<"Printing the unique numbers in an array\n";
//  for(int i=0; i<size; i++){
//     if(arr[i]!=-1){
//         cout<<arr[i]<<" ";
//     }
//  }
// return 0;
// }


// //Purpose: Rotate the given array by k steps 
// #include<iostream>
// using namespace std;
// int main(){ 
//  int num, arr[]={1,2,3,4,5};
//  int size=sizeof(arr)/sizeof(arr[0]);
//  cout<<"Enter the number of rotation\n";
//  cin>>num;
//  for(int i=1;i<=num; i++){
// for(int j=size-1;j>=1;j--){
//     int temp=arr[j];
//     arr[j]=arr[j-1];
//     arr[j-1]=temp;
// }}
// for(int ele:arr){
//     cout<<ele<<" ";
// }
// return 0;
// }


// //Purpose: Given Q queries, check if the given number is presetn in an array or not (Queries should contain number less than 10 to the powere 5)
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){ 
//  int n;
//  cout<<"ENter";
//  cin>>n;
//  vector<int> arr(n);
//  for(int i=0; i<n; i++){
//     cin>>arr[i];
//  }

//  const int N= 1e5;
//  vector <int> vec(N,0);
//  for(int i=0; i<n; i++){
//     vec[arr[i]]=vec[arr[i]]+1;
//  }

// int q;
// cout<<"enter the number of queries\n";
// cin>>q;
// cout<<"Start enetering you query element\n";
//  for(int i=0; i<q;i++){
//     int queryElement;
//     cin>>queryElement;
//     cout<<"frequency: "<<vec[queryElement]<<endl;
//  }
// return 0;
// }
