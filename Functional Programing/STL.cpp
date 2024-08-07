#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<iterator>
#include<algorithm>
using namespace std;


int main(){
    #pragma region  //Array
    // int basic[]={1,2,3};

    // array<int,4> a={20,30,40,50};
    // int size=a.size();
    // int count=0;

    // cout<<"Empty or not "<<a.empty()<<endl;  //True/False
    
    // cout<<"Sum of first and last element: "<<a.front()+a.back()<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     // cout<<"Element of "<<i<<"--> "<<a[i]<<endl;

    //     //Refer the index
    //     // cout<<a.at(i)<<endl;
        
    //     count++;
    // }
    // cout<<count<<endl;
    #pragma endregion

#pragma region //Vector
//if I chosse size 4 and i push 5 fifth element in it so it will double our size and copy all previous array element and store in it 
//and demolish first one array

// vector<int> v;
// cout<<"Capacity of vector: "<<v.capacity()<<endl;  //default is 0

// v.push_back(1);
// cout<<"Capacity of vector: "<<v.capacity()<<endl;  
// v.push_back(2);
// cout<<"Capacity of vector: "<<v.capacity()<<endl;  
// v.push_back(3);
// cout<<"Capacity of vector: "<<v.capacity()<<endl;  

// cout<<"size of array: "<<v.size()<<endl;

// cout<<v.at(2)<<endl;
// cout<<v.front()+v.back()<<endl;

// v.pop_back();  //remove element from the last
// cout<<v.size()<<endl;

// v.pop_back();
// cout<<v.size()<<endl;

// for (int i:v )
// {
//     cout<<i<<endl;
// }

// vector<int> a(5,1);
// a.push_back(10);   //size 6 and capacity becomes 10
// cout<<"Size and capacity of vector a: "<<a.size()<<" and "<<a.capacity()<<endl;
// for (int i :a)
// {
//     cout<<i<<" ";
// }
// cout<<endl;

// make a copy of above vector
// vector<int> last(a);
// for(int s:last){
//     cout<<s<<" ";
// }
// cout<<endl;
// last.push_back(20);
// cout<<"Size and capacity of vector last: "<<last.size()<<" and "<<last.capacity()<<endl;  //size and capacity remain same at the thime of copying vector
#pragma endregion

#pragma region //deque || DQ
// In thsi scenario we can add or delete from both ends if we simply explain we can perform insertion or deletion both at a time
// deque<int> a;
// a.push_back(2);
// a.push_front(1);
// a.push_front(5);


// a.pop_back();
// a.pop_front();

// cout<<"First index element: "<<a.at(1)<<endl;
// cout<<"Sum of elements: "<<a.front()+a.back()<<endl;

// cout<<a.empty()<<endl;
// cout<<a.size()<<endl;
// a.erase(a.begin(),a.begin()+1);   //first element deletion
// cout<<a.size()<<endl;
// cout<<a.max_size()<<endl;
// a.erase(a.begin(),a.end());   // whole deletion 
// cout<<a.size()<<endl;
// cout<<a.max_size()<<endl;  // no changes 
// for (int i:a)
// {
//     cout<<i<<" ";
// }


#pragma endregion

#pragma region //List
// list<int> l;
// l.push_back(3);
// l.push_front(1);

// cout<<l.size()<<endl;
// for (int i:l)
// {
//     cout<<i<<endl;
// }    
// l.erase(l.begin());
// cout<<"After erase"<<endl;
// for (int i:l)
// {
//     cout<<i<<endl;
// }    

// list<int> New(l);
// list<int> New(5,1000);
// // cout<<New.size()<<endl;
// int count=0;
// for (int i:New)
// {
//     count=i+count;
// }
// cout<<count<<endl;
#pragma endregion

#pragma region //Stack
// Its works on LIFO Principle means last in first out
// stack<string> s;

// s.push("Hanzala Ghani");
// s.push("Huzaifa Ghani");
// s.push("Hamza Anwar");

// cout<<"Top element: "<<s.top()<<endl;
// s.pop();
// cout<<"Top element: "<<s.top()<<endl;

// cout<<s.empty()<<" "<<s.size()<<endl;

#pragma endregion

#pragma region //queue
//Queue means Line simply first in first out
// queue<string>q;
// q.push("Chicago");
// q.push("Chille");
// q.push("China");

// q.pop();
// cout<<q.empty()<<" "<<q.size()<<" "<<q.front();
#pragma endregion

#pragma region //Priority queue
// Its work on max and min heap concept like first greatest or lowest see exampke for further clearity
// max_Heap
// priority_queue<int> maxi;
// maxi.push(3);
// maxi.push(1);
// maxi.push(0);
// maxi.push(2);
// int n=maxi.size();
// for (int i = 0; i <n; i++)
// {
//     cout<<maxi.top()<<" ";
//     maxi.pop();
// }

// min_Heap
// priority_queue<int,vector<int>,greater<int>>mini;
// mini.push(3);
// mini.push(1);
// mini.push(0);
// mini.push(2);
// int n=mini.size();
// for (int i = 0; i <n; i++)
// {
//     cout<<mini.top()<<" ";
//     mini.pop();
// }

#pragma endregion

#pragma region //set
// set<int> s;
// s.insert(0);
// s.insert(2);
// s.insert(6);
// s.insert(1);
// s.insert(1);
// s.insert(5);
// s.insert(5);
// for (int i:s)     
// {
//     cout<<i<<" ";   //sorted order
// }
// cout<<endl;
// cout<<s.size()<<endl;
// cout<<s.empty()<<endl;
// // set<int>::iterator it=s.begin();
// // it++;
// // s.erase(it);
// for (int i:s)     
// {
//     cout<<i<<" ";   //sorted order
// }
// cout<<endl;

// // cout<<"1 is present or not: "<<s.count(1)<<endl;
// // set<int>::iterator itr=s.find(5);     explore in detail
// for (int i:s)
// {
//     cout<<i<<" ";
//     }

#pragma endregion

#pragma region //Map
//ket value pair form 
// map<int,string> m;

// m[1]="Ghazali";
// m[12]="Arabi";
// m[3]="Jharakand";

// m.insert({6,"Jamnagar"});
// for (auto i:m)
// {
//   cout<<i.first<<" :"<<i.second<<endl;     //sorted result
// }

// cout<<m.count(12)<<endl;
// m.erase(12);
// cout<<m.count(12)<<endl;

#pragma endregion

#pragma region  //algorithm 
// vector<int> v;

// v.push_back(1);
// v.push_back(3);
// v.push_back(2);
// v.push_back(0);

// cout<<binary_search(v.begin(),v.end(),18)<<endl;

// int a=3;
// int b=5;

// cout<<"Max: "<<max(a,b)<<endl;
// cout<<"Min: "<<min(a,b)<<endl;

// swap(a,b);
// cout<<a<<endl;

// string s="ABCD";
// reverse(s.begin(),s.end());
// cout<<s<<endl;

// sort(v.begin(),v.end());  //Quick,Heap and Insertion sort combine to make this sort function
// for (int i:v )
// {
//   cout<<i<<endl;
// }
#pragma endregion
}

