// Purpose: Merge the two arrays into a single sorted array of size m+n. 
// #include<iostream>
// using namespace std;
// int main(){ 
//  int arr1[]={1,2,3,4,5};
//  int arr2[]={6,7,8,9,10};
//  int size=(sizeof(arr1)+sizeof(arr2))/sizeof(arr1[0]), size2=sizeof(arr1)/sizeof(arr1[0]);
//  int arr3[size];
// for(int i=0; i<size; i++){
//     if(i>(size2-1)){
//         arr3[i]=arr2[i-size2];
//     }
//     else{
//         arr3[i]=arr1[i];
//     }
// }
// for(int i=0; i<size; i++){
//     cout<<arr3[i]<<" ";
// }
// return 0;
// }

//Purpose: - Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists a pair in the array whose sum is exactly x. 
// #include<iostream>
// using namespace std;
// int main(){ 
//  int arr[]={1,2,3,4,5};
//  int size=sizeof(arr)/sizeof(arr[0]);
//  int x;
//  bool flag=false;
//  cout<<"Enter the value of x\n";
//  cin>>x;
//  for(int i=0; i<size; i++){
//     for(int j=i; j<size; j++){
//         if(arr[i]+arr[j]==x){
//             flag=true;
//             break;
//         }
//     }
//         if(flag==true){
//             break;
//         }
//  }
//  cout<<flag<<endl;
// return 0;
// }


//Purpose: - Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists a pair in the array whose difference is exactly x. 
// #include<iostream>
// using namespace std;
// int main(){ 
//  int arr[]={1,2,3,4,5};
//  int size=sizeof(arr)/sizeof(arr[0]);
//  int x;
//  bool flag=false;
//  cout<<"Enter the value of x\n";
//  cin>>x;
//  if(x>0){
//  for(int i=0; i<size; i++){
//     for(int j=i; j<size; j++){
//         if(arr[i]-arr[j]==-(x)){
//             flag=true;
//             break;
//         }
//     }
//         if(flag==true){
//             break;
//         }
//  }
//  cout<<flag<<endl;
//  }
//  else{
//  for(int i=0; i<size; i++){
//     for(int j=i; j<size; j++){
//         if(arr[i]-arr[j]==x){
//             flag=true;
//             break;
//         }
//     }
//         if(flag==true){
//             break;
//         }
//  }
//  cout<<flag<<endl;
//  }
// return 0;
// }

//Purpose: - Given a vector arr[] sorted in increasing order. Return an array of squares of each number sorted in increasing order. 
// #include<iostream>
// using namespace std;
// int main(){ 
//  int arr[]={3,2,5,1,7, 8, 4};
//  int size=sizeof(arr)/sizeof(arr[0]); 
// int squareArr[size];
//  //Logic for sorting array in ascending order
//  for(int i=0;i<size-1; i++){
//     for(int j=0; j<size-1; j++){
//     if(arr[j]>arr[j+1]){
//         int temp=arr[j];
//         arr[j]=arr[j+1];
//         arr[j+1]=temp;
//     }
//  }
//  }

//  for(int i=0; i<size; i++){
//     squareArr[i]=arr[i]*arr[i];
//  }
//  for(int i=0;i<size; i++){
//  cout<<squareArr[i]<<" ";
//  }
// return 0;
// }
