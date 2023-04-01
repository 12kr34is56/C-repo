// //Purpose:  To print the pattern of pyramid
// #include<iostream>
// using namespace std;
// int main(){ 
//  int rows;
//  cout<<"Enter rows : ";
//  cin>>rows;

//  for(int r=1;r<=rows; r++){ //loop for printing rows 
//     for(int space=1; space<=rows-r;space++){ // printing number of spaces for eaach row by space= rows-rownumber
//     cout<<"   ";
//     }
//     for(int col=1; col<=2*r-1;col++){ // printing a number of stars for each row by number of stars= 2*rownumber-1
//     cout<<" * ";
//     }
//     cout<<endl;
//  }
// return 0;
// }



// //Purpose: TO print the inverted triangle  
// #include<iostream>
// using namespace std;
// int main(){ 
//  int rows, rowCopy;
//  cout<<"Enter rows";
//  cin>>rows;
//  rowCopy=rows;
//  for(int r=1;r<=rows;r++){
//     for(int c=1; c<=rowCopy; c++){
//         cout<<" * ";
//     }
//     cout<<endl;
//     rowCopy--;
//  }
// return 0;
// }



// //Purpose: To print a triangular pattern by taking the number of rows from the user 
// #include<iostream>
// using namespace std;
// int main(){ 
//  int row;
//  cout<<"Enter rows\n";
//  cin>>row;
//  for(int r=1; r<=row; r++){
//     for(int col=1; col<=r; col++){
//         cout<<" * ";
//     }
//     cout<<endl;
//  }
// return 0;
// }



//Purpose: To print a hollow rectangular pattern and taking numebr of rows and columns from the user 
// #include<iostream>
// using namespace std;
// int main(){ 
//  int row,column;
//  cout<<"Enter the rows and columns of the hollow rectangle\n";
//  cin>>row>>column;
//  METHOD 1
//  //Printing row number 1
//  for(int col=1; col<=column;col++){
//     cout<<" * ";
//  }
//  cout<<endl;
//  //printfing rows from 2nd row to rows-1 
//  for(int r=2; r<=row-1;r++){
//     cout<<" * ";  //Always printing a star in the first column of the rectangle
//     for(int c=2;c<=column-1;c++){  //printing space fro 2nd column to column-1
//         cout<<"   ";
//     }
//     cout<<" * ";
//     cout<<endl;
//  }
//  //printing the last row
//  for(int col=1; col<=column;col++){
//     cout<<" * ";
//  }
//METHOD 2: ANOTHER WAY IS USING IF ELSE WITHIN LOOPS
// for(int r=1;r<=row; r++){
//     for(int c=1;c<=column; c++){
//         if(r==1||r==row||c==1||c==column){
//         cout<<" * ";
//         }
//         else
//         cout<<"   ";
//     }
//     cout<<endl;
// }
// return 0;
// }



//Purpose: TO print a RECTANGULAR PATTERN and taking number of rows and columns as input  
// #include<iostream>
// using namespace std;
// int main(){ 
//  int row,column;
//  cout<<"ENter the number of rows and columns \n";
//  cin>>row>>column;
//  for(int r=1; r<=row;r++){
//  for(int c=1; c<=column; c++){
//  cout<<" * ";
//  }
//  cout<<endl;
//  }
// return 0;
// }



// // Purpose: a program to print the cross pattern (in the shape of X):
// #include <iostream>
// using namespace std;
// int main() {
// int size = 11; // size of cross,use odd number
// for (int i = 0; i < size; i++) {
// for (int j = 0; j < size; j++) {
// if (i==j || i+j==size-1) {
// cout << "*"<<i<<","<<j;
// } else {
// cout << "   ";
// }
// }
// cout << "\n";
// }
// return 0;
// }



// //Purpose:  a program to print alphabet diamond pattern:
// #include<iostream>
// using namespace std;
// int main(){ 
//  int row;
//  cout<<"Enter the number of rows\n";
//  cin>>row;
//  //For printing the space
// for(int i=1; i<=row; i++){
//  for(int j=1; j<=row-i; j++){
//     cout<<" ";
//  }
//  for(int k=1, ch=65; k<=i*2-1; k++, ch++){
//     cout<<(char)ch;
//  }
//  cout<<"\n";
// }
// //printing the reverse pyramid
// for(int i=row-1;i>=1; i--){
//     for(int j=1; j<=row-i;j++){
//         cout<<" ";
//     }
//     for(int k=1, ch=65; k<=i*2-1; k++, ch++){
//         cout<<(char)ch;
//     }
//     cout<<"\n";
// }
// return 0;
// }



// //Purpose: Write a program to print + pattern  
// #include<iostream>
// using namespace std;
// int main(){ 
//  int row, mid;
//  cout<<"Enter the number of rows\n";  //Enter only odd numbers
//  cin>>row;
//  mid= row/2;
// for(int i=0; i<row; i++){
//     for(int j=0; j<row; j++){
//         if(i==mid||j==mid){
//             cout<<" * ";
//         }
//         else
//         cout<<"   ";
//     }
//     cout<<"\n";
// }
// return 0;
// }



// //Purpose: a C++ program to print a triangle of prime numbers upto given number of lines of the triangle. 
// #include<iostream>
// using namespace std;
// int main(){ 
//  int row, prime=2, pCheck=0;
//  cout<<"Enter the number of rows\n";
//  cin>>row;
//  for(int i=1;i<=row; i++){
//     for(int k=1; k<=row-i; k++){
//         cout<<"  ";
//     }
//         for(int j=1;j<=i; j++){
//             if(prime!=2){
//            for(int i=2; i<prime; i++){
//          if(prime%i==0){
//             prime++;
//             continue;
//         }}}
//             if(prime<10){
//             cout<<"  "<<prime<<"  ";
//             }
//             else{
//             cout<<"  "<<prime<<" ";
//             }
//         prime++;
//         }
//         cout<<"\n";
//  }
// return 0;
// }
