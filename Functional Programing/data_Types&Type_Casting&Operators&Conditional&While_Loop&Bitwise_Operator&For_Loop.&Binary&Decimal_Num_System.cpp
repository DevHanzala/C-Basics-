#include<iostream>
#include<math.h>
using namespace std;
int main(){
    // cout<<"Hello world !"<<endl;
    // cout <<"Welcome in C++ \n";
    // cout <<"Hanzala Ghani" <<'\n';
    // cout <<'\n';

#pragma region     // data Types

    // int a=7;
    // cout << a<<endl;
    // char b='A';
    // cout <<b<<endl;
    // bool c=true;
    // cout << c<<endl;
    // float f=1.23;
    // cout<<f<<endl;
    // double d=2.34;
    // cout<<d<<endl;
    // int size=sizeof(b);
  #pragma endregion  // cout<<"Size of b is: "<<size<<endl;
 
 #pragma region // Type Casting
//  int a='A';
//  cout<<a<<endl;    //gives a ASCII value

//  char ch=65;
//  cout<<ch<<endl;    //Print A

//  char ch1=123456;   //overflow 
//  cout<<ch1<<endl;

// unsigned int h= 12345;  //only store +ve no(by default unsigned hi hota)
// cout<<h<<endl;

// //  signed int  t=-23;
// int t=-45;
// cout<<t<<endl;

 #pragma endregion

#pragma region //Operators
// int a=3/2;   //int/int=>int    float/int=>float   double/int=>double
// cout<<a<<endl;

// float f= 2.3/2;
// cout<<f<<endl;

// double d=23.4/8;
// cout<<d<<endl;


// Relational Oerator
// int a=56;
// int b=45;
// bool c=a==b;
// cout<<c<<endl; //0=>false

// bool c=a>b;
// cout<<c<<endl;

// bool result=a!=55 && b==45;
// cout<<result<<endl;

// bool res= a>b||b>a;
// cout<<res<<endl;
#pragma endregion

#pragma region //conditionals  && while loop
// int a;
// cin>>a;
// int b;
// cin>>b;
// if(a>b){
//     cout<<"Answer is: "<<a<<endl;
// }
// else{
//     cout<<"Answer is b: "<<b<<endl;
// }

// int c,d;
// cin>>c>>d;
// cout<<c+d<<endl;
// int a;
// a=cin.get();
// cout<<"Value of a is: "<<a<<endl;   //it gives a ASCII value 

// int a=2;
// // cin>>a;
// if(a>0){
//     cout<<"Positive no"<<endl;
// }
// else if(a==0){
//     cout<<"Number is zero"<<endl;
// }
// else{
//     cout<<"Number is negative"<<endl;
// }

// return 0;


// int n=12;
// int i=2;
// while (i<n)
// {
//     if(n%i==0){
//        cout<<"Not Prime for: "<<i<<endl;
//     }
//     else{
//         cout<<"prime for: "<<i<<endl;
//     }
//     i++;
// }

// Patterns
// int n=4;
// int i=1;
// while (i<=n)
// {
//     int j=1;
//     while (j<=n)
//     {
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


// int n=5;
// int i=1;
// while (i<=n)
// {
//     int j=1;
//     while (j<=n)
//     {
//         cout<<i;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// int n=5;
// int i=1;
// while (i<=n)
// {
//     int j=i;
//     while (j<=n)
//     {
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// int n=5;
// int i=1;
// while (i<=n)
// {
//     int j=i;
//     while (j<=i)
//     {
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// int n = 5;
//     int i = 1;
//     while (i <= n) {
//         int j = 1;
//         while (j <= i) {
//             cout << "  *";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

// int n=5;
// int i=1;
// while (i<=n)
// {
//     int j=1;
//     while (j<=n)
//     {
//         cout<<j;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// int n=6;
// int i=1;
// while (i<=n)
// {
//     int j=1;
//     while (j<=n)
//     {
//     cout<<n-j+1;
//     j++;
//     }
//     cout<<endl;
//     i++;
// }

// int n=6;
// int i=1;
// int count=1;
// while (i<=n)
// {
//     int j=1;
//     while (j<=n)
//     {
//     cout<<count<<" ";
//     count++;
//     j++;
//     }
//     cout<<endl;
//     i++;
// }


// int count=1;
// int n=4;
// int i=1;
// while (i<=n)
// {
//     int j=1;
//     while (j<=i)
//     {
//         cout<<count<<" ";
//         count++;
//         j++;
//     }
//     cout<<endl;
//     i++;
    
// }

// int n=4;
// int i=1;
// while (i<=n)
// {
//     int j=1;
//     while (j<=i)
//     {
//         cout<<i-j+1<<
//         " ";
//             j++;
//     }
//     cout<<endl;
//     i++;
// }


// int n=6;
// int i=1;
// while (i<=n)
// {
//     int j=1;
//     while (j<=n)
//     {
//         char ch='A' + i-1;
//         cout<<ch;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


// int n=7;
// int i=1;
// char ch='A';

// while (i<=n)
// {
//     int j=1;
//     while (j<=i)
//     {
//         cout<<ch;
//         ch++;
//         j++;

//     }
//     cout<<endl;
//     i++;
// }

// int n=4;
// int i=1;
// while (i<=n)
// // for printig space 
// {
// int space=n-i;
// while (space)
// {
//     cout<<" ";
//     space--;
// }
// // for printing stars
// int j=1;
// while (j<=n)
// {
//     cout<<"*";
//     j++;
// }
// cout<<endl;
// i++;
// }


// int n=5;
// int i=1;
// while (i<=n)
// {
//     int space=n-i;
//     while (space)
//     {
//         cout<<" ";
//         space--;
//     }
//     int j=1;
//     while (j<=i)
//     {
//         cout<<j;
//         j++;
//     }
//     int start=i-1;
//     while (start)
//     {
//         cout<<start;
//         start--;
//     }
//     cout<<endl;
//     i++;
// }


#pragma endregion


#pragma region //Bitwise operator && for loop

// AND &
// OR |
// NOT ~
// XOR ^

// int a=4;
// int b=6;
// cout<<"a&b: "<<(a&b)<<endl;
// cout<<"a|b: "<<(a|b)<<endl;
// cout<<"~a: "<<(~a)<<endl;
// cout<<"a^b: "<<(a^b)<<endl;

// // left\right  shift operator
// cout<<(3<<2)<<endl;   //left shift mostly multiply by 2
// cout<<(10>>2)<<endl;   //right shift mostly divide by 2
// cout<<(100>>2)<<endl;
// cout<<(2056000<<4)<<endl;   //in some  cases big no convert into -ve


// Pre\Post inc / dec
// int i=7;
// cout<<++i<<endl;  //8
// cout<<i++<<endl;  //8
// cout<<--i<<endl;  //8
// cout<<i--<<endl;  //8

// for (int i = 0; i <=5; i++)
// {
//     cout<<"Congratz :-)"<<endl;
//     if(i==4){
//         break;
//     }
// }


// for (int a = 1,b=2,c=3; a <=5 && b<=10 && c<=15; a++,b+=2,c+=3)
// {
//     cout<<"a , b and c: "<<(a+b+c)<<endl;
// }


// Fibonacci Series
// int n=10;
// int a=0;
// int b=1;
//     cout<<a;
//     cout<<b;
// for (int i = 0; i < n; i++)
// {
//     int sum=a+b;
//     cout<<sum;
//     a=b;
//     b=sum;
// }


// for (int  i = 0; i < 5; i++)
// {
//     cout<<"Hanzala"<<endl;
//     cout<<"Ghani"<<endl;
//     continue;
//     cout<<"Bhaga bhag";   //unreachable code
// }


// for (int i = 1; i < 5; i++)
// {
//     if (i==3)
//     { 
//         continue;   //skip the third iteration 
//     }
//     cout<<i<<endl;
// }

// for (int i = 1; i <6; i++)
// {
//     cout<<i<<" "<<endl;
//     i++;
// }
  
// Scope of variable
// int a=4;
// cout<<a<<endl;
// if (true)
// {
//     int a=5;
//     cout<<a<<endl;
// }
// cout<<a<<endl;


// Questions
// int prod=1;
// int sum=0;
// int n=234;
// while (n!=0)
// {
//     int digit=n%10;
//     prod=prod*digit;
//     sum=sum+digit;
//     n=n/10; 
//     cout<<n<<endl;
// }
// int ans=prod-sum;
// cout<<ans<<endl;
#pragma endregion

#pragma region  //Binary and Decimal number system

// Decimal to binary
  // int n = 7;
  //   int ans = 0;
  //   int i = 0;
  //   int power_of_10 = 1;
  //   while (n != 0) {
  //       int bit = n & 1;
  //       ans = (bit * power_of_10) + ans;
  //       n = n >> 1;
  //       power_of_10 *= 10;
  //   }
  //   cout << "Answer is: " << ans << endl;


// Binary to decimal
// int n=110;
// int i=0;
// int ans=0;
// int power_of_10 = 1;
// while (n!=0)
// {
//   int digit=n % 10;
//   if (digit==1)
//   {
//     ans=ans + power_of_10;
//     power_of_10 *= 2;
//   } 
//   n=n/10;
//   i++;
// }
// cout<<ans<<endl;


// int ans=0;
// int x=12345;
// while (x!=0)
// {
//   int digit=x%10;
//   if((ans>INT32_MAX/10) || (ans<INT32_MIN/10)){
//     return 0;
//   }
//   ans=(ans*10)+digit;
//   x=x/10;
//  cout<<ans<<endl;
// }


// int n=12;
// int m=n;
// int mask=0;
// if(n==0){
//   return 1;
// }
// while (m!=0)
// {
//   mask=(mask<<1) | 1;
//   m=m>>1;
// }
// int ans=(~n) & mask;
// cout<<ans;

// int n=128;
// for(int i=0;i<=30;i++){
//   int ans=pow(2,i);
//   cout<<ans<<endl;
//   if(ans==n){
//     return true;
//   }
// }
// return false;
#pragma endregion
}