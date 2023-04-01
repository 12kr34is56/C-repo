//Purpose: To count the number of even and odd numbers in an array 
// #include<iostream>
// using namespace std;
// int main(){ 
//  int arr[]={1,2,3,4,5};
//  int n= sizeof(arr)/sizeof(arr[0]),odd=0, even=0;
//  for(int i=0; i<n; i++){
//     if(arr[i]%2==0){
//         even++;
//     }
//     else{
//         odd++;
//     }
//  }
//  cout<<"Even: "<<even<<endl;
//  cout<<"odd: "<<odd<<endl;
// return 0;
// }

//Purpose: - Given an integer array and its size, find the sum of the greatest and the smallest integer present in the array. 
// #include<iostream>
// using namespace std;
// int main(){ 
//  int arr[]={12,2,33,3,5};
//  int n= sizeof(arr)/sizeof(arr[0]),smallest=arr[0], largest=arr[0];
//  for(int i=0; i<n; i++){
// if(arr[i]<smallest){
// smallest=arr[i];
// }
// if(arr[i]>largest){
//     largest=arr[i];
// }
//  }
//  cout<<"Largest: "<<largest<<endl<<"Smallest: "<<smallest<<endl;
//  cout<<"The sum of the largest and smallest numbers in an array is: "<<largest+smallest;
// return 0;
// }

//Purpose: Given an integer array and its size, reverse the array and print it 
// #include<iostream>
// using namespace std;
// int main(){ 
//  int arr[]={12,2,33,3,5, 6};
//  int n= sizeof(arr)/sizeof(arr[0]);
//  for(int i=0, j=n-1; i<n/2;i++, j--){
//      int temp;
//     temp=arr[j];
//     arr[j]=arr[i];
//     arr[i]=temp;
//  }
//  for(int i=0; i<n;i++){
//     cout<<arr[i]<<" ";
//  }
// return 0;
// }



