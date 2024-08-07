#include<iostream>
using namespace std;

// void print(int p){
//     cout<<p<<endl;
// }
// void updata(int *p){
//     *p++;
// }
int main(){
// int arr[10]={12,13,14,15,16,17,18,19,20};   //means we allocate 40 byte memory to the arr
// cout<<"Address of First memory block: "<<arr<<" => "<<&arr[0]<<endl;  //array 1st index denote the address of araay
// arr[0]={20};
// cout<<*arr+1<<endl;  //ipdated to 21
// cout<<*(arr+1)<<endl;
// cout<<*(arr)+1<<endl;  //same as line 7   *=>value at | &=>address of
// cout<<(arr+2)<<"==="<<&arr[2]<<endl;


// We found a formula  ===========>
                            //   arr[i]=*(arr+i)
                            //    i[arr]=*(i+arr)

// int i=3;
// cout<<i[arr]<<endl;   //4th index of array
// int *ptr=&arr[0];
// cout<<"Size of pointer and val: "<<sizeof(ptr)<<" and "<<sizeof(*ptr)<<endl;
                

// int a[20]={1,3,5,6,9,10};
// cout<<*a<<" "<<*(a+1)<<" "<<*(a+2)<<" ADDRESS OF 3rd Index element "<<(a+3)<<endl;
// cout<<&a[3]<<endl;  //same as above

// int *p=&a[3];    //both are diffrent 
// cout<<"Address of p "<<&p<<endl;
// cout<<"Address of *p "<<p<<endl;

//Symbol content can not be changed
// int arr[10];
// arr++;   //gives an eroorr  beacuase its not assignable

// int *ptr=&arr[4];
// cout<<ptr<<endl;
// ptr++;   //update address like 710+714
// cout<<ptr<<endl;


// int arr[6]={1,2,3,4,5,6};
// char ch[6]="abcde";

// cout<<arr<<endl;   //print address
// cout<<ch<<endl;    //print content

// char *c=&ch[0];
// cout<<c<<endl;  //print entire array

// char temp='z';
// char *p=&temp;

// char *c="abcde";  // not write this way its too dangerous
// cout<<p<<endl;  //it prints from tis address to array address


// function starts
// int val=5;
// int *p=&val;
// // print(*p);

// cout<<"Before "<<*p<<endl;
// updata(p);
// cout<<"After "<<*p<<endl;

}