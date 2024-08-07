#include<iostream>
using  namespace std;


int main(){
//pointers why we need a pointer?
//we have a var num its value is 5 its stored in memory according to its corresponding address like num====120
//in memory we have symbol table which allocate address to the var we see prog for more clearity

// int num=5;
// num++;  //updated both line 11 and 19 
// cout<<num<<endl;
// //address of operatoer  - &
// cout<<"Address of num: "<<&num<<endl;   //address in HexaDeciaml Format
// //Create a pointer
// int *ptr=&num;   //[&num]====Address of num [*ptr]===value at address pointed by ptr 
// // *ptr++;       //[*]===derefrence operator
// // num++;
// cout<<"Through pointer val of num : "<<*ptr<<endl;   //address in HexaDeciaml Format
// cout<<"Address of Pointer : "<<ptr<<endl;   //address in HexaDeciaml Format

// double d=2.34;
// double *dp=&d;
// d++;
// cout<<d<<" "<<*dp<<endl;   //same printing
// cout<<&d<<" "<<dp<<endl;   //addresses printing


// cout<<"Size of d is: "<<sizeof(d)<<endl;
// cout<<"Size of Pointer is: "<<sizeof(dp)<<endl;
// cout<<"Size of Pointer is: "<<sizeof(&num)<<endl;   //its depends on system 32 bit has 4 byte and 64 has 8 byte

//point to any garbage values but its bad practice
// int *p;

// int *p=0;
// cout<<*p<<endl;

// int i=5;
// int *p=0;
// int *q=&i;
// p=&i;
// i++;
// cout<<p<<endl;
// cout<<*p<<endl;
// cout<<q<<endl;
// cout<<*q<<endl;


// If we want to copying a pointer
// int *s=p;
// cout<<p<<" "<<s<<endl;
// cout<<*p<<" "<<*s<<endl;

// int i=10;
// int *t=&i;
// cout<<t<<"--> "<<*t<<endl;
// t=t+1;
// cout<<t<<"--> "<<*t<<endl;  //it moves to the 4 bit towards

}   