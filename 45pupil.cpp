//Purpose: There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls received grades "A" if 17 boys made up 80% of the students that received grades "A". 
#include<iostream>
using namespace std;
int main(){ 
 int total, girls_A, boys_A, grade_A;
 cout<<"Enter the total number of students in the class\n";
 cin>>total;
 cout<<"Enter the percent of total students who got Grade A in class\n";
 cin>>grade_A;
 grade_A=((float)grade_A/100)*total;
 cout<<grade_A<<endl;
 cout<<"Enter the number of boys who got Grade A\n";
 cin>>boys_A;
 girls_A=grade_A-boys_A;
 cout<<"The number of girls who got grade A is : "<<girls_A;

return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
// int total, boys, girls;
// boys = 17;
// total = (80*45)/100; //total students getting grade A
// girls = total - boys; //total number of girls getting grade A
// cout << "Number of girls getting grade A = " << girls << endl;
// return 0;
// }