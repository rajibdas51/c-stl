#include<bits/stdc++.h>

using namespace std;
 int main(){
    list <int> l={1,2,3,4,5};
    l.push_back(6);
    l.emplace_back(7);
    l.push_front(0);
    l.emplace_front(-1);
    l.pop_back();

    cout<< "List elements: ";
      for(auto x: l){
        cout<<x<<" ";
      } 
 


 // rest of the functions are similar as vector
    l.pop_front();
    l.insert(l.begin(),-2);
    l.insert(l.begin(),2,34);
    l.erase(l.begin(), std::next(l.begin(), 2)); // deletes -2 and 0
    cout<<endl;
     for(auto x: l){
        cout<<x<<" ";
     }
     cout<<endl;

     // printing list using iterator
     list<int>::iterator it = l.begin();
     it++;
     cout<<*it<<endl; // prints 1
     std::advance(it, 2); // now it points to 3
     cout<<*it<<endl; // prints 3

     cout<<l.front()<<" "<<l.back()<<endl; // prints 1 6

         return 0;
 }