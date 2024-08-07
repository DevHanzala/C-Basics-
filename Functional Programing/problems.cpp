#include<iostream>
using namespace std;

#pragma region // Alternate swapping
// void alternateSwap(int arr[],int size){
// for (int  i = 0; i < size; i+=2)
// {
//     if (i+1<size)
//     {
//         swap(arr[i],arr[i+1]);
//     }
// }
// }
#pragma endregion

#pragma region //Find unique num in an array
// int uniqueNumber(int arr[],int size){
//     int ans=0;
//     for (int  i = 0; i < size; i++)
//     {
//         ans=ans^arr[i];
//     }
//     return ans;
// }

#pragma endregion


#pragma region 
// int findDuplicate(int arr[],int size){
//     int ans=0;
//     // XOR in all array element
//     for (int i = 0; i < size; i++)
//     {
//         ans=ans^arr[i];
//     }

//     // XOR [1,N-1]
//     for (int i = 1; i < size; i++)
//     {
//         ans=ans^i;
//     }
//     return ans;
// }

#pragma endregion

// void understand(int arr[],int size){
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i+1; j < size; j++)
//         {
//             for (int k = j+1; k < size; k++)
//             {
//                 cout<<i<<" "<<j<<" "<<k<<endl;
//             }
//             cout<<endl;
//         }
//     } 
// }

#pragma region 
// void sort_0_and_1(int arr[],int size){
//     int count=0;
//     // for counting no of 1's
//     for (int i = 0; i < size; ++i)
//     {
//     if (arr[i]==1)
//     {
//         count++;
//     }
//   }
//     cout<<count<<endl;
// int count_0=0;
//     for (int i = 0; i < size; ++i)
//     {
//         if (arr[i]==0)
//         {
//             count_0++;
//         }
//     }
//     cout<<count_0<<endl;    
//   }
#pragma endregion



// void printArr(int arr[],int size){
//     for (int  i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;   
// } 


int main(){
    // int num[6]={1,2,3,4,5,6};
    // alternateSwap(num,6);
    // printArr(num,6);


    // int number[7]={1,2,1,4,2,16,4};
    // int res=uniqueNumber(number,7);
    // cout<<res;
    
    // int number[7]={1,2,3,4,4,5,6};
    // int res=findDuplicate(number,7);
    // cout<<"Ans: "<<res<<endl;
    // printArr(number,7);

    
    // int number[9]={1,2,3,4,5,6,7,8,9};
    // understand(number,9);
    // // printArr(number,7);

        // int number[6]={1,0,0,1,0,1};
        // sort_0_and_1(number,6);
    // printArr(number,7);   
}