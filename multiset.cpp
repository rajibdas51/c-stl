#include<bits/stdc++.h>

using namespace std;
 int main(){
   // Everything is same as set except few things
   // only stores duplicate elements also
    multiset<int> ms;
    ms.insert(10);
     ms.insert(20);
    ms.insert(30);
    ms.emplace(40);
    ms.insert(20); // Duplicate, will not be added
    cout << "Size of set: " << ms.size() << endl; // Output the size of set
    cout << "Is 20 present? " << (ms.count(20)) << endl; // this will return num of occurances of 20
    cout << "Is 50 present? " << (ms.count(50) ? "Yes" : "No") << endl; // this will return num of occurances of 50
    ms.erase(ms.find(20)); // Remove the first occurance of 20. which is also an iterator
    cout << "Elements in set: ";

     // print the elements
     for(int val : ms){
      cout<<val<<" ";
     }
    return 0;
 }

