#include<bits/stdc++.h>

using namespace std;
 int main(){
   // 
   // only stores duplicate elements also
    unordered_set<int> us;
    us.insert(10);
     us.insert(20);
    us.insert(30);
    us.emplace(40);
    us.insert(20); // Duplicate, will not be added
    cout << "Size of set: " << us.size() << endl; // Output the size of set
    cout << "Is 20 present? " << (us.count(20)) << endl; // this will return num of occurances of 20
    cout << "Is 50 present? " << (us.count(50) ? "Yes" : "No") << endl; // this will return num of occurances of 50
    us.erase(us.find(20)); // Remove the first occurance of 20. which is also an iterator
    cout << "Elements in set: ";

     // print the elements
     for(int val : us){
      cout<<val<<" ";

     }
cout<<endl;
       unordered_set<string> countries;

  // inserts "Nepal" into countries
  countries.insert("Nepal");

  // inserts "Nepal" , "India", "USA", "Korea" into countries
  countries.insert({"Nepal", "India", "USA", "Korea"});

  cout << "Countries = ";
  // display elements of countries
  for(const auto& country: countries) {
    cout << country << ", ";
  }
    return 0;
 }

