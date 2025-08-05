#include<bits/stdc++.h>

using namespace std;
 int main(){
   // set stores unique elements in sorted order
    set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.emplace(40);
    s.insert(60);
    s.insert(20); // Duplicate, will not be added
    cout << "Size of set: " << s.size() << endl; // Output the size of set
    cout << "Is 20 present? " << (s.count(20) ? "Yes" : "No") << endl; // Check if 20 is present
    cout << "Is 50 present? " << (s.count(50) ? "Yes" : "No") << endl; // Check if 50 is present
    s.erase(30); // Remove element 30
    // sort the set in a descending order
   // print the set elements
   for(int i: s){
    cout<<i<<" ";
   }


   s.erase(30);
    cout << "Elements in set: ";
    for (const auto& elem : s) {
        cout << elem << " "; // Output the elements in sorted order
    }

    // check if a value is present in the set

  cout<<s.empty();
    return 0;
 }

