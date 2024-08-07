#include<iostream>
#include<math.h>
using namespace std;
// int main(){

// #pragma region //Switch statements
// // int num=2;
// // switch (num)
// // {
// // case 1: cout<<"First case"<<endl;
// //     break;
// // case 2:cout<<"Second case"<<endl;
// // break;
// // case 3:
// // cout<<"We are in nesed switch"<<endl;
// // switch (num)
// // {
// // case 3:cout<<"The number is: "<<num<<endl;
// //     break;
// // default:cout<<"No match found"<<endl;
// // }
// // break;;
// // default: cout<<"Default Case"<<endl;    //not mendatory
// // }

// // Simple Calculator 
// // int a,b;
// // a=10;
// // b=20;
// // char op='/';
// // switch (op)
// // {
// // case '+':
// //     cout<<(a+b)<<endl;
// //     break;
// // case '-':cout<<(a-b)<<endl;
// // break;
// // case '*':cout<<(a*b)<<endl;
// // break;
// // case '/':cout<<(a/b)<<endl;
// // break;
// // default:cout<<"Entre a valid operation";
// // }

// #pragma endregion
// }

#pragma region //Functions

// int power(int a,int b){
//     int result=1;
//     for (int i = 1; i <=b; i++)
//     {
//         result=a*result;
//     }
//         return result;
// }

// bool isEven(int num){
//     //odd
//     if(num&1){
//         return 0;
//     }
//     //even
//     else{
//       return 1;
//     }
// }

// int factorial(int a){
// int fact=1;
// for ( int i = 1; i <=a; i++)
// {
//     fact=fact*i;
// }
// return fact;
// }

// int nCr(int n,int r){
//     int num=factorial(n);
//     int denom=factorial(r)*factorial(n-r);
//     return num/denom;
// }

// int ArithmeticProg(int a){
//     return (3*a+7);
// }

// int FibonacciSeries(int n){
//     int a=0;
//     int b=1;
//     int sum;
//     for (int i = 0; i <n; i++)
//     {
//        sum=a+b;
//        cout<<sum<<endl;
//         a=b;
//         b=sum;
//     }
//         return sum;    
// }

// Pass By Value
void num(int n){
    n++;
    cout<<"n is: "<<n<<endl;
}
int main(){
    // int ans=power(6,3);
    // cout<<ans<<endl;

    // bool res=isEven(2);
    // cout<<res<<endl;
     
    // int result=nCr(7,7);
    // cout<<result<<endl; 
   
    // int ans=ArithmeticProg(5);
    // cout<<ans<<endl;

    // int res=FibonacciSeries(5);
    // cout<<res<<endl;

    int n=5;
     num(n);
     cout<<"no is: "<<n<<endl;
}
#pragma endregion
